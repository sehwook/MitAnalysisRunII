double effSF_m_25_medium[10] = {0.921496,0.909645,0.915082,0.943475,0.952196,0.987913,0.955240,0.985827,0.979746,0.966712};
double effSF_e_25_medium[10] = {0.850016,0.802405,0.884492,0.924319,0.909337,0.968089,0.933551,0.975992,0.961504,0.953784};
double effSF_e_25_tight[10]  = {0.854552,0.784695,0.877789,0.919625,0.903191,0.964315,0.927477,0.972640,0.956129,0.951669};

double fake_rate_m_25_medium[5][5] = {
0.358,0.268,0.251,0.233,0.211,
0.383,0.290,0.266,0.255,0.255,
0.417,0.335,0.318,0.309,0.282,
0.455,0.383,0.370,0.358,0.356,
0.467,0.400,0.391,0.394,0.387
};
double fake_rate_e_25_medium[5][5] = {
0.193,0.220,0.210,0.207,0.185,
0.211,0.213,0.203,0.184,0.200,
0.283,0.257,0.229,0.210,0.194,
0.294,0.261,0.256,0.248,0.281,
0.315,0.294,0.294,0.312,0.347
};
double fake_rate_e_25_tight[5][5] = {
0.114,0.121,0.107,0.114,0.093,
0.107,0.117,0.108,0.097,0.106,
0.173,0.145,0.124,0.112,0.102,
0.230,0.188,0.165,0.153,0.160,
0.229,0.195,0.179,0.179,0.201
};

double weightEWKCorr(float pt, int type){
  double parWZ08[2] = { 2.85714,-0.05714};
  double parZZ08[2] = {-4.57143,-0.06857};
  double parWZ14[3] = {3.69800,-0.0726117,0.0000318044};
  double parZZ14[3] = {-0.586985000,-0.099845900,0.0000445083};
  double corrA = 0.0;
  double corrB = 0.0;
  if     (type == 0){ // WZ13
    corrA = (parWZ08[0]+parWZ08[1]*pt)/100.;
    corrB = (parWZ14[0]+parWZ14[1]*pt+parWZ14[2]*pt*pt)/100.;
  }
  else if(type == 1){ // ZZ13
    corrA = (parZZ08[0]+parZZ08[1]*pt)/100.;
    corrB = (parZZ14[0]+parZZ14[1]*pt+parZZ14[2]*pt*pt)/100.;
  }
  double corr = corrB - (corrB-corrA)/6.;

  if(corr >= 0.0) return 1.0;
  return (1.0+corr);
}

char **strsplit(const char* str, const char* delim, size_t* numtokens) {

    // copy the original string so that we don't overwrite parts of it

    // (don't do this if you don't need to keep the old line,

    // as this is less efficient)

    char *s = strdup(str);

    // these three variables are part of a very common idiom to
    // implement a dynamically-growing array

    size_t tokens_alloc = 1;

    size_t tokens_used = 0;

    char **tokens = (char**)calloc(tokens_alloc, sizeof(char*));

    char *token, *strtok_ctx;

    for (token = strtok_r(s, delim, &strtok_ctx);
            token != NULL;
            token = strtok_r(NULL, delim, &strtok_ctx)) {
        // check if we need to allocate more space for tokens
        if (tokens_used == tokens_alloc) {
            tokens_alloc *= 2;
            tokens = (char**)realloc(tokens, tokens_alloc * sizeof(char*));
        }
        tokens[tokens_used++] = strdup(token);
    }

    // cleanup
    if (tokens_used == 0) {
        free(tokens);
        tokens = NULL;
    } else {
        tokens = (char**)realloc(tokens, tokens_used * sizeof(char*));
    }
    *numtokens = tokens_used;
    free(s);
    return tokens;

}

double nPUScaleFactor(TH1D *fhDPU, float npu){
  double mynpu = TMath::Min(npu,(float)50.999);
  Int_t npuxbin = fhDPU->GetXaxis()->FindBin(mynpu);
  return fhDPU->GetBinContent(npuxbin);
}

double ratioFactor(TH1D *fhDVar, float var){
  Int_t nbin = fhDVar->GetXaxis()->FindBin(var);
  return fhDVar->GetBinContent(nbin);
}

double selectIdIsoCut(TString type, int pdgId, double pt, double eta, double iso, int selBits){
  bool isEB = TMath::Abs(eta) < 1.479;
  double isoCut = 0.;
  bool idCut = false;
  if     (TMath::Abs(pdgId) == 13) {
    isoCut = 0.15;
    if     (type == "default" || type == "medium") idCut = (selBits & BareLeptons::LepMediumIP) == BareLeptons::LepMediumIP;
    else printf("Problem with selectIsoCut!\n");
  }
  else if(TMath::Abs(pdgId) == 11) {
    if     (type == "medium")  isoCut = (isEB ? 0.0766 : 0.0678);
    else if(type == "default") isoCut = (isEB ? 0.0354 : 0.0646);

    if     (type == "medium")  idCut = (selBits & BareLeptons::LepMedium) == BareLeptons::LepMedium;
    else if(type == "default") idCut = (selBits & BareLeptons::LepTight)  == BareLeptons::LepTight;
  }
  else {
    printf("Problem with selectIsoCut!\n");
    assert(0);
  }
  return (idCut && iso/pt < isoCut);
}

void InitializeJetIdCuts(Float_t fMVACut[4][4])
{
  float cutValues[4][4] = {
    -0.95, -0.96 ,-0.94, -0.95,
    -0.95, -0.96 ,-0.94, -0.95,
    -0.15, -0.26 ,-0.16, -0.16,
    -0.15, -0.26 ,-0.16, -0.16
  };
  
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      fMVACut[i][j] = cutValues[i][j];
    }
  }

}

bool passJetId(Float_t fMVACut[4][4], double mva, double pt, double eta){

  int lPtId = 3;
  if     (pt < 10.)
    lPtId = 0;
  else if(pt < 20.)
    lPtId = 1;
  else if(pt < 30.)
    lPtId = 2;

  int lEtaId = 3;
  if     (eta < 2.50)
    lEtaId = 0;
  else if(eta < 2.75)
    lEtaId = 1;
  else if(eta < 3.00)
    lEtaId = 2;

  if (mva > fMVACut[lPtId][lEtaId])
    return true;
  
  return false;

}

double effhDScaleFactor(double pt, double eta, int nsel, int period, TString type, TH2D *fhDMuMediumSF, TH2D *fhDMuIsoSF, TH2D *fhDElMediumSF, TH2D *fhDElTightSF){
  if(TMath::Abs(nsel) == 11) eta = abs(eta);
  Int_t binXA = 0;
  Int_t binYA = 0;
  Int_t binXB = 0;
  Int_t binYB = 0;
  if(pt>=100) pt = +99.999;
  if     (eta>=+2.4) eta = +2.399;
  else if(eta<=-2.4) eta = -2.399;

  if     (TMath::Abs(nsel) == 13 && period == 1 && (type== "medium" || type== "default"))  {binXA = fhDMuMediumSF->GetXaxis()->FindFixBin(eta);binYA = fhDMuMediumSF->GetYaxis()->FindFixBin(pt);binXB = fhDMuIsoSF->GetXaxis()->FindFixBin(eta);binYB = fhDMuIsoSF->GetYaxis()->FindFixBin(pt);}
  else if(TMath::Abs(nsel) == 11 && period == 1 && type== "medium")                        {binXA = fhDElMediumSF->GetXaxis()->FindFixBin(eta);binYA = fhDElMediumSF->GetYaxis()->FindFixBin(pt);}
  else if(TMath::Abs(nsel) == 11 && period == 1 && type== "default")                       {binXA = fhDElTightSF ->GetXaxis()->FindFixBin(eta);binYA = fhDElTightSF ->GetYaxis()->FindFixBin(pt);}
  else    printf("PROBLEM WITH BINS\n");

  if     (TMath::Abs(nsel) == 13 && period == 1 && (type== "medium" || type== "default")) return fhDMuMediumSF->GetBinContent(binXA, binYA)*fhDMuIsoSF->GetBinContent(binXB, binYB);
  else if(TMath::Abs(nsel) == 11 && period == 1 && type== "medium")                       return fhDElMediumSF->GetBinContent(binXA, binYA);
  else if(TMath::Abs(nsel) == 11 && period == 1 && type== "default")                      return fhDElTightSF ->GetBinContent(binXA, binYA);
  return 0;
}

double effScaleFactor(double pt, double eta, int nsel, int period, TString type){
  int iPt = -1;
  if	 (pt < 15) iPt = 0;
  else if(pt < 20) iPt = 1;
  else if(pt < 25) iPt = 2;
  else if(pt < 30) iPt = 3;
  else  	   iPt = 4;

  int iEta = -1;
  if	 (TMath::Abs(eta) < 1.5) iEta = 0;
  else  			 iEta = 1;

  int iPoint = -1;

  if     (iPt==0&&iEta==0) iPoint = 0;
  else if(iPt==0&&iEta==1) iPoint = 1;
  else if(iPt==1&&iEta==0) iPoint = 2;
  else if(iPt==1&&iEta==1) iPoint = 3;
  else if(iPt==2&&iEta==0) iPoint = 4;
  else if(iPt==2&&iEta==1) iPoint = 5;
  else if(iPt==3&&iEta==0) iPoint = 6;
  else if(iPt==3&&iEta==1) iPoint = 7;
  else if(iPt==4&&iEta==0) iPoint = 8;
  else if(iPt==4&&iEta==1) iPoint = 9;
  else assert(0);

  if     (TMath::Abs(nsel) == 13 && period == 1 && (type== "medium" || type== "default")) return effSF_m_25_medium[iPoint];
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "medium")                      return effSF_e_25_medium[iPoint];
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "default")                     return effSF_e_25_tight [iPoint];

  assert(0);

  return 0.0;
}

double fakeRateFactor(double pt, double eta, int nsel, int period, TString type){
  int iPt = -1;
  if	 (pt < 15) iPt = 0;
  else if(pt < 20) iPt = 1;
  else if(pt < 25) iPt = 2;
  else if(pt < 30) iPt = 3;
  else  	   iPt = 4;

  int iEta = -1;
  if	 (TMath::Abs(eta) < 0.5) iEta = 0;
  else if(TMath::Abs(eta) < 1.0) iEta = 1;
  else if(TMath::Abs(eta) < 1.5) iEta = 2;
  else if(TMath::Abs(eta) < 2.0) iEta = 3;
  else  			 iEta = 4;

  if     (TMath::Abs(nsel) == 13 && period == 1 && (type== "medium" || type== "default")) return fake_rate_m_25_medium[iPt][iEta]/(1.0-fake_rate_m_25_medium[iPt][iEta]);
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "medium")			  return fake_rate_e_25_medium[iPt][iEta]/(1.0-fake_rate_e_25_medium[iPt][iEta]);
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "default")			  return fake_rate_e_25_tight [iPt][iEta]/(1.0-fake_rate_e_25_tight [iPt][iEta]);

  assert(0);

  return 0.0;
}

double weightTruePileupFall15_74X(double ntrue){

  if(ntrue > 50) return 1.0;

  double w[50] = {
126.337,
153.753,
108.762,
32.4929,
17.9949,
3.34053,
1.97929,
2.5719,
3.42167,
3.33126,
3.00845,
2.65362,
2.08864,
1.39939,
0.792047,
0.386897,
0.18109,
0.0990121,
0.0705014,
0.0587098,
0.0525807,
0.0503863,
0.051229,
0.0538919,
0.0574271,
0.0613761,
0.0657269,
0.0706353,
0.0757276,
0.078729,
0.0744712,
0.0591124,
0.038286,
0.02139,
0.0111463,
0.0057112,
0.00295235,
0.00155243,
0.000828797,
0.000446272,
0.000240566,
0.000129006,
6.85054e-05,
3.59166e-05,
1.85598e-05,
9.44456e-06,
1.16979e-05,
8.50725e-06,
1.49492e-05,
1
  };

 return w[(int)floor(ntrue)];

}


double weightTruePileupFall15_74X_wisconsin(double ntrue){

  if(ntrue > 50) return 1.0;

  double w[50] = {
58.1138048875,
93.2612967205,
98.6162081996,
28.7104534509,
15.4617381103,
 2.7153649567,
 1.4508190201,
 1.7113554671,
 2.3002683151,
 2.4788907956,
 2.5634937262,
 2.6060767979,
 2.3623139729,
 1.8314456721,
 1.1939779551,
 0.6482593491,
 0.3000319858,
 0.1272652275,
 0.0578769686,
 0.0312937347,
 0.0179469656,
 0.0093677189,
 0.0041699519,
 0.0015958001,
 0.0005656543,
 0.0002159007,
 0.0001028891,
 0.0000618602,
 0.0000433336,
 0.0000324305,
 0.0000233797,
 0.0000145054,
 0.0000073363,
 0.0000031279,
 0.0000011932,
 0.0000004231,
 0.0000001420,
 0.0000000454,
 0.0000000139,
 0.0000000041,
 0.0000000011,
 0.0000000003,
 0.0000000001,
 0.0000000000,
 0.0000000000,
 0.0000000000,
 0.0000000000,
 0.0000000000,
 0.0000000000,
 0.0000000000
};

 return w[(int)floor(ntrue)];

}

float kfactor_qqZZ_qcd_dPhi(float GENdPhiZZ, int finalState = 2)
{

    // finalState=1 : 4e/4mu/4tau
    // finalState=2 : 2e2mu/2mutau/2e2tau

    float k=0.0;    
    if (finalState==1) {        
        k+=1.515838921760*(abs(GENdPhiZZ)>0.0&&abs(GENdPhiZZ)<=0.1);
        k+=1.496256665410*(abs(GENdPhiZZ)>0.1&&abs(GENdPhiZZ)<=0.2);
        k+=1.495522061910*(abs(GENdPhiZZ)>0.2&&abs(GENdPhiZZ)<=0.3);
        k+=1.483273154250*(abs(GENdPhiZZ)>0.3&&abs(GENdPhiZZ)<=0.4);
        k+=1.465589701130*(abs(GENdPhiZZ)>0.4&&abs(GENdPhiZZ)<=0.5);
        k+=1.491500887510*(abs(GENdPhiZZ)>0.5&&abs(GENdPhiZZ)<=0.6);
        k+=1.441183580450*(abs(GENdPhiZZ)>0.6&&abs(GENdPhiZZ)<=0.7);
        k+=1.440830603990*(abs(GENdPhiZZ)>0.7&&abs(GENdPhiZZ)<=0.8);
        k+=1.414339019120*(abs(GENdPhiZZ)>0.8&&abs(GENdPhiZZ)<=0.9);
        k+=1.422534218560*(abs(GENdPhiZZ)>0.9&&abs(GENdPhiZZ)<=1.0);
        k+=1.401037066000*(abs(GENdPhiZZ)>1.0&&abs(GENdPhiZZ)<=1.1);
        k+=1.408539428810*(abs(GENdPhiZZ)>1.1&&abs(GENdPhiZZ)<=1.2);
        k+=1.381247744080*(abs(GENdPhiZZ)>1.2&&abs(GENdPhiZZ)<=1.3);
        k+=1.370553357430*(abs(GENdPhiZZ)>1.3&&abs(GENdPhiZZ)<=1.4);
        k+=1.347323316000*(abs(GENdPhiZZ)>1.4&&abs(GENdPhiZZ)<=1.5);
        k+=1.340113437450*(abs(GENdPhiZZ)>1.5&&abs(GENdPhiZZ)<=1.6);
        k+=1.312661036510*(abs(GENdPhiZZ)>1.6&&abs(GENdPhiZZ)<=1.7);
        k+=1.290055062010*(abs(GENdPhiZZ)>1.7&&abs(GENdPhiZZ)<=1.8);
        k+=1.255322614790*(abs(GENdPhiZZ)>1.8&&abs(GENdPhiZZ)<=1.9);
        k+=1.254455642450*(abs(GENdPhiZZ)>1.9&&abs(GENdPhiZZ)<=2.0);
        k+=1.224047664420*(abs(GENdPhiZZ)>2.0&&abs(GENdPhiZZ)<=2.1);
        k+=1.178816782670*(abs(GENdPhiZZ)>2.1&&abs(GENdPhiZZ)<=2.2);
        k+=1.162624827140*(abs(GENdPhiZZ)>2.2&&abs(GENdPhiZZ)<=2.3);
        k+=1.105401140940*(abs(GENdPhiZZ)>2.3&&abs(GENdPhiZZ)<=2.4);
        k+=1.074749265690*(abs(GENdPhiZZ)>2.4&&abs(GENdPhiZZ)<=2.5);
        k+=1.021864599380*(abs(GENdPhiZZ)>2.5&&abs(GENdPhiZZ)<=2.6);
        k+=0.946334793286*(abs(GENdPhiZZ)>2.6&&abs(GENdPhiZZ)<=2.7);
        k+=0.857458082628*(abs(GENdPhiZZ)>2.7&&abs(GENdPhiZZ)<=2.8);
        k+=0.716607670482*(abs(GENdPhiZZ)>2.8&&abs(GENdPhiZZ)<=2.9);
        k+=1.132841784840*(abs(GENdPhiZZ)>2.9&&abs(GENdPhiZZ)<=TMath::Pi());
    }

    if (finalState==2) {
       k+=1.513834489150*(abs(GENdPhiZZ)>0.0&&abs(GENdPhiZZ)<=0.1);
       k+=1.541738780180*(abs(GENdPhiZZ)>0.1&&abs(GENdPhiZZ)<=0.2);
       k+=1.497829632510*(abs(GENdPhiZZ)>0.2&&abs(GENdPhiZZ)<=0.3);
       k+=1.534956782920*(abs(GENdPhiZZ)>0.3&&abs(GENdPhiZZ)<=0.4);
       k+=1.478217033060*(abs(GENdPhiZZ)>0.4&&abs(GENdPhiZZ)<=0.5);
       k+=1.504330859290*(abs(GENdPhiZZ)>0.5&&abs(GENdPhiZZ)<=0.6);
       k+=1.520626246850*(abs(GENdPhiZZ)>0.6&&abs(GENdPhiZZ)<=0.7);
       k+=1.507013090030*(abs(GENdPhiZZ)>0.7&&abs(GENdPhiZZ)<=0.8);
       k+=1.494243156250*(abs(GENdPhiZZ)>0.8&&abs(GENdPhiZZ)<=0.9);
       k+=1.450536096150*(abs(GENdPhiZZ)>0.9&&abs(GENdPhiZZ)<=1.0);
       k+=1.460812521660*(abs(GENdPhiZZ)>1.0&&abs(GENdPhiZZ)<=1.1);
       k+=1.471603622200*(abs(GENdPhiZZ)>1.1&&abs(GENdPhiZZ)<=1.2);
       k+=1.467700038200*(abs(GENdPhiZZ)>1.2&&abs(GENdPhiZZ)<=1.3);
       k+=1.422408690640*(abs(GENdPhiZZ)>1.3&&abs(GENdPhiZZ)<=1.4);
       k+=1.397184022730*(abs(GENdPhiZZ)>1.4&&abs(GENdPhiZZ)<=1.5);
       k+=1.375593447520*(abs(GENdPhiZZ)>1.5&&abs(GENdPhiZZ)<=1.6);
       k+=1.391901318370*(abs(GENdPhiZZ)>1.6&&abs(GENdPhiZZ)<=1.7);
       k+=1.368564350560*(abs(GENdPhiZZ)>1.7&&abs(GENdPhiZZ)<=1.8);
       k+=1.317884804290*(abs(GENdPhiZZ)>1.8&&abs(GENdPhiZZ)<=1.9);
       k+=1.314019950800*(abs(GENdPhiZZ)>1.9&&abs(GENdPhiZZ)<=2.0);
       k+=1.274641749910*(abs(GENdPhiZZ)>2.0&&abs(GENdPhiZZ)<=2.1);
       k+=1.242346606820*(abs(GENdPhiZZ)>2.1&&abs(GENdPhiZZ)<=2.2);
       k+=1.244727403840*(abs(GENdPhiZZ)>2.2&&abs(GENdPhiZZ)<=2.3);
       k+=1.146259351670*(abs(GENdPhiZZ)>2.3&&abs(GENdPhiZZ)<=2.4);
       k+=1.107804993520*(abs(GENdPhiZZ)>2.4&&abs(GENdPhiZZ)<=2.5);
       k+=1.042053646740*(abs(GENdPhiZZ)>2.5&&abs(GENdPhiZZ)<=2.6);
       k+=0.973608545141*(abs(GENdPhiZZ)>2.6&&abs(GENdPhiZZ)<=2.7);
       k+=0.872169942668*(abs(GENdPhiZZ)>2.7&&abs(GENdPhiZZ)<=2.8);
       k+=0.734505279177*(abs(GENdPhiZZ)>2.8&&abs(GENdPhiZZ)<=2.9);
       k+=1.163152837230*(abs(GENdPhiZZ)>2.9&&abs(GENdPhiZZ)<=TMath::Pi());       
    }
    if (k==0.0) return 1.1; // if something goes wrong return inclusive k-factor
    else return k;

}
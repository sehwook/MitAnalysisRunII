double effSF_m_25_medium[10] = {0.836574,0.829962,0.877106,0.892587,0.935558,0.949318,0.946449,0.943031,0.973128,0.935147};
double effSF_e_25_medium[10] = {0.739427,0.690631,0.815957,0.822430,0.856509,0.859530,0.902980,0.923910,0.976901,0.942210};
double effSF_e_25_tight[10]  = {0.742330,0.661762,0.812364,0.820798,0.851298,0.846768,0.888956,0.915187,0.965834,0.927740};

double fake_rate_m_25_medium[6][5] = {
0.330,0.274,0.264,0.248,0.226,0.204,
0.343,0.288,0.273,0.263,0.247,0.226,
0.385,0.337,0.323,0.304,0.292,0.249,
0.429,0.390,0.385,0.368,0.351,0.308,
0.457,0.427,0.423,0.415,0.396,0.333
};
double fake_rate_e_25_medium[6][5] = {
0.582,0.532,0.523,0.501,0.501,0.580,
0.614,0.556,0.519,0.497,0.505,0.577,
0.628,0.585,0.545,0.535,0.557,0.599,
0.606,0.572,0.567,0.554,0.568,0.555,
0.563,0.543,0.537,0.521,0.514,0.501
};
double fake_rate_e_25_tight[6][5] = {
0.463,0.401,0.381,0.327,0.329,0.362,
0.463,0.432,0.377,0.345,0.330,0.377,
0.475,0.456,0.402,0.380,0.396,0.425,
0.451,0.392,0.379,0.351,0.354,0.346,
0.353,0.333,0.316,0.300,0.302,0.300
};
double fake_rate_e_25_verytight[6][5] = {
0.457,0.394,0.374,0.312,0.298,0.273,
0.457,0.423,0.365,0.322,0.298,0.288,
0.458,0.436,0.375,0.338,0.332,0.303,
0.437,0.366,0.341,0.302,0.281,0.236,
0.293,0.246,0.211,0.175,0.154,0.133
};
double fake_rate_e_25_medium_mva[6][5] = {
0.761,0.687,0.548,0.474,0.406,0.350,
0.623,0.639,0.502,0.430,0.410,0.375,
0.416,0.470,0.405,0.350,0.351,0.309,
0.241,0.327,0.310,0.280,0.255,0.199,
0.297,0.249,0.204,0.166,0.132,0.102
};
double fake_rate_e_25_tight_mva[6][5] = {
0.496,0.492,0.389,0.331,0.280,0.206,
0.415,0.463,0.365,0.295,0.285,0.237,
0.263,0.339,0.289,0.239,0.228,0.198,
0.140,0.217,0.213,0.186,0.165,0.124,
0.172,0.158,0.131,0.099,0.078,0.058
};

double jetEpsBtagBLOOSE[5][5] = {
0.6869,0.7696,0.7970,0.8290,0.8453,
0.7008,0.7806,0.8079,0.8389,0.8540,
0.6823,0.7657,0.7893,0.8173,0.8343,
0.6611,0.7420,0.7757,0.7948,0.8137,
0.2717,0.3733,0.4615,0.5292,0.5879
};
double jetEpsBtagCLOOSE[5][5] = { 
0.3502,0.4101,0.3993,0.3979,0.4110,
0.3703,0.4291,0.4281,0.4373,0.4458,
0.3560,0.4161,0.4052,0.4105,0.4419,
0.3273,0.3853,0.3991,0.3984,0.4413,
0.1157,0.1638,0.2028,0.2052,0.2668
};
double jetEpsBtagLLOOSE[5][5] = {
0.0798,0.1008,0.0834,0.0804,0.0798,
0.0964,0.1269,0.1025,0.0976,0.1023,
0.2099,0.2108,0.1311,0.1170,0.1220,
0.2355,0.2301,0.1665,0.1420,0.1514,
0.0529,0.0767,0.1041,0.1071,0.1255
};

double jetEpsBtagBMEDIUM[5][5] = {
0.5030,0.6042,0.6397,0.6754,0.6878,
0.5065,0.6070,0.6438,0.6809,0.6947,
0.4658,0.5744,0.6033,0.6369,0.6464,
0.4319,0.5354,0.5744,0.5954,0.5999,
0.1430,0.2242,0.2840,0.3276,0.3594
};
double jetEpsBtagCMEDIUM[5][5] = { 
0.1306,0.1527,0.1449,0.1407,0.1599,
0.1286,0.1514,0.1463,0.1541,0.1698,
0.1162,0.1476,0.1387,0.1393,0.1576,
0.1042,0.1337,0.1329,0.1265,0.1460,
0.0280,0.0456,0.0512,0.0552,0.0769
};
double jetEpsBtagLMEDIUM[5][5] = {
0.0189,0.0294,0.0275,0.0250,0.0207,
0.0199,0.0303,0.0283,0.0263,0.0241,
0.0191,0.0295,0.0273,0.0242,0.0226,
0.0183,0.0288,0.0283,0.0241,0.0239,
0.0021,0.0059,0.0092,0.0102,0.0123
};

double jetEpsBtagBTIGHT[5][5] = {
0.3212,0.4114,0.4538,0.4696,0.4760,
0.3082,0.3937,0.4475,0.4680,0.4802,
0.2632,0.3544,0.3959,0.4204,0.4177,
0.2311,0.3099,0.3617,0.3841,0.3757,
0.0700,0.1212,0.1630,0.1926,0.2080
};
double jetEpsBtagCTIGHT[5][5] = { 
0.0267,0.0297,0.0329,0.0293,0.0364,
0.0237,0.0265,0.0282,0.0305,0.0356,
0.0221,0.0240,0.0272,0.0276,0.0358,
0.0181,0.0223,0.0257,0.0265,0.0260,
0.0044,0.0085,0.0116,0.0108,0.0148
};
double jetEpsBtagLTIGHT[5][5] = {
0.0073,0.0136,0.0147,0.0126,0.0093,
0.0066,0.0123,0.0140,0.0114,0.0096,
0.0053,0.0107,0.0113,0.0096,0.0075,
0.0041,0.0083,0.0090,0.0081,0.0060,
0.0004,0.0014,0.0024,0.0024,0.0021
};

double weightEWKWZCorr(float mass){
  double value = 1.0;
  if     (mass<100) value = 1.006;
  else if(mass<160) value = 1.006;
  else if(mass<180) value = 0.998;
  else if(mass<200) value = 0.993;
  else if(mass<220) value = 0.993;
  else if(mass<250) value = 0.993;
  else if(mass<300) value = 0.992;
  else if(mass<350) value = 0.990;
  else if(mass<430) value = 0.988;
  else if(mass<500) value = 0.984;
  else if(mass<600) value = 0.980;
  else              value = 0.975;
  return value;
}

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
  return TMath::Min(fhDPU->GetBinContent(npuxbin),2.5);
}

double ratioFactor(TH1D *fhDVar, float var){
  Int_t nbin = fhDVar->GetXaxis()->FindBin(var);
  return fhDVar->GetBinContent(nbin);
}

double zpt_correction(double ptll, int type){
  
  if     (type == 0) return (0.95 - 0.1*TMath::Erf((ptll-14)/8.8));
  else if(type == 1) return (1.02852 - 0.0949640*TMath::Erf((ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((ptll-56.1146)/41.1653));

  return 1.0;
}

double selectIdIsoCut(TString type, int pdgId, double pt, double eta, double iso, int selBits, double mva){
  bool isEB = TMath::Abs(eta) < 1.479;
  double isoCut = 0.;
  bool idCut = false;
  if     (TMath::Abs(pdgId) == 13) {
    if (type=="loose" || type=="veto") isoCut = 0.25;
    else isoCut=0.15;
    if     (type == "medium" || type == "default" || type == "verytight" || type == "default_mva" || type == "medium_mva") idCut = (selBits & BareLeptons::LepTightIP) == BareLeptons::LepTightIP;
    else if(type == "loose") idCut= (selBits & BareLeptons::LepLoose) == BareLeptons::LepLoose;
    else if(type == "veto")  idCut= (selBits & BareLeptons::LepLoose) == BareLeptons::LepLoose;
    else printf("Problem with selectIsoCut!\n");

    return (idCut && iso/pt < isoCut);
  }
  else if(TMath::Abs(pdgId) == 11 && (type == "medium" || type == "default" || type == "verytight" || type == "veto" || type == "loose")) {
    if     (type == "medium")    idCut =  (selBits & BareLeptons::LepMedium) == BareLeptons::LepMedium;
    else if(type == "default")   idCut =  (selBits & BareLeptons::LepTight)  == BareLeptons::LepTight;
    //else if(type == "verytight") idCut = ((selBits & BareLeptons::LepTight)  == BareLeptons::LepTight) && ((selBits & BareLeptons::EleTripleCharge) == BareLeptons::EleTripleCharge) && ((selBits & BareLeptons::EleNoMissingHits) == BareLeptons::EleNoMissingHits);
    else if(type == "verytight") idCut = ((selBits & BareLeptons::LepTight)  == BareLeptons::LepTight) && ((selBits & BareLeptons::EleTripleCharge) == BareLeptons::EleTripleCharge);
    else if(type == "loose"  )   idCut =  (selBits & BareLeptons::LepLoose)  == BareLeptons::LepLoose;
    else if(type == "veto"   )   idCut =  (selBits & BareLeptons::LepVeto)   == BareLeptons::LepVeto;

    return (idCut);
  }
  else if(TMath::Abs(pdgId) == 11 && (type == "default_mva" || type == "medium_mva")) {
    idCut = (selBits & BareLeptons::LepFake) == BareLeptons::LepFake;
    idCut = idCut && ((selBits & BareLeptons::EleTripleCharge) == BareLeptons::EleTripleCharge);
    double mvaCut = 3.0; 
    if     (type == "medium_mva"  && TMath::Abs(eta) < 0.800) mvaCut = 0.837;
    else if(type == "medium_mva"  && TMath::Abs(eta) < 1.479) mvaCut = 0.715;
    else if(type == "medium_mva")                             mvaCut = 0.357;
    else if(type == "default_mva" && TMath::Abs(eta) < 0.800) mvaCut = 0.941;
    else if(type == "default_mva" && TMath::Abs(eta) < 1.479) mvaCut = 0.899;
    else if(type == "default_mva")                            mvaCut = 0.758;
    else printf("Problem with selectMVACut!\n");

    return (idCut && mva > mvaCut);
  }
  else {
    printf("Problem with selectIsoCut!\n");
    assert(0);
  }
  return false;
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

double effhDScaleFactor(double pt, double eta, int nsel, TString type, TH2D *fhDMuMediumSF, TH2D *fhDElMediumSF, TH2D *fhDElTightSF, 
TH1D *fhDMuTrkSF, TH2D *fhDElTrkSF, int npv, bool useMuIsoSF, TH2D *fhDMuIsoSF, bool applyTrkSF = true){

  if     (pt>=100 && TMath::Abs(nsel) == 13) pt =  +99.999;
  else if(pt>=200 && TMath::Abs(nsel) == 11) pt = +199.999;

  if     (eta>=+2.4) eta = +2.399;
  else if(eta<=-2.4) eta = -2.399;

  double trkSF = 1.0;
  if(TMath::Abs(nsel) == 13){
    Int_t binXT = fhDMuTrkSF->GetXaxis()->FindFixBin(eta);
    if(applyTrkSF) trkSF = fhDMuTrkSF->GetBinContent(binXT);
    if(trkSF <= 0) printf("trkSF <= 0! %f %d - %f %f\n",trkSF,binXT,pt,eta);
  }
  else if(TMath::Abs(nsel) == 11){
    Int_t binXT = fhDElTrkSF->GetXaxis()->FindFixBin(eta);
    Int_t binYT = fhDElTrkSF->GetYaxis()->FindFixBin(200.0);
    if(applyTrkSF) trkSF = fhDElTrkSF->GetBinContent(binXT,binYT);
    if(trkSF <= 0) printf("trkSF <= 0! %f %d %d - %f %f %d\n",trkSF,binXT,binYT,pt,eta,npv);
    //Int_t binXT = fhDElTrkSF->GetXaxis()->FindFixBin(eta);
    //Int_t binYT = fhDElTrkSF->GetYaxis()->FindFixBin(npv);
    //if(applyTrkSF) trkSF = fhDElTrkSF->GetBinContent(binXT,binYT);
    //if(trkSF <= 0) printf("trkSF <= 0! %f %d %d - %f %f %d\n",trkSF,binXT,binYT,pt,eta,npv);
  }
  if(trkSF <= 0) trkSF = 1.0;

  if(TMath::Abs(nsel) == 13) eta = abs(eta);
  if(TMath::Abs(nsel) == 13 && useMuIsoSF == true && pt <= 20) pt = 20.001;

  Int_t binXA = 0;
  Int_t binYA = 0;
  Int_t binXB = 0;
  Int_t binYB = 0;

  if     (TMath::Abs(nsel) == 13 && (type== "medium" || type== "default"   || type== "verytight" || type== "medium_mva" || type== "default_mva"))  {binXA = fhDMuMediumSF->GetXaxis()->FindFixBin(eta);binYA = fhDMuMediumSF->GetYaxis()->FindFixBin(pt);}
  else if(TMath::Abs(nsel) == 11 && (type== "medium" || type== "medium_mva"))			                           {binXA = fhDElMediumSF->GetXaxis()->FindFixBin(eta);binYA = fhDElMediumSF->GetYaxis()->FindFixBin(pt);}
  else if(TMath::Abs(nsel) == 11 && (type== "default"|| type== "verytight" || type== "default_mva"))			   {binXA = fhDElTightSF ->GetXaxis()->FindFixBin(eta);binYA = fhDElTightSF ->GetYaxis()->FindFixBin(pt);}
  else    printf("PROBLEM WITH BINS\n");

  double result = 0.0;
  if     (TMath::Abs(nsel) == 13 && (type== "medium" || type== "default"   || type== "verytight" || type== "medium_mva" || type== "default_mva")) result = fhDMuMediumSF->GetBinContent(binXA, binYA);
  else if(TMath::Abs(nsel) == 11 && (type== "medium" || type== "medium_mva"))	                                          result = fhDElMediumSF->GetBinContent(binXA, binYA);
  else if(TMath::Abs(nsel) == 11 &&( type== "default"|| type== "verytight" || type== "default_mva"))	                  result = fhDElTightSF ->GetBinContent(binXA, binYA);

  if(result <= 0) printf("Result <= 0! %f %d %d %d - %f %f\n",result,nsel,binXA,binYA,pt,eta);
  if(result <= 0) result = 1.0;

  double isoSF = 1.0;
  if(useMuIsoSF == true && TMath::Abs(nsel) == 13) {
    binXB = fhDMuIsoSF->GetXaxis()->FindFixBin(eta);binYB = fhDMuIsoSF->GetYaxis()->FindFixBin(pt);
    isoSF = fhDMuIsoSF->GetBinContent(binXB, binYB);
    if(isoSF <= 0) printf("IsoSF <= 0! %f %d %d %d - %f %f\n",isoSF,nsel,binXA,binYA,pt,eta);
    if(isoSF <= 0) isoSF = 1.0;
  }

  //printf("eff: %f %f %f - %f %f - %d %d %d %d\n",result,trkSF,isoSF,pt,eta,binXA,binYA,binXB,binYB);

  return result*trkSF*isoSF;
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
  double addFactor = 1.0;
  int iPt = -1;
  if	 (pt < 15) iPt = 0;
  else if(pt < 20) iPt = 1;
  else if(pt < 25) iPt = 2;
  else if(pt < 30) iPt = 3;
  else if(pt < 40) iPt = 4;
  else  	   iPt = 5;

  int iEta = -1;
  if	 (TMath::Abs(eta) < 0.5) iEta = 0;
  else if(TMath::Abs(eta) < 1.0) iEta = 1;
  else if(TMath::Abs(eta) < 1.5) iEta = 2;
  else if(TMath::Abs(eta) < 2.0) iEta = 3;
  else  			 iEta = 4;

  if     (TMath::Abs(nsel) == 13 && period == 1 && (type== "medium" || type== "default" || type== "verytight" || type== "medium_mva" || type== "default_mva")) return addFactor*fake_rate_m_25_medium    [iPt][iEta]/(1.0-fake_rate_m_25_medium    [iPt][iEta]);
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "medium")			                                                                       return addFactor*fake_rate_e_25_medium    [iPt][iEta]/(1.0-fake_rate_e_25_medium    [iPt][iEta]);
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "default")			                                                                       return addFactor*fake_rate_e_25_tight     [iPt][iEta]/(1.0-fake_rate_e_25_tight     [iPt][iEta]);
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "verytight")			                                                                       return addFactor*fake_rate_e_25_verytight [iPt][iEta]/(1.0-fake_rate_e_25_verytight [iPt][iEta]);
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "medium_mva")		                                                                       return addFactor*fake_rate_e_25_medium_mva[iPt][iEta]/(1.0-fake_rate_e_25_medium_mva[iPt][iEta]);
  else if(TMath::Abs(nsel) == 11 && period == 1 &&  type== "default_mva")		                                                                       return addFactor*fake_rate_e_25_tight_mva [iPt][iEta]/(1.0-fake_rate_e_25_tight_mva [iPt][iEta]);
  else    printf("PROBLEM WITH FAKES\n");

  assert(0);

  return 0.0;
}

float kfactor_qqZZ_qcd_M(float GENmassZZ, int finalState = 2)
{

    // finalState=1 : 4e/4mu/4tau
    // finalState=2 : 2e2mu/2mutau/2e2tau

    float k=0.0;

    if (finalState==1) {
        k+=1.23613311013*(abs(GENmassZZ)>0.0&&abs(GENmassZZ)<=25.0);
        k+=1.17550314639*(abs(GENmassZZ)>25.0&&abs(GENmassZZ)<=50.0);
        k+=1.17044565911*(abs(GENmassZZ)>50.0&&abs(GENmassZZ)<=75.0);
        k+=1.03141209689*(abs(GENmassZZ)>75.0&&abs(GENmassZZ)<=100.0);
        k+=1.05285574912*(abs(GENmassZZ)>100.0&&abs(GENmassZZ)<=125.0);
        k+=1.11287217794*(abs(GENmassZZ)>125.0&&abs(GENmassZZ)<=150.0);
        k+=1.13361441158*(abs(GENmassZZ)>150.0&&abs(GENmassZZ)<=175.0);
        k+=1.10355603327*(abs(GENmassZZ)>175.0&&abs(GENmassZZ)<=200.0);
        k+=1.10053981637*(abs(GENmassZZ)>200.0&&abs(GENmassZZ)<=225.0);
        k+=1.10972676811*(abs(GENmassZZ)>225.0&&abs(GENmassZZ)<=250.0);
        k+=1.12069120525*(abs(GENmassZZ)>250.0&&abs(GENmassZZ)<=275.0);
        k+=1.11589101635*(abs(GENmassZZ)>275.0&&abs(GENmassZZ)<=300.0);
        k+=1.13906170314*(abs(GENmassZZ)>300.0&&abs(GENmassZZ)<=325.0);
        k+=1.14854594271*(abs(GENmassZZ)>325.0&&abs(GENmassZZ)<=350.0);
        k+=1.14616229031*(abs(GENmassZZ)>350.0&&abs(GENmassZZ)<=375.0);
        k+=1.14573157789*(abs(GENmassZZ)>375.0&&abs(GENmassZZ)<=400.0);
        k+=1.13829430515*(abs(GENmassZZ)>400.0&&abs(GENmassZZ)<=425.0);
        k+=1.15521193686*(abs(GENmassZZ)>425.0&&abs(GENmassZZ)<=450.0);
        k+=1.13679822698*(abs(GENmassZZ)>450.0&&abs(GENmassZZ)<=475.0);
        k+=1.13223956942*(abs(GENmassZZ)>475.0);
    }

    if (finalState==2) {
        k+=1.25094466582*(abs(GENmassZZ)>0.0&&abs(GENmassZZ)<=25.0);
        k+=1.22459455362*(abs(GENmassZZ)>25.0&&abs(GENmassZZ)<=50.0);
        k+=1.19287368979*(abs(GENmassZZ)>50.0&&abs(GENmassZZ)<=75.0);
        k+=1.04597506451*(abs(GENmassZZ)>75.0&&abs(GENmassZZ)<=100.0);
        k+=1.08323413771*(abs(GENmassZZ)>100.0&&abs(GENmassZZ)<=125.0);
        k+=1.09994968030*(abs(GENmassZZ)>125.0&&abs(GENmassZZ)<=150.0);
        k+=1.16698455800*(abs(GENmassZZ)>150.0&&abs(GENmassZZ)<=175.0);
        k+=1.10399053155*(abs(GENmassZZ)>175.0&&abs(GENmassZZ)<=200.0);
        k+=1.10592664340*(abs(GENmassZZ)>200.0&&abs(GENmassZZ)<=225.0);
        k+=1.10690381480*(abs(GENmassZZ)>225.0&&abs(GENmassZZ)<=250.0);
        k+=1.11194928918*(abs(GENmassZZ)>250.0&&abs(GENmassZZ)<=275.0);
        k+=1.13522586553*(abs(GENmassZZ)>275.0&&abs(GENmassZZ)<=300.0);
        k+=1.11895090244*(abs(GENmassZZ)>300.0&&abs(GENmassZZ)<=325.0);
        k+=1.13898508615*(abs(GENmassZZ)>325.0&&abs(GENmassZZ)<=350.0);
        k+=1.15463977506*(abs(GENmassZZ)>350.0&&abs(GENmassZZ)<=375.0);
        k+=1.17341664594*(abs(GENmassZZ)>375.0&&abs(GENmassZZ)<=400.0);
        k+=1.20093349763*(abs(GENmassZZ)>400.0&&abs(GENmassZZ)<=425.0);
        k+=1.18915554919*(abs(GENmassZZ)>425.0&&abs(GENmassZZ)<=450.0);
        k+=1.18546007375*(abs(GENmassZZ)>450.0&&abs(GENmassZZ)<=475.0);
        k+=1.12864505708*(abs(GENmassZZ)>475.0);
    }

    if (k==0.0) return 1.1;
    else return k; // if something goes wrong return inclusive k-factor

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

float kfactor_qqZZ_qcd_Pt(float GENpTZZ, int finalState = 2)
{

    // finalState=1 : 4e/4mu/4tau
    // finalState=2 : 2e2mu/2mutau/2e2tau

    float k=0.0;

    if (finalState==1) {
        k+=0.64155491983*(abs(GENpTZZ)>0.0&&abs(GENpTZZ)<=5.0);
        k+=1.09985240531*(abs(GENpTZZ)>5.0&&abs(GENpTZZ)<=10.0);
        k+=1.29390628654*(abs(GENpTZZ)>10.0&&abs(GENpTZZ)<=15.0);
        k+=1.37859998571*(abs(GENpTZZ)>15.0&&abs(GENpTZZ)<=20.0);
        k+=1.42430263312*(abs(GENpTZZ)>20.0&&abs(GENpTZZ)<=25.0);
        k+=1.45038493266*(abs(GENpTZZ)>25.0&&abs(GENpTZZ)<=30.0);
        k+=1.47015377651*(abs(GENpTZZ)>30.0&&abs(GENpTZZ)<=35.0);
        k+=1.48828685748*(abs(GENpTZZ)>35.0&&abs(GENpTZZ)<=40.0);
        k+=1.50573440448*(abs(GENpTZZ)>40.0&&abs(GENpTZZ)<=45.0);
        k+=1.50211655928*(abs(GENpTZZ)>45.0&&abs(GENpTZZ)<=50.0);
        k+=1.50918720827*(abs(GENpTZZ)>50.0&&abs(GENpTZZ)<=55.0);
        k+=1.52463089491*(abs(GENpTZZ)>55.0&&abs(GENpTZZ)<=60.0);
        k+=1.52400838378*(abs(GENpTZZ)>60.0&&abs(GENpTZZ)<=65.0);
        k+=1.52418067701*(abs(GENpTZZ)>65.0&&abs(GENpTZZ)<=70.0);
        k+=1.55424382578*(abs(GENpTZZ)>70.0&&abs(GENpTZZ)<=75.0);
        k+=1.52544284222*(abs(GENpTZZ)>75.0&&abs(GENpTZZ)<=80.0);
        k+=1.57896384602*(abs(GENpTZZ)>80.0&&abs(GENpTZZ)<=85.0);
        k+=1.53034682567*(abs(GENpTZZ)>85.0&&abs(GENpTZZ)<=90.0);
        k+=1.56147329708*(abs(GENpTZZ)>90.0&&abs(GENpTZZ)<=95.0);
        k+=1.54468169268*(abs(GENpTZZ)>95.0&&abs(GENpTZZ)<=100.0);
        k+=1.57222952415*(abs(GENpTZZ)>100.0);
    }

    if (finalState==2) {
        k+=0.743602533303*(abs(GENpTZZ)>0.0&&abs(GENpTZZ)<=5.0);
        k+=1.14789453219*(abs(GENpTZZ)>5.0&&abs(GENpTZZ)<=10.0);
        k+=1.33815867892*(abs(GENpTZZ)>10.0&&abs(GENpTZZ)<=15.0);
        k+=1.41420044104*(abs(GENpTZZ)>15.0&&abs(GENpTZZ)<=20.0);
        k+=1.45511318916*(abs(GENpTZZ)>20.0&&abs(GENpTZZ)<=25.0);
        k+=1.47569225244*(abs(GENpTZZ)>25.0&&abs(GENpTZZ)<=30.0);
        k+=1.49053003693*(abs(GENpTZZ)>30.0&&abs(GENpTZZ)<=35.0);
        k+=1.50622827695*(abs(GENpTZZ)>35.0&&abs(GENpTZZ)<=40.0);
        k+=1.50328889799*(abs(GENpTZZ)>40.0&&abs(GENpTZZ)<=45.0);
        k+=1.52186945281*(abs(GENpTZZ)>45.0&&abs(GENpTZZ)<=50.0);
        k+=1.52043468754*(abs(GENpTZZ)>50.0&&abs(GENpTZZ)<=55.0);
        k+=1.53977869986*(abs(GENpTZZ)>55.0&&abs(GENpTZZ)<=60.0);
        k+=1.53491994434*(abs(GENpTZZ)>60.0&&abs(GENpTZZ)<=65.0);
        k+=1.51772882172*(abs(GENpTZZ)>65.0&&abs(GENpTZZ)<=70.0);
        k+=1.54494489131*(abs(GENpTZZ)>70.0&&abs(GENpTZZ)<=75.0);
        k+=1.57762411697*(abs(GENpTZZ)>75.0&&abs(GENpTZZ)<=80.0);
        k+=1.55078339014*(abs(GENpTZZ)>80.0&&abs(GENpTZZ)<=85.0);
        k+=1.57078191891*(abs(GENpTZZ)>85.0&&abs(GENpTZZ)<=90.0);
        k+=1.56162666568*(abs(GENpTZZ)>90.0&&abs(GENpTZZ)<=95.0);
        k+=1.54183774627*(abs(GENpTZZ)>95.0&&abs(GENpTZZ)<=100.0);
        k+=1.58485762205*(abs(GENpTZZ)>100.0);
    }

    if (k==0.0) return 1.1;
    else return k; // if something goes wrong return inclusive k-factor

}

double ratioFactor_gjets_zll(double pt){
  double p[4] = {-1.04869,0.0293761,-5.86547e-05,3.60149e-08};
  if     (pt<= 60) pt = 60;
  else if(pt>=400) pt = 400;
  return (p[0]+p[1]*pt+p[2]*pt*pt+p[3]*pt*pt*pt);
}

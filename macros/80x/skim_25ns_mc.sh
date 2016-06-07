#!/bin/sh

export PREFIX="";
if [ $1 == 1 ]
then
  export PREFIX="qcd_";
elif [ $1 == 2 ]
then
  export PREFIX="met_";
elif [ $1 == 3 ]
then
  export PREFIX="wln_";
elif [ $1 == 4 ]
then
  export PREFIX="pho_";
fi

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"zll1050\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"zll1050\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}DYJetsToLL_M-50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"zll50\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM.root\",\"zll50\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TT_TuneCUETP8M1_13TeV-powheg-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TT_TuneCUETP8M1_13TeV-powheg-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext3-v1+AODSIM.root\",\"tt\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_0.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_0.root\",\"tt2l\",$1,0,0\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_1.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_1.root\",\"tt2l\",$1,0,0\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_2.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_2.root\",\"tt2l\",$1,0,0\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_3.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_3.root\",\"tt2l\",$1,0,0\)
hadd -f /scratch5/ceballos/ntuples_noweights_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM.root \
        /scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_*.root
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM.root\",\"tt2l\",$1\)
rm /scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3_ext1-v1+AODSIM_*.root

##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluToContinToZZTo2e2mu_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggzz2e2mu\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluToContinToZZTo2e2tau_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggzz2e2tau\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluToContinToZZTo2mu2tau_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggzz2mu2tau\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluToContinToZZTo4e_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggzz4e\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluToContinToZZTo4mu_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggzz4mu\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluToContinToZZTo4tau_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggzz4tau\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluToContinToZZTo2mu2nu_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluToContinToZZTo2mu2nu_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggzz2mu2nu\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluToContinToZZTo2e2nu_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluToContinToZZTo2e2nu_13TeV_MCFM701_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggzz2e2nu\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTbarDMJets_pseudoscalar_Mchi-1_Mphi-100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3_ext1-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTbarDMJets_pseudoscalar_Mchi-1_Mphi-100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3_ext1-v1+RAWAODSIM.root\",\"dm\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluHToTauTau_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluHToTauTau_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"gghtautau125\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluHToWWTo2L2Nu_M125_13TeV_powheg_JHUgen_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluHToWWTo2L2Nu_M125_13TeV_powheg_JHUgen_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"gghwwlnln125\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluHToWWTo2L2Nu_M125_13TeV_powheg_JHUgen_herwigpp+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluHToWWTo2L2Nu_M125_13TeV_powheg_JHUgen_herwigpp+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"gghwwlnln125\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluHToZZTo4L_M125_13TeV_powheg2_JHUgenV6_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluHToZZTo4L_M125_13TeV_powheg2_JHUgenV6_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"gghzz4l125\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/VBFHToTauTau_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}VBFHToTauTau_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"vbfhtautau125\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/VBFHToWWTo2L2Nu_M125_13TeV_powheg_JHUgen_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}VBFHToWWTo2L2Nu_M125_13TeV_powheg_JHUgen_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"vbfhwwlnln125\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/VBF_HToZZTo4L_M125_13TeV_powheg2_JHUgenV6_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}VBF_HToZZTo4L_M125_13TeV_powheg2_JHUgenV6_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"vbfhzz4l125\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"tbarw\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"tw\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ttg\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTWJetsToLNu_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTWJetsToLNu_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ttwln\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTWJetsToQQ_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTWJetsToQQ_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ttwqq\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTZToLLNuNu_M-10_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v3+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTZToLLNuNu_M-10_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ttzlnln\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/TTZToQQ_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}TTZToQQ_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ttzqq\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/tZq_ll_4f_13TeV-amcatnlo-pythia8_TuneCUETP8M1+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}tZq_ll_4f_13TeV-amcatnlo-pythia8_TuneCUETP8M1+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"tzqll\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/tZq_nunu_4f_13TeV-amcatnlo-pythia8_TuneCUETP8M1+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}tZq_nunu_4f_13TeV-amcatnlo-pythia8_TuneCUETP8M1+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"tzqnn\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ttHJetToNonbb_M125_13TeV_amcatnloFXFX_madspin_pythia8_mWCutfix+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3_ext1-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ttHJetToNonbb_M125_13TeV_amcatnloFXFX_madspin_pythia8_mWCutfix+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3_ext1-v1+RAWAODSIM.root\",\"tthnob125\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/VHToNonbb_M125_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}VHToNonbb_M125_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"vhnob125\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZZTo2L2Nu_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZZTo2L2Nu_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"zz2l2n4\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"zz2l2q4\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZZTo4L_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZZTo4L_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"zz4l4\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WGToLNuG_TuneCUETP8M1_13TeV-madgraphMLM-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WGToLNuG_TuneCUETP8M1_13TeV-madgraphMLM-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wlg\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZGTo2LG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZGTo2LG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"zllg\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WJetsToLNu_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WJetsToLNu_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wln\",$1\)

##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WGstarToLNuMuMu_012Jets_13TeV-madgraph+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WGstarToLNuMuMu_012Jets_13TeV-madgraph+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wgslmm\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WGstarToLNuEE_012Jets_13TeV-madgraph+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v2+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WGstarToLNuEE_012Jets_13TeV-madgraph+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wgslee\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"zzz\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wzz\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WWZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WWZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wwz\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WWW_4F_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WWW_4F_TuneCUETP8M1_13TeV-amcatnlo-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"www\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wz2q2l4\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WZTo3LNu_TuneCUETP8M1_13TeV-powheg-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WZTo3LNu_TuneCUETP8M1_13TeV-powheg-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wz3ln4_powheg\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WZTo1L1Nu2Q_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WZTo1L1Nu2Q_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wz1l1n2q4\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WZTo1L3Nu_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WZTo1L3Nu_13TeV_amcatnloFXFX_madspin_pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wz1l3n4\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluWWTo2L2Nu_HInt_MCFM_13TeV+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluWWTo2L2Nu_HInt_MCFM_13TeV+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggwwlnln_int\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/GluGluWWTo2L2Nu_MCFM_13TeV+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}GluGluWWTo2L2Nu_MCFM_13TeV+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ggwwlnln\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WWTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WWTo2L2Nu_13TeV-powheg+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wwlnln\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WWTo2L2Nu_13TeV-powheg-herwigpp+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WWTo2L2Nu_13TeV-powheg-herwigpp+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wwlnln\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WWTo2L2Nu_13TeV-powheg-CUETP8M1Up+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WWTo2L2Nu_13TeV-powheg-CUETP8M1Up+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wwlnln\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WWTo2L2Nu_13TeV-powheg-CUETP8M1Down+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WWTo2L2Nu_13TeV-powheg-CUETP8M1Down+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wwlnln\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WW_DoubleScattering_13TeV-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WW_DoubleScattering_13TeV-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"ww_dps\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WpWpJJ_EWK-QCD_TuneCUETP8M1_13TeV-madgraph-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WpWpJJ_EWK-QCD_TuneCUETP8M1_13TeV-madgraph-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wpwp_ewk_qcd\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WpWpJJ_EWK_TuneCUETP8M1_13TeV-madgraph-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WpWpJJ_EWK_TuneCUETP8M1_13TeV-madgraph-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wpwp_ewk\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WpWpJJ_QCD_TuneCUETP8M1_13TeV-madgraph-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WpWpJJ_QCD_TuneCUETP8M1_13TeV-madgraph-pythia8+RunIISpring16DR80-PUSpring16_80X_mcRun2_asymptotic_2016_v3-v1+AODSIM.root\",\"wpwp_qcd\",$1\)

if [ $1 == 2 ]
then
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/HWminusJ_HToWW_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}HWminusJ_HToWW_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"wmhww125\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/HWplusJ_HToWW_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}HWplusJ_HToWW_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"wphww125\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WminusHToTauTau_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WminusHToTauTau_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"wmhtautau125\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/WplusHToTauTau_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}WplusHToTauTau_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"wphtautau125\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/HZJ_HToWW_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}HZJ_HToWW_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zhww125\",$1\)

##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToEE_HToInvisible_M110_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToEE_HToInvisible_M110_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zeehinv110\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToEE_HToInvisible_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v2+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToEE_HToInvisible_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zeehinv125\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToEE_HToInvisible_M150_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToEE_HToInvisible_M150_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zeehinv150\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToEE_HToInvisible_M200_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToEE_HToInvisible_M200_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zeehinv200\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToEE_HToInvisible_M300_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToEE_HToInvisible_M300_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zeehinv300\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToEE_HToInvisible_M400_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToEE_HToInvisible_M400_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zeehinv400\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToEE_HToInvisible_M500_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToEE_HToInvisible_M500_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zeehinv500\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToEE_HToInvisible_M600_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToEE_HToInvisible_M600_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zeehinv600\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToMM_HToInvisible_M110_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToMM_HToInvisible_M110_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zmmhinv110\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToMM_HToInvisible_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToMM_HToInvisible_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zmmhinv125\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToMM_HToInvisible_M150_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToMM_HToInvisible_M150_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zmmhinv150\",$1\)
##root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToMM_HToInvisible_M200_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToMM_HToInvisible_M200_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zmmhinv200\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToMM_HToInvisible_M300_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToMM_HToInvisible_M300_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zmmhinv300\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToMM_HToInvisible_M400_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToMM_HToInvisible_M400_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zmmhinv400\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToMM_HToInvisible_M500_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToMM_HToInvisible_M500_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zmmhinv500\",$1\)
root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ZH_ZToMM_HToInvisible_M600_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ZH_ZToMM_HToInvisible_M600_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"zmmhinv600\",$1\)

root -l -q -b MitAnalysisRunII/macros/80x/makeSkimSample.C+\(\"/scratch5/ceballos/ntuples_noweights_80x/ggZH_HToInv_ZToLL_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"/scratch5/ceballos/ntuples_weightsMC_80x/${PREFIX}ggZH_HToInv_ZToLL_M125_13TeV_powheg_pythia8+RunIISpring16DR80-PUSpring16RAWAODSIM_80X_mcRun2_asymptotic_2016_v3-v1+RAWAODSIM.root\",\"ggzhinv125\",$1\)
fi

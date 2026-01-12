#define myntuple_cxx
#include "myntuple.h"
#include <TH2.h>
#include <TStyle.h>
#include <TVector.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include "TLorentzVector.h"
#include "TPoint.h"
#define mychannel 88 //YY->55 psi2sJ->77 JY->88 JJ->66
#define myordermode 7  //YY->9 JJ->5
//default is 1, 00--sort by Phi, kind of random

struct PairedMuonIdx {
    int p11;
    int p12;
    int p21;
    int p22;
};

void swap_two_paired_pair(PairedMuonIdx & myp1,  PairedMuonIdx & myp2)
{
    int mytmp1, mytmp2;
    mytmp1 = myp1.p11;  mytmp2 = myp1.p12;
    myp1.p11 = myp2.p11;  myp1.p12 = myp2.p12;
    myp2.p11 = mytmp1;  myp2.p12 = mytmp2;
    
    mytmp1 = myp1.p21;  mytmp2 = myp1.p22;
    myp1.p21 = myp2.p21;  myp1.p22 = myp2.p22;
    myp2.p21 = mytmp1;  myp2.p22 = mytmp2;
}

void swap_one_paired_pair(PairedMuonIdx & myp)
{
    int mytmp1, mytmp2;
    mytmp1 = myp.p11;  mytmp2 = myp.p12;
    myp.p11 = myp.p21;  myp.p12 = myp.p22;
    myp.p21 = mytmp1;  myp.p22 = mytmp2;
}

void swap_one_pair(PairedMuonIdx & myp, int whichpair)
{
    int mytmp;
    if (whichpair == 1) {
        mytmp = myp.p11;
        myp.p11 = myp.p12; myp.p12 = mytmp;
    } else if (whichpair == 2) {
        mytmp = myp.p21;
        myp.p21 = myp.p22; myp.p22 = mytmp;
    }
}

void setOneFourMuVar(
std::vector<float> *My1234Var, std::vector<float> *My1324Var, std::vector<float> *My1423Var,
const PairedMuonIdx combIdx[3], const int idx, const int fourMuIdx, float myFourMuVars[3])
{
    myFourMuVars[idx] = (*My1234Var)[fourMuIdx];
    if ((combIdx[idx].p11 == 0 && combIdx[idx].p12 == 2) || (combIdx[idx].p11 == 2 && combIdx[idx].p12 == 0)) 
		{
        myFourMuVars[idx] = (*My1324Var)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 1 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 1)) 
		{
        myFourMuVars[idx] = (*My1324Var)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 0 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 0)) 
		{
        myFourMuVars[idx] = (*My1423Var)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 1 && combIdx[idx].p12 == 2) || (combIdx[idx].p11 == 2 && combIdx[idx].p12 == 1)) 
		{
        myFourMuVars[idx] = (*My1423Var)[fourMuIdx];
    }
}

void setOneFourMuVar(
std::vector<double> *My1234Var, std::vector<double> *My1324Var, std::vector<double> *My1423Var,
const PairedMuonIdx combIdx[3], const int idx, const int fourMuIdx, float myFourMuVars[3])
{
    myFourMuVars[idx] = (*My1234Var)[fourMuIdx];
    if ((combIdx[idx].p11 == 0 && combIdx[idx].p12 == 2) || (combIdx[idx].p11 == 2 && combIdx[idx].p12 == 0)) 
		{
        myFourMuVars[idx] = (*My1324Var)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 1 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 1)) 
		{
        myFourMuVars[idx] = (*My1324Var)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 0 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 0)) 
		{
        myFourMuVars[idx] = (*My1423Var)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 1 && combIdx[idx].p12 == 2) || (combIdx[idx].p11 == 2 && combIdx[idx].p12 == 1)) 
		{
        myFourMuVars[idx] = (*My1423Var)[fourMuIdx];
    }
}

void setFourMuVars(
std::vector<float> *My1234Var, std::vector<float> *My1324Var, std::vector<float> *My1423Var,
const PairedMuonIdx combIdx[3], const int fourMuIdx, float myFourMuVars[3])
{
    //first declare the used functions
    void setOneFourMuVar(
		std::vector<float> *My1234Var, std::vector<float> *My1324Var, std::vector<float> *My1423Var,
		const PairedMuonIdx combIdx[3], const int idx, const int fourMuIdx, float myFourMuVars[3]);
    for (int idx = 0; idx < 3; ++idx) 
		{
        setOneFourMuVar(My1234Var, My1324Var, My1423Var, combIdx, idx, fourMuIdx, myFourMuVars);
    }
}

void setFourMuVars(
std::vector<double> *My1234Var, std::vector<double> *My1324Var, std::vector<double> *My1423Var,
const PairedMuonIdx combIdx[3], const int fourMuIdx, float myFourMuVars[3])
{
    //first declare the used functions
    void setOneFourMuVar(
		std::vector<double> *My1234Var, std::vector<double> *My1324Var, std::vector<double> *My1423Var,
		const PairedMuonIdx combIdx[3], const int idx, const int fourMuIdx, float myFourMuVars[3]);
    for (int idx = 0; idx < 3; ++idx) 
		{
        setOneFourMuVar(My1234Var, My1324Var, My1423Var, combIdx, idx, fourMuIdx, myFourMuVars);
    }
}

//myFourMuVariables[3][2] is output
//idx is the index: combIdx[idx] and myFourMuVars[idx][2]
void setOneFourMuPairVars(
std::vector<double> *MyJpsi1Var_Mu12, std::vector<double> *MyJpsi2Var_Mu34,
std::vector<double> *MyJpsi3Var_Mu13, std::vector<double> *MyJpsi4Var_Mu24,
std::vector<double> *MyJpsi5Var_Mu14, std::vector<double> *MyJpsi6Var_Mu23,
const PairedMuonIdx combIdx[3], const int idx, const int fourMuIdx, float myFourMuVars[3][2])
{
    //combIdx[0]
    myFourMuVars[idx][0] = (*MyJpsi1Var_Mu12)[fourMuIdx];
    myFourMuVars[idx][1] = (*MyJpsi2Var_Mu34)[fourMuIdx];
    if ((combIdx[idx].p11 == 2 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 2)) 
		{
        myFourMuVars[idx][1] = (*MyJpsi1Var_Mu12)[fourMuIdx];
        myFourMuVars[idx][0] = (*MyJpsi2Var_Mu34)[fourMuIdx];
    }
    //
    if ((combIdx[idx].p11 == 0 && combIdx[idx].p12 == 2) || (combIdx[idx].p11 == 2 && combIdx[idx].p12 == 0)) 
		{
        myFourMuVars[idx][0] = (*MyJpsi3Var_Mu13)[fourMuIdx];
        myFourMuVars[idx][1] = (*MyJpsi4Var_Mu24)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 1 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 1)) 
		{
        myFourMuVars[idx][1] = (*MyJpsi3Var_Mu13)[fourMuIdx];
        myFourMuVars[idx][0] = (*MyJpsi4Var_Mu24)[fourMuIdx];
    }
    //
    if ((combIdx[idx].p11 == 0 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 0)) 
		{
        myFourMuVars[idx][0] = (*MyJpsi5Var_Mu14)[fourMuIdx];
        myFourMuVars[idx][1] = (*MyJpsi6Var_Mu23)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 1 && combIdx[idx].p12 == 2) || (combIdx[idx].p11 == 2 && combIdx[idx].p12 == 1)) 
		{
        myFourMuVars[idx][1] = (*MyJpsi5Var_Mu14)[fourMuIdx];
        myFourMuVars[idx][0] = (*MyJpsi6Var_Mu23)[fourMuIdx];
    }
}

//myFourMuVariables[3][2] is output
//idx is the index: combIdx[idx] and myFourMuVars[idx][2]
void setOneFourMuPairVars(
std::vector<float> *MyJpsi1Var_Mu12, std::vector<float> *MyJpsi2Var_Mu34,
std::vector<float> *MyJpsi3Var_Mu13, std::vector<float> *MyJpsi4Var_Mu24,
std::vector<float> *MyJpsi5Var_Mu14, std::vector<float> *MyJpsi6Var_Mu23,
const PairedMuonIdx combIdx[3], const int idx, const int fourMuIdx, float myFourMuVars[3][2])
{
    //combIdx[0]
    myFourMuVars[idx][0] = (*MyJpsi1Var_Mu12)[fourMuIdx];
    myFourMuVars[idx][1] = (*MyJpsi2Var_Mu34)[fourMuIdx];
    if ((combIdx[idx].p11 == 2 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 2)) 
		{
        myFourMuVars[idx][1] = (*MyJpsi1Var_Mu12)[fourMuIdx];
        myFourMuVars[idx][0] = (*MyJpsi2Var_Mu34)[fourMuIdx];
    }
    //
    if ((combIdx[idx].p11 == 0 && combIdx[idx].p12 == 2) || (combIdx[idx].p11 == 2 && combIdx[idx].p12 == 0)) 
		{
        myFourMuVars[idx][0] = (*MyJpsi3Var_Mu13)[fourMuIdx];
        myFourMuVars[idx][1] = (*MyJpsi4Var_Mu24)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 1 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 1)) 
		{
        myFourMuVars[idx][1] = (*MyJpsi3Var_Mu13)[fourMuIdx];
        myFourMuVars[idx][0] = (*MyJpsi4Var_Mu24)[fourMuIdx];
    }
    //
    if ((combIdx[idx].p11 == 0 && combIdx[idx].p12 == 3) || (combIdx[idx].p11 == 3 && combIdx[idx].p12 == 0)) 
		{
        myFourMuVars[idx][0] = (*MyJpsi5Var_Mu14)[fourMuIdx];
        myFourMuVars[idx][1] = (*MyJpsi6Var_Mu23)[fourMuIdx];
    }
    if ((combIdx[idx].p11 == 1 && combIdx[idx].p12 == 2) || (combIdx[idx].p11 == 2 && combIdx[idx].p12 == 1)) 
		{
        myFourMuVars[idx][1] = (*MyJpsi5Var_Mu14)[fourMuIdx];
        myFourMuVars[idx][0] = (*MyJpsi6Var_Mu23)[fourMuIdx];
    }
}

//myFourMuVariables[3][2] is output
void setFourMuPairsVars(
std::vector<double> *MyJpsi1Var_Mu12, std::vector<double> *MyJpsi2Var_Mu34,
std::vector<double> *MyJpsi3Var_Mu13, std::vector<double> *MyJpsi4Var_Mu24,
std::vector<double> *MyJpsi5Var_Mu14, std::vector<double> *MyJpsi6Var_Mu23,
const PairedMuonIdx combIdx[3], const int fourMuIdx, float myFourMuVars[3][2])
{
    //declare the function used in this function
    void setOneFourMuPairVars(
    std::vector<double> *MyJpsi1Var_Mu12, std::vector<double> *MyJpsi2Var_Mu34,
    std::vector<double> *MyJpsi3Var_Mu13, std::vector<double> *MyJpsi4Var_Mu24,
    std::vector<double> *MyJpsi5Var_Mu14, std::vector<double> *MyJpsi6Var_Mu23,
    const PairedMuonIdx combIdx[3], const int idx, const int fourMuIdx, float myFourMuVars[3][2]);
    for (int idx = 0; idx < 3; ++idx) 
		{
        setOneFourMuPairVars(
                             MyJpsi1Var_Mu12, MyJpsi2Var_Mu34,
                             MyJpsi3Var_Mu13, MyJpsi4Var_Mu24,
                             MyJpsi5Var_Mu14, MyJpsi6Var_Mu23,
                             combIdx, idx, fourMuIdx, myFourMuVars);
    }
}

//myFourMuVariables[3][2] is output
void setFourMuPairsVars(
std::vector<float> *MyJpsi1Var_Mu12, std::vector<float> *MyJpsi2Var_Mu34,
std::vector<float> *MyJpsi3Var_Mu13, std::vector<float> *MyJpsi4Var_Mu24,
std::vector<float> *MyJpsi5Var_Mu14, std::vector<float> *MyJpsi6Var_Mu23,       const PairedMuonIdx combIdx[3], const int fourMuIdx, float myFourMuVars[3][2])
{
    //declare the function used in this function
    void setOneFourMuPairVars(
    std::vector<float> *MyJpsi1Var_Mu12, std::vector<float> *MyJpsi2Var_Mu34,
    std::vector<float> *MyJpsi3Var_Mu13, std::vector<float> *MyJpsi4Var_Mu24,
    std::vector<float> *MyJpsi5Var_Mu14, std::vector<float> *MyJpsi6Var_Mu23,
    const PairedMuonIdx combIdx[3], const int idx, const int fourMuIdx, float myFourMuVars[3][2]);
    for (int idx = 0; idx < 3; ++idx) 
		{
        setOneFourMuPairVars(
                             MyJpsi1Var_Mu12, MyJpsi2Var_Mu34,
                             MyJpsi3Var_Mu13, MyJpsi4Var_Mu24,
                             MyJpsi5Var_Mu14, MyJpsi6Var_Mu23,
                             combIdx, idx, fourMuIdx, myFourMuVars);
    }
}

void myntuple::Loop(TString outputname)
{
		TString myoutname = outputname + ".root";
    TString myoutname_txt= outputname + ".txt";
		//ofstream myoutputfile("myoutput.txt");
		ofstream myoutputfile(myoutname_txt);
    TFile* myhbk = new TFile (myoutname,"recreate");
    TH1F* myMuMuonlymass = new TH1F("myMuMuonlymass","myMuMuonlymass",1000,2,15);
    TH1F* myMuMuonlyctau = new TH1F("myMuMuonlyctau","myMuMuonlyctau",1000,-200,200);
    TH1F* myMuMuonlyctau1 = new TH1F("myMuMuonlyctau1","myMuMuonlyctau1",1000,-200,200);
    TH1F* myMuMuonlyPhi = new TH1F("myMuMuonlyPhi","myMuMuonlyPhi",1000,-3.14,3.14);
    TH1F* myMuMuonlymass2 = new TH1F("myMuMuonlymass2","myMuMuonlymass2",1000,0,10);
    TH1F* myMuMuonlyEta = new TH1F("myMuMuonlyEta","myMuMuonlyEta",1000,-5,5);
    TH1F* myMuMuonlyPt = new TH1F("myMuMuonlyPt","myMuMuonlyPt",1000,0,50);
    TH1F* myY_m12_Pt = new TH1F("myY_m12_Pt","myY_m12_Pt",1000,0,55);
    TH1F* myJpsi_m34_Pt = new TH1F("myJpsi_m34_Pt","myJpsi_m34_Pt",1000,0,55);
    TH1F* myY_m12_Err = new TH1F("myY_m12_Err","myY_m12_Err",100,0,0.05);
    TH1F* myJpsi_m34_Err = new TH1F("myJpsi_m34_Err","myJpsi_m34_Err",1000,0,0.05);
    TH1F* myJpsi_m34_Err_1 = new TH1F("myJpsi_m34_Err_1","myJpsi_m34_Err_1",1000,0,1);
    TH1F* myJpsi_m34_Err_2 = new TH1F("myJpsi_m34_Err_2","myJpsi_m34_Err_2",1000,0,0.1);
    TH1F* myJpsi_m34_Err_3 = new TH1F("myJpsi_m34_Err_3","myJpsi_m34_Err_3",1000,0,0.01);
    
    TH1F* myMuplusPt = new TH1F("myMuplusPt","myMuplusPt",1000,0,50);
    TH1F* myMuplusEta = new TH1F("myMuplusEta","myMuplusEta",1000,-5,5);
    TH1F* myMuplusPhi = new TH1F("myMuplusPhi","myMuplusPhi",1000,-5,5);
    TH1F* myMuHelicity = new TH1F("myMuHelicity","myMuHelicity",1000,-1,1);
    TH2F* myMuplusPtvsEta = new TH2F("myMuplusPtvsEta","myMuplusPtvsEta",100,-5,5,500,0,5);
    
    TH1F* myFourMuonmass = new TH1F("myFourMuonmass","myFourMuonmass",1000,15,22);
    TH1F* myFourMuonmassC = new TH1F("myFourMuonmassC","myFourMuonmassC",1000,15,22);
    
    TH1F* myFourMuonPt = new TH1F("myFourMuonPt","myFourMuonPt",1000,0,50);
    TH1F* myFourMuonEta = new TH1F("myFourMuonEta","myFourMuonEta",1000,-5,5);
    TH1F* myFourMuonPhi = new TH1F("myFourMuonPhi","myFourMuonPhi",1000,-5,5);
    TH2F* myFourMuonEtavsPt = new TH2F("myFourMuonEtavsPt","myFourMuonEtavsPt",100,-5,5,100,0,50);
    TH2F* myFourMuonEtavsPhi = new TH2F("myFourMuonEtavsPhi","myFourMuonEtavsPhi",100,-5,5,100,-5,5);
    TH2F* myFourMuonPtvsPhi = new TH2F("myFourMuonPtvsPhi","myFourMuonPtvsPhi",100,0,50,100,-5,5);
    TH1F* myrawMuonPt = new TH1F("myMuonPt","myMuonPt",1000,0,50);
    TH1F* myrawMuonPhi = new TH1F("myMuonPhi","myMuonPhi",1000,-5,5);
    TH1F* myrawMuonEta = new TH1F("myMuonEta","myMuonEta",1000,-5,5);
    TH2F* mym12vsm34 = new TH2F("mym12vsm34","mym12vsm34",100,0,11,100,0,11);
    TH2F* mym13vsm24 = new TH2F("mym13vsm24","mym13vsm24",100,0,11,100,0,11);
    TH2F* mym14vsm23 = new TH2F("mym14vsm23","mym14vsm23",100,0,11,100,0,11);
    TH1F* myMuplusMuplusmass = new TH1F("myMuplusMuplusmass","myMuplusMuplusmass",1000,0,50);
    
    TH1F* myYJmass = new TH1F("myYJmass","myYJmass",1000,15,22);
    TH1F* myYJmassC = new TH1F("myYJmassC","myYJmassC",1000,15,22);
    TH1F* myY2sJmass = new TH1F("myY2sJmass","myY2sJmass",1000,15,22);
    TH1F* myY2sJmassC = new TH1F("myY2sJmassC","myY2sJmassC",1000,15,22);
    TH1F* myY3sJmass = new TH1F("myY3sJmass","myY3sJmass",1000,15,22);
    TH1F* myY3sJmassC = new TH1F("myY3sJmassC","myY3sJmassC",1000,15,22);

    TH1F* mypsi2sctau = new TH1F("mypsi2sctau","mypsi2sctau",1000,-200,200);
    TH1F* myJpsictau = new TH1F("myJpsictau","myJpsictau",1000,-200,200);
    
    TH1F* myPsi2SJDihedralAngle = new TH1F("myPsi2SJDihedralAngle","myPsi2SJDihedralAngle",1000,-200,200);

    //   In a ROOT session, you can do:
    //      root> .L myntuple.C
    //      root> myntuple t
    //      root> t.GetEntry(12); // Fill t data members with entry number 12
    //      root> t.Show();       // Show values of entry 12
    //      root> t.Show(16);     // Read and show values of entry 16
    //      root> t.Loop();       // Loop on all entries
    //
    
    //     This is the loop skeleton where:
    //    jentry is the global entry number in the chain
    //    ientry is the entry number in the current Tree
    //  Note that the argument to GetEntry must be:
    //    jentry for TChain::GetEntry
    //    ientry for TTree::GetEntry and TBranch::GetEntry
    //
    //       To read only selected branches, Insert statements like:
    // METHOD1:
    //    fChain->SetBranchStatus("*",0);  // disable all branches
    //    fChain->SetBranchStatus("branchname",1);  // activate branchname
    // METHOD2: replace line
    //    fChain->GetEntry(jentry);       //read all branches
    //by  b_branchname->GetEntry(ientry); //read only this branch
    const double ELECTRON_MASS = 0.5109989461*1e-3; //GeV
    const double MUON_MASS = 0.1056583745; //GeV
    const double JPSI_MASS = 3.096900; //GeV
    const double OMEGA_MASS = 0.78265; //GeV
    const double PHI_MASS = 1.019461; //GeV
    const double PSI2S_MASS = 3.68610; //GeV
    const double ETAB1S_MASS = 9.3987; //GeV
    const double Y1S_MASS = 9.46030; //GeV
    const double Y2S_MASS = 10.02326; //GeV
    const double Y3S_MASS = 10.3552; //GeV
    const double Y4S_MASS = 10.5794; //GeV
    const  bool TrigThreeMuonJpsi3p5mu2 = false;
    const bool VETO_LIGHT_MESON_IN_WRONGCOMBINATION = false;    //added by kai
    const bool BLIND_SIGNAL = false;  //true to blind
    
    //double mymV[2] = {9.46,3.0967};
    double mymV;   //3.096919 for jpsi, 3.686 for psi2s, 9.46 for Y(1s),10.02326,10.3552
    double mymVprime;  //the mass of lower mass dimuon pair
    //JJ near threshold as a starting point
    const double MY_ETA_CUT = 2.40;
    const double MIN_MU_PT = 2.0;   //default 2.0;
    const double DIMUON_EBE_SCALE = 1.16;
    const double DIMUON_WINDOW_NSIGMA = 3.0;  //3.0
    const double MIN_DIMUON_VTX_PROB = 0.005;//Dimuon vetex fit probability without jpsi mass constraint; be consistent with HLT
    const double MIN_DIMUON_PT = 3.5;  //be consistent with HLT,default 3.5 for pp
    //psi2sJ   77
    const double MIN_DIMUON_PSI2S_PT = 0.0;  //3.5,5,7,10
    const double MIN_MUON_PSI2S_PT = 2.0;  //2.0,2.5,3.0,3.5,5,7,10
    //etab  67
    const double MIN_DIMUON4Etab1_PT = 12.0;
    const double MIN_DIMUON4Etab2_PT = 8.0;
    //YJ  88  in Charminium
    const double MIN_DIMUON_Y1S_PT_CHARMONIUM = 0.0;  //charmonium dataset has no cut on this variable, can be 0
    const double MIN_MUON_Y1S_PT_CHARMONIUM = 2.0;
    //YJ  881  in MuOnia
    const double MIN_DIMUON_Y1S_PT_MUONIA = 0.0;   //Muonia dataset has no cut on this variable, can be 0
    const double MIN_DIMUON_JPSI_PT_MUONIA = 0.0;  //Muonia dataset has no cut on this variable, can be 0
    const double MIN_MUON_Y1S_PT_MUONIA = 2.0;
    
    
    if (fChain == 0) return;
    
    Long64_t nentries = fChain->GetEntries();
    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++)
    {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        
        if (jentry%10000 == 0) cout << "I am running " << jentry << "th entries out of " << nentries << " total entries" << endl;
       

        bool TrigDiMuon_4_3 = false;

        for (std::vector<unsigned int>::size_type i = 0; i != TrigRes->size(); ++i)
       {
         if (TrigNames->at(i).find("HLT_DoubleMu4_3_LowMass_v") != string::npos && TrigRes->at(i) == 1)
            {
            TrigDiMuon_4_3 = true;
            }
       }
        /*bool TrigDiMuon_4_3 = false;

        for (std::vector<unsigned int>::size_type i = 0; i != TrigRes->size(); ++i)
       {
         if (TrigNames->at(i).find("HLT_Dimuon20_Jpsi_Barrel_Seagulls_v") != string::npos && TrigRes->at(i) == 1)
            {
            TrigDiMuon_4_3 = true;
            }
          std::cout << "Trigger Name: " << TrigNames->at(i) << std::endl;
          std::cout << "Trigger Result: " << TrigRes->at(i) << std::endl;
       }*/
 
 
for (unsigned int myi = 0; myi < nmumuonly; myi++)
                                        {
            //int myGoodNumLooseMuon = (*muIsPatLooseMuon)[(*mumuonlymu1Idx)[myi]] + (*muIsPatLooseMuon)[(*mumuonlymu2Idx)[myi]];
            //int myNumGoodTightMuon = (*muIsPatTightMuon)[(*mumuonlymu1Idx)[myi]] + (*muIsPatTightMuon)[(*mumuonlymu2Idx)[myi]];
            int myNumGoodSoftMuon  = (*muIsPatSoftMuon)[(*mumuonlymu1Idx)[myi]] + (*muIsPatSoftMuon)[(*mumuonlymu2Idx)[myi]];           
            
            int matchJpsiTrig=(int)(*muIsJpsiTrigMatch)[(*mumuonlymu1Idx)[myi]] + (int)(*muIsJpsiTrigMatch)[(*mumuonlymu2Idx)[myi]]; 

            TLorentzVector rawMu1p4vect, rawMu2p4vect;
            //muon1
            float raw_muPx = (*muPx)[(*mumuonlymu1Idx)[myi]];
            float raw_muPy = (*muPy)[(*mumuonlymu1Idx)[myi]];
            float raw_muPz = (*muPz)[(*mumuonlymu1Idx)[myi]];
            rawMu1p4vect.SetXYZM(raw_muPx, raw_muPy,raw_muPz, MUON_MASS);
            //muon2                             
            raw_muPx = (*muPx)[(*mumuonlymu2Idx)[myi]];
            raw_muPy = (*muPy)[(*mumuonlymu2Idx)[myi]];
            raw_muPz = (*muPz)[(*mumuonlymu2Idx)[myi]];
            rawMu2p4vect.SetXYZM(raw_muPx, raw_muPy,raw_muPz, MUON_MASS);

            TVector3 myMuplus1_theta = rawMu1p4vect.BoostVector();
            TVector3 myMuplus2_theta = rawMu2p4vect.BoostVector();


            float deltaPhi_Seagull = rawMu1p4vect.Phi() - rawMu2p4vect.Phi();
                  if
                        (deltaPhi_Seagull > TMath::Pi()) deltaPhi_Seagull -= 2.*TMath::Pi();
                  else if
                        (deltaPhi_Seagull < -TMath::Pi())  deltaPhi_Seagull += 2.*TMath::Pi();




            if (1
                && (*mumuonlyVtxCL)[myi] > 0.01  //Vertex prob greater than 0.01
                && myNumGoodSoftMuon >= 2        //Soft Muon ID 
                && ((fabs(rawMu1p4vect.Eta()) < 0.3 && rawMu1p4vect.Pt() > 4.5) || (fabs(rawMu1p4vect.Eta()) > 0.3 && fabs(rawMu1p4vect.Eta()) < 1.4 && rawMu1p4vect.Pt() > 4.0))  //Acceptance
                && ((fabs(rawMu2p4vect.Eta()) < 0.3 && rawMu2p4vect.Pt() > 4.5) || (fabs(rawMu2p4vect.Eta()) > 0.3 && fabs(rawMu2p4vect.Eta()) < 1.4 && rawMu2p4vect.Pt() > 4.0))  //Acceptance
                && ((*muCharge)[(*mumuonlymu1Idx)[myi]] + (*muCharge)[(*mumuonlymu2Idx)[myi]]) == 0       // Charge of muon pairs must be zero
                && (rawMu1p4vect+rawMu2p4vect).M()  >= 2.9 && (rawMu1p4vect+rawMu2p4vect).M() <= 4.0
                && deltaPhi_Seagull > 0      //Seagull events
                && TrigDiMuon_4_3            //Trigger
                && matchJpsiTrig >=2         //Trigger Match
                )
                {

                        myoutputfile
                        //<<  (*mumuonlyMass)[myi]   << " "
                        //<<  (*mumuonlyctau)[myi]*10000  << " "
                        <<  (rawMu1p4vect+rawMu2p4vect).M()        << " "  //Mass
                        <<  (*mumuonlyctau)[myi]                   << " "  //Ctau
                        <<  (rawMu1p4vect+rawMu2p4vect).Pt()       << " "  //Pt
                        <<  (rawMu1p4vect+rawMu2p4vect).Rapidity() << " "  //Rapidity
                        <<  (rawMu1p4vect+rawMu2p4vect).Phi()      << " "  //Phi
                        <<  (rawMu1p4vect+rawMu2p4vect).Eta()      <<      //Eta
                        std::endl;



            }
       }
    } // loop for every 4 mu
    cout << "I have done " << nentries << " entries out of " << nentries << " total entries" << endl;
    myhbk->Write();
}


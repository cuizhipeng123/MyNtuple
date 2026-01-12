//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 20 05:33:17 2024 by ROOT version 6.24/06
// from TTree X_data/X(3872) Data
// found on file: mymultilep_1011.root
//////////////////////////////////////////////////////////

#ifndef myntuple_h
#define myntuple_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class myntuple {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<unsigned int> *TrigRes;
   vector<string>  *TrigNames;
   vector<string>  *MatchTriggerNames;
   vector<unsigned int> *L1TrigRes;
   UInt_t          evtNum;
   UInt_t          runNum;
   UInt_t          lumiNum;
   UInt_t          nGoodPrimVtx;
   Float16_t       mybxlumicorr;
   Float16_t       myrawbxlumi;
   Float16_t       priVtxX;
   Float16_t       priVtxY;
   Float16_t       priVtxZ;
   Float16_t       priVtxXE;
   Float16_t       priVtxYE;
   Float16_t       priVtxZE;
   Float16_t       priVtxChiNorm;
   Float16_t       priVtxChi;
   Float16_t       priVtxCL;
   vector<float>   *PriVtxXCorrX;
   vector<float>   *PriVtxXCorrY;
   vector<float>   *PriVtxXCorrZ;
   vector<double>  *PriVtxXCorrEX;
   vector<double>  *PriVtxXCorrEY;
   vector<double>  *PriVtxXCorrEZ;
   vector<float>   *PriVtxXCorrC2;
   vector<float>   *PriVtxXCorrCL;
   UInt_t          nMu;
   vector<float>   *muPx;
   vector<float>   *muPy;
   vector<float>   *muPz;
   vector<float>   *muD0;
   vector<float>   *muD0E;
   vector<float>   *muDz;
   vector<float>   *muChi2;
   vector<float>   *muGlChi2;
   vector<float>   *mufHits;
   vector<bool>    *muFirstBarrel;
   vector<bool>    *muFirstEndCap;
   vector<float>   *muDzVtx;
   vector<float>   *muDxyVtx;
   vector<int>     *muNDF;
   vector<int>     *muGlNDF;
   vector<int>     *muPhits;
   vector<int>     *muShits;
   vector<int>     *muGlMuHits;
   vector<int>     *muType;
   vector<int>     *muQual;
   vector<int>     *muTrack;
   vector<float>   *muCharge;
   vector<float>   *muIsoratio;
   vector<int>     *munMatchedSeg;
   vector<int>     *muIsGoodSoftMuonNewIlseMod;
   vector<int>     *muIsGoodSoftMuonNewIlse;
   vector<int>     *muIsGoodLooseMuonNew;
   vector<int>     *muIsGoodLooseMuon;
   vector<int>     *muIsGoodTightMuon;
   vector<int>     *muIsPatLooseMuon;
   vector<int>     *muIsPatTightMuon;
   vector<int>     *muIsPatSoftMuon;
   vector<int>     *muIsPatMediumMuon;
   vector<int>     *muIsJpsiTrigMatch;
   vector<int>     *muIsUpsTrigMatch;
   vector<float>   *muMVAMuonID;
   vector<float>   *musegmentCompatibility;
   vector<float>   *mupulldXdZ_pos_noArb;
   vector<float>   *mupulldYdZ_pos_noArb;
   vector<float>   *mupulldXdZ_pos_ArbDef;
   vector<float>   *mupulldYdZ_pos_ArbDef;
   vector<float>   *mupulldXdZ_pos_ArbST;
   vector<float>   *mupulldYdZ_pos_ArbST;
   vector<float>   *mupulldXdZ_pos_noArb_any;
   vector<float>   *mupulldYdZ_pos_noArb_any;
   vector<int>     *muUpsVrtxMatch;
   vector<int>     *muL3TriggerMatch;
   UInt_t          nMyFourMuon;
   vector<bool>    *MyFourMuonTrigMatch;
   vector<int>     *MyFourMuonChg;
   vector<float>   *MyFourMuonMass;
   vector<float>   *MyFourMuonMassErr;
   vector<float>   *MyFourMuonCTau;
   vector<float>   *MyFourMuonCTauErr;
   vector<int>     *MyHitBeforeVrtx;
   vector<int>     *MyMissAfterVrtx;
   vector<float>   *My1234Mass;
   vector<float>   *My1324Mass;
   vector<float>   *My1423Mass;
   vector<double>  *My1234JpsiDisXY;
   vector<double>  *My1324JpsiDisXY;
   vector<double>  *My1423JpsiDisXY;
   vector<double>  *My1234JpsiDisZ;
   vector<double>  *My1324JpsiDisZ;
   vector<double>  *My1423JpsiDisZ;
   vector<double>  *MyJpsi1CTau_Mu12;
   vector<double>  *MyJpsi1CTauErr_Mu12;
   vector<double>  *MyJpsi1ChiProb_Mu12;
   vector<int>     *MyJpsi1HitsBeforeMu12;
   vector<int>     *MyJpsi1MissAfterMu12;
   vector<double>  *MyJpsi2CTau_Mu34;
   vector<double>  *MyJpsi2CTauErr_Mu34;
   vector<double>  *MyJpsi2ChiProb_Mu34;
   vector<int>     *MyJpsi2HitsBeforeMu34;
   vector<int>     *MyJpsi2MissAfterMu34;
   vector<double>  *MyJpsi3CTau_Mu13;
   vector<double>  *MyJpsi3CTauErr_Mu13;
   vector<double>  *MyJpsi3ChiProb_Mu13;
   vector<int>     *MyJpsi3HitsBeforeMu13;
   vector<int>     *MyJpsi3MissAfterMu13;
   vector<double>  *MyJpsi4CTau_Mu24;
   vector<double>  *MyJpsi4CTauErr_Mu24;
   vector<double>  *MyJpsi4ChiProb_Mu24;
   vector<int>     *MyJpsi4HitsBeforeMu24;
   vector<int>     *MyJpsi4MissAfterMu24;
   vector<double>  *MyJpsi5CTau_Mu14;
   vector<double>  *MyJpsi5CTauErr_Mu14;
   vector<double>  *MyJpsi5ChiProb_Mu14;
   vector<int>     *MyJpsi5HitsBeforeMu14;
   vector<int>     *MyJpsi5MissAfterMu14;
   vector<double>  *MyJpsi6CTau_Mu23;
   vector<double>  *MyJpsi6CTauErr_Mu23;
   vector<double>  *MyJpsi6ChiProb_Mu23;
   vector<int>     *MyJpsi6HitsBeforeMu23;
   vector<int>     *MyJpsi6MissAfterMu23;
   vector<float>   *MyJpsi1Mass_Mu12;
   vector<float>   *MyJpsi1MassErr_Mu12;
   vector<float>   *MyJpsi2Mass_Mu34;
   vector<float>   *MyJpsi2MassErr_Mu34;
   vector<float>   *MyJpsi3Mass_Mu13;
   vector<float>   *MyJpsi3MassErr_Mu13;
   vector<float>   *MyJpsi4Mass_Mu24;
   vector<float>   *MyJpsi4MassErr_Mu24;
   vector<float>   *MyJpsi5Mass_Mu14;
   vector<float>   *MyJpsi5MassErr_Mu14;
   vector<float>   *MyJpsi6Mass_Mu23;
   vector<float>   *MyJpsi6MassErr_Mu23;
   vector<int>     *MyFourMuonOverlap12;
   vector<int>     *MyFourMuonOverlap13;
   vector<int>     *MyFourMuonOverlap14;
   vector<int>     *MyFourMuonOverlap23;
   vector<int>     *MyFourMuonOverlap24;
   vector<int>     *MyFourMuonOverlap34;
   vector<int>     *MyFourMuonSharedSeg12;
   vector<int>     *MyFourMuonSharedSeg13;
   vector<int>     *MyFourMuonSharedSeg14;
   vector<int>     *MyFourMuonSharedSeg23;
   vector<int>     *MyFourMuonSharedSeg24;
   vector<int>     *MyFourMuonSharedSeg34;
   vector<float>   *MyFourMuonVtxCL;
   vector<float>   *MyFourMuonVtxC2;
   vector<float>   *MyFourMuonPx;
   vector<float>   *MyFourMuonPy;
   vector<float>   *MyFourMuonPz;
   vector<float>   *MyFourMuonDecayVtxX;
   vector<float>   *MyFourMuonDecayVtxY;
   vector<float>   *MyFourMuonDecayVtxZ;
   vector<float>   *MyFourMuonDecayVtxXE;
   vector<float>   *MyFourMuonDecayVtxYE;
   vector<float>   *MyFourMuonDecayVtxZE;
   vector<int>     *MyFourMuonMu1Idx;
   vector<int>     *MyFourMuonMu2Idx;
   vector<float>   *MyFourMuonMu2Px;
   vector<float>   *MyFourMuonMu2Py;
   vector<float>   *MyFourMuonMu2Pz;
   vector<float>   *MyFourMuonMu1Px;
   vector<float>   *MyFourMuonMu1Py;
   vector<float>   *MyFourMuonMu1Pz;
   vector<float>   *MyFourMuonMu2fChi2;
   vector<int>     *MyFourMuonMu2fNDF;
   vector<float>   *MyFourMuonMu1fChi2;
   vector<int>     *MyFourMuonMu1fNDF;
   vector<float>   *MyFourMuoncosAlpha;
   vector<float>   *MyFourMuonFLSig;
   vector<float>   *MyFourMuonrVtxMag2D;
   vector<float>   *MyFourMuonsigmaRvtxMag2D;
   vector<float>   *MyFourMuonTrkIsoOverFourMuSumpt;
   vector<float>   *MyFourMuonTrkIsoOverFourMuVectpt;
   vector<int>     *MyFourMuonMu3fNDF;
   vector<int>     *MyFourMuonMu3Idx;
   vector<float>   *MyFourMuonMu3Px;
   vector<float>   *MyFourMuonMu3Py;
   vector<float>   *MyFourMuonMu3Pz;
   vector<float>   *MyFourMuonMu3fChi2;
   vector<int>     *MyFourMuonMu4fNDF;
   vector<int>     *MyFourMuonMu4Idx;
   vector<float>   *MyFourMuonMu4Px;
   vector<float>   *MyFourMuonMu4Py;
   vector<float>   *MyFourMuonMu4Pz;
   vector<float>   *MyFourMuonMu4fChi2;
   UInt_t          nmumuonly;
   vector<float>   *mumuonlyMass;
   vector<float>   *mumuonlyMassErr;
   vector<float>   *mumuonlyVtxCL;
   vector<float>   *mumuonlyPx;
   vector<float>   *mumuonlyPy;
   vector<float>   *mumuonlyPz;
   vector<float>   *mumuonlymu1Idx;
   vector<float>   *mumuonlymu2Idx;
   vector<float>   *mumuonlyctau;
   vector<float>   *mumuonlyctauerr;
   vector<int>     *mumuonlymuoverlapped;
   vector<int>     *mumuonlyChg;
   vector<int>     *mumuonlynsharedSeg;
   vector<float>   *mymass1234JJ;
   vector<float>   *mymass1234YY;
   vector<float>   *mymass1234psi2spsi2s;
   vector<float>   *mymass1234psi2sJ;
   vector<float>   *mymass1234YJ;
   vector<float>   *mymass1234Ypsi2s;
   vector<float>   *mymass1234Y12mumu;
   vector<float>   *mymass1234Y34mumu;
   vector<float>   *mymass1234J12mumu;
   vector<float>   *mymass1234J34mumu;
   vector<float>   *mymass1324JJ;
   vector<float>   *mymass1324YY;
   vector<float>   *mymass1324psi2spsi2s;
   vector<float>   *mymass1324psi2sJ;
   vector<float>   *mymass1324YJ;
   vector<float>   *mymass1324Ypsi2s;
   vector<float>   *mymass1324Y13mumu;
   vector<float>   *mymass1324Y24mumu;
   vector<float>   *mymass1324J13mumu;
   vector<float>   *mymass1324J24mumu;
   vector<float>   *mymass1423JJ;
   vector<float>   *mymass1423YY;
   vector<float>   *mymass1423psi2spsi2s;
   vector<float>   *mymass1423psi2sJ;
   vector<float>   *mymass1423YJ;
   vector<float>   *mymass1423Ypsi2s;
   vector<float>   *mymass1423Y14mumu;
   vector<float>   *mymass1423Y23mumu;
   vector<float>   *mymass1423J14mumu;
   vector<float>   *mymass1423J23mumu;
   vector<float>   *myX1JJChiProb;
   vector<float>   *myX2JJChiProb;
   vector<float>   *myX1YYChiProb;
   vector<float>   *myX2YYChiProb;
   vector<float>   *myX1psi2spsi2sChiProb;
   vector<float>   *myX2psi2spsi2sChiProb;
   vector<float>   *myX1psi2sJChiProb;
   vector<float>   *myX2psi2sJChiProb;
   vector<float>   *myX1YJChiProb;
   vector<float>   *myX2YJChiProb;
   vector<float>   *myX1Ypsi2sChiProb;
   vector<float>   *myX2Ypsi2sChiProb;
   vector<float>   *myX1Y12mumuChiProb;
   vector<float>   *myX2Y12mumuChiProb;
   vector<float>   *myX1Y34mumuChiProb;
   vector<float>   *myX2Y34mumuChiProb;
   vector<float>   *myX1J12mumuChiProb;
   vector<float>   *myX2J12mumuChiProb;
   vector<float>   *myX1J34mumuChiProb;
   vector<float>   *myX2J34mumuChiProb;
   vector<float>   *myX3JJChiProb;
   vector<float>   *myX4JJChiProb;
   vector<float>   *myX3YYChiProb;
   vector<float>   *myX4YYChiProb;
   vector<float>   *myX3psi2spsi2sChiProb;
   vector<float>   *myX4psi2spsi2sChiProb;
   vector<float>   *myX3psi2sJChiProb;
   vector<float>   *myX4psi2sJChiProb;
   vector<float>   *myX3YJChiProb;
   vector<float>   *myX4YJChiProb;
   vector<float>   *myX3Ypsi2sChiProb;
   vector<float>   *myX4Ypsi2sChiProb;
   vector<float>   *myX3Y13mumuChiProb;
   vector<float>   *myX4Y13mumuChiProb;
   vector<float>   *myX3Y24mumuChiProb;
   vector<float>   *myX4Y24mumuChiProb;
   vector<float>   *myX3J13mumuChiProb;
   vector<float>   *myX4J13mumuChiProb;
   vector<float>   *myX3J24mumuChiProb;
   vector<float>   *myX4J24mumuChiProb;
   vector<float>   *myX5JJChiProb;
   vector<float>   *myX6JJChiProb;
   vector<float>   *myX5YYChiProb;
   vector<float>   *myX6YYChiProb;
   vector<float>   *myX5psi2spsi2sChiProb;
   vector<float>   *myX6psi2spsi2sChiProb;
   vector<float>   *myX5psi2sJChiProb;
   vector<float>   *myX6psi2sJChiProb;
   vector<float>   *myX5YJChiProb;
   vector<float>   *myX6YJChiProb;
   vector<float>   *myX5Ypsi2sChiProb;
   vector<float>   *myX6Ypsi2sChiProb;
   vector<float>   *myX5Y14mumuChiProb;
   vector<float>   *myX6Y14mumuChiProb;
   vector<float>   *myX5Y23mumuChiProb;
   vector<float>   *myX6Y23mumuChiProb;
   vector<float>   *myX5J14mumuChiProb;
   vector<float>   *myX6J14mumuChiProb;
   vector<float>   *myX5J23mumuChiProb;
   vector<float>   *myX6J23mumuChiProb;
   vector<float>   *my4muVtxCL1234JJ;
   vector<float>   *myX1Px1234JJ;
   vector<float>   *myX1Py1234JJ;
   vector<float>   *myX1Pz1234JJ;
   vector<float>   *myX1M1234JJ;
   vector<float>   *myX2Px1234JJ;
   vector<float>   *myX2Py1234JJ;
   vector<float>   *myX2Pz1234JJ;
   vector<float>   *myX2M1234JJ;
   vector<float>   *my4muVtxCL1324JJ;
   vector<float>   *myX3Px1324JJ;
   vector<float>   *myX3Py1324JJ;
   vector<float>   *myX3Pz1324JJ;
   vector<float>   *myX3M1324JJ;
   vector<float>   *myX4Px1324JJ;
   vector<float>   *myX4Py1324JJ;
   vector<float>   *myX4Pz1324JJ;
   vector<float>   *myX4M1324JJ;
   vector<float>   *my4muVtxCL1423JJ;
   vector<float>   *myX5Px1423JJ;
   vector<float>   *myX5Py1423JJ;
   vector<float>   *myX5Pz1423JJ;
   vector<float>   *myX5M1423JJ;
   vector<float>   *myX6Px1423JJ;
   vector<float>   *myX6Py1423JJ;
   vector<float>   *myX6Pz1423JJ;
   vector<float>   *myX6M1423JJ;
   vector<float>   *my4muVtxCL1234YY;
   vector<float>   *myX1Px1234YY;
   vector<float>   *myX1Py1234YY;
   vector<float>   *myX1Pz1234YY;
   vector<float>   *myX1M1234YY;
   vector<float>   *myX2Px1234YY;
   vector<float>   *myX2Py1234YY;
   vector<float>   *myX2Pz1234YY;
   vector<float>   *myX2M1234YY;
   vector<float>   *my4muVtxCL1324YY;
   vector<float>   *myX3Px1324YY;
   vector<float>   *myX3Py1324YY;
   vector<float>   *myX3Pz1324YY;
   vector<float>   *myX3M1324YY;
   vector<float>   *myX4Px1324YY;
   vector<float>   *myX4Py1324YY;
   vector<float>   *myX4Pz1324YY;
   vector<float>   *myX4M1324YY;
   vector<float>   *my4muVtxCL1423YY;
   vector<float>   *myX5Px1423YY;
   vector<float>   *myX5Py1423YY;
   vector<float>   *myX5Pz1423YY;
   vector<float>   *myX5M1423YY;
   vector<float>   *myX6Px1423YY;
   vector<float>   *myX6Py1423YY;
   vector<float>   *myX6Pz1423YY;
   vector<float>   *myX6M1423YY;
   vector<float>   *my4muVtxCL1234psi2spsi2s;
   vector<float>   *myX1Px1234psi2spsi2s;
   vector<float>   *myX1Py1234psi2spsi2s;
   vector<float>   *myX1Pz1234psi2spsi2s;
   vector<float>   *myX1M1234psi2spsi2s;
   vector<float>   *myX2Px1234psi2spsi2s;
   vector<float>   *myX2Py1234psi2spsi2s;
   vector<float>   *myX2Pz1234psi2spsi2s;
   vector<float>   *myX2M1234psi2spsi2s;
   vector<float>   *my4muVtxCL1324psi2spsi2s;
   vector<float>   *myX3Px1324psi2spsi2s;
   vector<float>   *myX3Py1324psi2spsi2s;
   vector<float>   *myX3Pz1324psi2spsi2s;
   vector<float>   *myX3M1324psi2spsi2s;
   vector<float>   *myX4Px1324psi2spsi2s;
   vector<float>   *myX4Py1324psi2spsi2s;
   vector<float>   *myX4Pz1324psi2spsi2s;
   vector<float>   *myX4M1324psi2spsi2s;
   vector<float>   *my4muVtxCL1423psi2spsi2s;
   vector<float>   *myX5Px1423psi2spsi2s;
   vector<float>   *myX5Py1423psi2spsi2s;
   vector<float>   *myX5Pz1423psi2spsi2s;
   vector<float>   *myX5M1423psi2spsi2s;
   vector<float>   *myX6Px1423psi2spsi2s;
   vector<float>   *myX6Py1423psi2spsi2s;
   vector<float>   *myX6Pz1423psi2spsi2s;
   vector<float>   *myX6M1423psi2spsi2s;
   vector<float>   *my4muVtxCL1234psi2sJ;
   vector<float>   *myX1Px1234psi2sJ;
   vector<float>   *myX1Py1234psi2sJ;
   vector<float>   *myX1Pz1234psi2sJ;
   vector<float>   *myX1M1234psi2sJ;
   vector<float>   *myX2Px1234psi2sJ;
   vector<float>   *myX2Py1234psi2sJ;
   vector<float>   *myX2Pz1234psi2sJ;
   vector<float>   *myX2M1234psi2sJ;
   vector<float>   *my4muVtxCL1324psi2sJ;
   vector<float>   *myX3Px1324psi2sJ;
   vector<float>   *myX3Py1324psi2sJ;
   vector<float>   *myX3Pz1324psi2sJ;
   vector<float>   *myX3M1324psi2sJ;
   vector<float>   *myX4Px1324psi2sJ;
   vector<float>   *myX4Py1324psi2sJ;
   vector<float>   *myX4Pz1324psi2sJ;
   vector<float>   *myX4M1324psi2sJ;
   vector<float>   *my4muVtxCL1423psi2sJ;
   vector<float>   *myX5Px1423psi2sJ;
   vector<float>   *myX5Py1423psi2sJ;
   vector<float>   *myX5Pz1423psi2sJ;
   vector<float>   *myX5M1423psi2sJ;
   vector<float>   *myX6Px1423psi2sJ;
   vector<float>   *myX6Py1423psi2sJ;
   vector<float>   *myX6Pz1423psi2sJ;
   vector<float>   *myX6M1423psi2sJ;
   vector<float>   *my4muVtxCL1234YJ;
   vector<float>   *myX1Px1234YJ;
   vector<float>   *myX1Py1234YJ;
   vector<float>   *myX1Pz1234YJ;
   vector<float>   *myX1M1234YJ;
   vector<float>   *myX2Px1234YJ;
   vector<float>   *myX2Py1234YJ;
   vector<float>   *myX2Pz1234YJ;
   vector<float>   *myX2M1234YJ;
   vector<float>   *my4muVtxCL1324YJ;
   vector<float>   *myX3Px1324YJ;
   vector<float>   *myX3Py1324YJ;
   vector<float>   *myX3Pz1324YJ;
   vector<float>   *myX3M1324YJ;
   vector<float>   *myX4Px1324YJ;
   vector<float>   *myX4Py1324YJ;
   vector<float>   *myX4Pz1324YJ;
   vector<float>   *myX4M1324YJ;
   vector<float>   *my4muVtxCL1423YJ;
   vector<float>   *myX5Px1423YJ;
   vector<float>   *myX5Py1423YJ;
   vector<float>   *myX5Pz1423YJ;
   vector<float>   *myX5M1423YJ;
   vector<float>   *myX6Px1423YJ;
   vector<float>   *myX6Py1423YJ;
   vector<float>   *myX6Pz1423YJ;
   vector<float>   *myX6M1423YJ;
   vector<float>   *my4muVtxCL1234Ypsi2s;
   vector<float>   *myX1Px1234Ypsi2s;
   vector<float>   *myX1Py1234Ypsi2s;
   vector<float>   *myX1Pz1234Ypsi2s;
   vector<float>   *myX1M1234Ypsi2s;
   vector<float>   *myX2Px1234Ypsi2s;
   vector<float>   *myX2Py1234Ypsi2s;
   vector<float>   *myX2Pz1234Ypsi2s;
   vector<float>   *myX2M1234Ypsi2s;
   vector<float>   *my4muVtxCL1324Ypsi2s;
   vector<float>   *myX3Px1324Ypsi2s;
   vector<float>   *myX3Py1324Ypsi2s;
   vector<float>   *myX3Pz1324Ypsi2s;
   vector<float>   *myX3M1324Ypsi2s;
   vector<float>   *myX4Px1324Ypsi2s;
   vector<float>   *myX4Py1324Ypsi2s;
   vector<float>   *myX4Pz1324Ypsi2s;
   vector<float>   *myX4M1324Ypsi2s;
   vector<float>   *my4muVtxCL1423Ypsi2s;
   vector<float>   *myX5Px1423Ypsi2s;
   vector<float>   *myX5Py1423Ypsi2s;
   vector<float>   *myX5Pz1423Ypsi2s;
   vector<float>   *myX5M1423Ypsi2s;
   vector<float>   *myX6Px1423Ypsi2s;
   vector<float>   *myX6Py1423Ypsi2s;
   vector<float>   *myX6Pz1423Ypsi2s;
   vector<float>   *myX6M1423Ypsi2s;
   vector<float>   *my4muVtxCL1234Y12mumu;
   vector<float>   *myX1Px1234Y12mumu;
   vector<float>   *myX1Py1234Y12mumu;
   vector<float>   *myX1Pz1234Y12mumu;
   vector<float>   *myX1M1234Y12mumu;
   vector<float>   *myX2Px1234Y12mumu;
   vector<float>   *myX2Py1234Y12mumu;
   vector<float>   *myX2Pz1234Y12mumu;
   vector<float>   *myX2M1234Y12mumu;
   vector<float>   *my4muVtxCL1324Y13mumu;
   vector<float>   *myX3Px1324Y13mumu;
   vector<float>   *myX3Py1324Y13mumu;
   vector<float>   *myX3Pz1324Y13mumu;
   vector<float>   *myX3M1324Y13mumu;
   vector<float>   *myX4Px1324Y13mumu;
   vector<float>   *myX4Py1324Y13mumu;
   vector<float>   *myX4Pz1324Y13mumu;
   vector<float>   *myX4M1324Y13mumu;
   vector<float>   *my4muVtxCL1423Y14mumu;
   vector<float>   *myX5Px1423Y14mumu;
   vector<float>   *myX5Py1423Y14mumu;
   vector<float>   *myX5Pz1423Y14mumu;
   vector<float>   *myX5M1423Y14mumu;
   vector<float>   *myX6Px1423Y14mumu;
   vector<float>   *myX6Py1423Y14mumu;
   vector<float>   *myX6Pz1423Y14mumu;
   vector<float>   *myX6M1423Y14mumu;
   vector<float>   *my4muVtxCL1234Y34mumu;
   vector<float>   *myX1Px1234Y34mumu;
   vector<float>   *myX1Py1234Y34mumu;
   vector<float>   *myX1Pz1234Y34mumu;
   vector<float>   *myX1M1234Y34mumu;
   vector<float>   *myX2Px1234Y34mumu;
   vector<float>   *myX2Py1234Y34mumu;
   vector<float>   *myX2Pz1234Y34mumu;
   vector<float>   *myX2M1234Y34mumu;
   vector<float>   *my4muVtxCL1324Y24mumu;
   vector<float>   *myX3Px1324Y24mumu;
   vector<float>   *myX3Py1324Y24mumu;
   vector<float>   *myX3Pz1324Y24mumu;
   vector<float>   *myX3M1324Y24mumu;
   vector<float>   *myX4Px1324Y24mumu;
   vector<float>   *myX4Py1324Y24mumu;
   vector<float>   *myX4Pz1324Y24mumu;
   vector<float>   *myX4M1324Y24mumu;
   vector<float>   *my4muVtxCL1423Y23mumu;
   vector<float>   *myX5Px1423Y23mumu;
   vector<float>   *myX5Py1423Y23mumu;
   vector<float>   *myX5Pz1423Y23mumu;
   vector<float>   *myX5M1423Y23mumu;
   vector<float>   *myX6Px1423Y23mumu;
   vector<float>   *myX6Py1423Y23mumu;
   vector<float>   *myX6Pz1423Y23mumu;
   vector<float>   *myX6M1423Y23mumu;
   vector<float>   *my4muVtxCL1234J12mumu;
   vector<float>   *myX1Px1234J12mumu;
   vector<float>   *myX1Py1234J12mumu;
   vector<float>   *myX1Pz1234J12mumu;
   vector<float>   *myX1M1234J12mumu;
   vector<float>   *myX2Px1234J12mumu;
   vector<float>   *myX2Py1234J12mumu;
   vector<float>   *myX2Pz1234J12mumu;
   vector<float>   *myX2M1234J12mumu;
   vector<float>   *my4muVtxCL1324J13mumu;
   vector<float>   *myX3Px1324J13mumu;
   vector<float>   *myX3Py1324J13mumu;
   vector<float>   *myX3Pz1324J13mumu;
   vector<float>   *myX3M1324J13mumu;
   vector<float>   *myX4Px1324J13mumu;
   vector<float>   *myX4Py1324J13mumu;
   vector<float>   *myX4Pz1324J13mumu;
   vector<float>   *myX4M1324J13mumu;
   vector<float>   *my4muVtxCL1423J14mumu;
   vector<float>   *myX5Px1423J14mumu;
   vector<float>   *myX5Py1423J14mumu;
   vector<float>   *myX5Pz1423J14mumu;
   vector<float>   *myX5M1423J14mumu;
   vector<float>   *myX6Px1423J14mumu;
   vector<float>   *myX6Py1423J14mumu;
   vector<float>   *myX6Pz1423J14mumu;
   vector<float>   *myX6M1423J14mumu;
   vector<float>   *my4muVtxCL1234J34mumu;
   vector<float>   *myX1Px1234J34mumu;
   vector<float>   *myX1Py1234J34mumu;
   vector<float>   *myX1Pz1234J34mumu;
   vector<float>   *myX1M1234J34mumu;
   vector<float>   *myX2Px1234J34mumu;
   vector<float>   *myX2Py1234J34mumu;
   vector<float>   *myX2Pz1234J34mumu;
   vector<float>   *myX2M1234J34mumu;
   vector<float>   *my4muVtxCL1324J24mumu;
   vector<float>   *myX3Px1324J24mumu;
   vector<float>   *myX3Py1324J24mumu;
   vector<float>   *myX3Pz1324J24mumu;
   vector<float>   *myX3M1324J24mumu;
   vector<float>   *myX4Px1324J24mumu;
   vector<float>   *myX4Py1324J24mumu;
   vector<float>   *myX4Pz1324J24mumu;
   vector<float>   *myX4M1324J24mumu;
   vector<float>   *my4muVtxCL1423J23mumu;
   vector<float>   *myX5Px1423J23mumu;
   vector<float>   *myX5Py1423J23mumu;
   vector<float>   *myX5Pz1423J23mumu;
   vector<float>   *myX5M1423J23mumu;
   vector<float>   *myX6Px1423J23mumu;
   vector<float>   *myX6Py1423J23mumu;
   vector<float>   *myX6Pz1423J23mumu;
   vector<float>   *myX6M1423J23mumu;

   // List of branches
   TBranch        *b_TrigRes;   //!
   TBranch        *b_TrigNames;   //!
   TBranch        *b_MatchTriggerNames;   //!
   TBranch        *b_L1TrigRes;   //!
   TBranch        *b_evtNum;   //!
   TBranch        *b_runNum;   //!
   TBranch        *b_lumiNum;   //!
   TBranch        *b_nGoodPrimVtx;   //!
   TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   //TBranch        *b_f;   //!
   TBranch        *b_PriVtxXCorrX;   //!
   TBranch        *b_PriVtxXCorrY;   //!
   TBranch        *b_PriVtxXCorrZ;   //!
   TBranch        *b_PriVtxXCorrEX;   //!
   TBranch        *b_PriVtxXCorrEY;   //!
   TBranch        *b_PriVtxXCorrEZ;   //!
   TBranch        *b_PriVtxXCorrC2;   //!
   TBranch        *b_PriVtxXCorrCL;   //!
   TBranch        *b_nMu;   //!
   TBranch        *b_muPx;   //!
   TBranch        *b_muPy;   //!
   TBranch        *b_muPz;   //!
   TBranch        *b_muD0;   //!
   TBranch        *b_muD0E;   //!
   TBranch        *b_muDz;   //!
   TBranch        *b_muChi2;   //!
   TBranch        *b_muGlChi2;   //!
   TBranch        *b_mufHits;   //!
   TBranch        *b_muFirstBarrel;   //!
   TBranch        *b_muFirstEndCap;   //!
   TBranch        *b_muDzVtx;   //!
   TBranch        *b_muDxyVtx;   //!
   TBranch        *b_muNDF;   //!
   TBranch        *b_muGlNDF;   //!
   TBranch        *b_muPhits;   //!
   TBranch        *b_muShits;   //!
   TBranch        *b_muGlMuHits;   //!
   TBranch        *b_muType;   //!
   TBranch        *b_muQual;   //!
   TBranch        *b_muTrack;   //!
   TBranch        *b_muCharge;   //!
   TBranch        *b_muIsoratio;   //!
   TBranch        *b_munMatchedSeg;   //!
   TBranch        *b_muIsGoodSoftMuonNewIlseMod;   //!
   TBranch        *b_muIsGoodSoftMuonNewIlse;   //!
   TBranch        *b_muIsGoodLooseMuonNew;   //!
   TBranch        *b_muIsGoodLooseMuon;   //!
   TBranch        *b_muIsGoodTightMuon;   //!
   TBranch        *b_muIsPatLooseMuon;   //!
   TBranch        *b_muIsPatTightMuon;   //!
   TBranch        *b_muIsPatSoftMuon;   //!
   TBranch        *b_muIsPatMediumMuon;   //!
   TBranch        *b_muIsJpsiTrigMatch;   //!
   TBranch        *b_muIsUpsTrigMatch;   //!
   TBranch        *b_muMVAMuonID;   //!
   TBranch        *b_musegmentCompatibility;   //!
   TBranch        *b_mupulldXdZ_pos_noArb;   //!
   TBranch        *b_mupulldYdZ_pos_noArb;   //!
   TBranch        *b_mupulldXdZ_pos_ArbDef;   //!
   TBranch        *b_mupulldYdZ_pos_ArbDef;   //!
   TBranch        *b_mupulldXdZ_pos_ArbST;   //!
   TBranch        *b_mupulldYdZ_pos_ArbST;   //!
   TBranch        *b_mupulldXdZ_pos_noArb_any;   //!
   TBranch        *b_mupulldYdZ_pos_noArb_any;   //!
   TBranch        *b_muUpsVrtxMatch;   //!
   TBranch        *b_muL3TriggerMatch;   //!
   TBranch        *b_nMyFourMuon;   //!
   TBranch        *b_MyFourMuonTrigMatch;   //!
   TBranch        *b_MyFourMuonChg;   //!
   TBranch        *b_MyFourMuonMass;   //!
   TBranch        *b_MyFourMuonMassErr;   //!
   TBranch        *b_MyFourMuonCTau;   //!
   TBranch        *b_MyFourMuonCTauErr;   //!
   TBranch        *b_MyHitBeforeVrtx;   //!
   TBranch        *b_MyMissAfterVrtx;   //!
   TBranch        *b_My1234Mass;   //!
   TBranch        *b_My1324Mass;   //!
   TBranch        *b_My1423Mass;   //!
   TBranch        *b_My1234JpsiDisXY;   //!
   TBranch        *b_My1324JpsiDisXY;   //!
   TBranch        *b_My1423JpsiDisXY;   //!
   TBranch        *b_My1234JpsiDisZ;   //!
   TBranch        *b_My1324JpsiDisZ;   //!
   TBranch        *b_My1423JpsiDisZ;   //!
   TBranch        *b_MyJpsi1CTau_Mu12;   //!
   TBranch        *b_MyJpsi1CTauErr_Mu12;   //!
   TBranch        *b_MyJpsi1ChiProb_Mu12;   //!
   TBranch        *b_MyJpsi1HitsBeforeMu12;   //!
   TBranch        *b_MyJpsi1MissAfterMu12;   //!
   TBranch        *b_MyJpsi2CTau_Mu34;   //!
   TBranch        *b_MyJpsi2CTauErr_Mu34;   //!
   TBranch        *b_MyJpsi2ChiProb_Mu34;   //!
   TBranch        *b_MyJpsi2HitsBeforeMu34;   //!
   TBranch        *b_MyJpsi2MissAfterMu34;   //!
   TBranch        *b_MyJpsi3CTau_Mu13;   //!
   TBranch        *b_MyJpsi3CTauErr_Mu13;   //!
   TBranch        *b_MyJpsi3ChiProb_Mu13;   //!
   TBranch        *b_MyJpsi3HitsBeforeMu13;   //!
   TBranch        *b_MyJpsi3MissAfterMu13;   //!
   TBranch        *b_MyJpsi4CTau_Mu24;   //!
   TBranch        *b_MyJpsi4CTauErr_Mu24;   //!
   TBranch        *b_MyJpsi4ChiProb_Mu24;   //!
   TBranch        *b_MyJpsi4HitsBeforeMu24;   //!
   TBranch        *b_MyJpsi4MissAfterMu24;   //!
   TBranch        *b_MyJpsi5CTau_Mu14;   //!
   TBranch        *b_MyJpsi5CTauErr_Mu14;   //!
   TBranch        *b_MyJpsi5ChiProb_Mu14;   //!
   TBranch        *b_MyJpsi5HitsBeforeMu14;   //!
   TBranch        *b_MyJpsi5MissAfterMu14;   //!
   TBranch        *b_MyJpsi6CTau_Mu23;   //!
   TBranch        *b_MyJpsi6CTauErr_Mu23;   //!
   TBranch        *b_MyJpsi6ChiProb_Mu23;   //!
   TBranch        *b_MyJpsi6HitsBeforeMu23;   //!
   TBranch        *b_MyJpsi6MissAfterMu23;   //!
   TBranch        *b_MyJpsi1Mass_Mu12;   //!
   TBranch        *b_MyJpsi1MassErr_Mu12;   //!
   TBranch        *b_MyJpsi2Mass_Mu34;   //!
   TBranch        *b_MyJpsi2MassErr_Mu34;   //!
   TBranch        *b_MyJpsi3Mass_Mu13;   //!
   TBranch        *b_MyJpsi3MassErr_Mu13;   //!
   TBranch        *b_MyJpsi4Mass_Mu24;   //!
   TBranch        *b_MyJpsi4MassErr_Mu24;   //!
   TBranch        *b_MyJpsi5Mass_Mu14;   //!
   TBranch        *b_MyJpsi5MassErr_Mu14;   //!
   TBranch        *b_MyJpsi6Mass_Mu23;   //!
   TBranch        *b_MyJpsi6MassErr_Mu23;   //!
   TBranch        *b_MyFourMuonOverlap12;   //!
   TBranch        *b_MyFourMuonOverlap13;   //!
   TBranch        *b_MyFourMuonOverlap14;   //!
   TBranch        *b_MyFourMuonOverlap23;   //!
   TBranch        *b_MyFourMuonOverlap24;   //!
   TBranch        *b_MyFourMuonOverlap34;   //!
   TBranch        *b_MyFourMuonSharedSeg12;   //!
   TBranch        *b_MyFourMuonSharedSeg13;   //!
   TBranch        *b_MyFourMuonSharedSeg14;   //!
   TBranch        *b_MyFourMuonSharedSeg23;   //!
   TBranch        *b_MyFourMuonSharedSeg24;   //!
   TBranch        *b_MyFourMuonSharedSeg34;   //!
   TBranch        *b_MyFourMuonVtxCL;   //!
   TBranch        *b_MyFourMuonVtxC2;   //!
   TBranch        *b_MyFourMuonPx;   //!
   TBranch        *b_MyFourMuonPy;   //!
   TBranch        *b_MyFourMuonPz;   //!
   TBranch        *b_MyFourMuonDecayVtxX;   //!
   TBranch        *b_MyFourMuonDecayVtxY;   //!
   TBranch        *b_MyFourMuonDecayVtxZ;   //!
   TBranch        *b_MyFourMuonDecayVtxXE;   //!
   TBranch        *b_MyFourMuonDecayVtxYE;   //!
   TBranch        *b_MyFourMuonDecayVtxZE;   //!
   TBranch        *b_MyFourMuonMu1Idx;   //!
   TBranch        *b_MyFourMuonMu2Idx;   //!
   TBranch        *b_MyFourMuonMu2Px;   //!
   TBranch        *b_MyFourMuonMu2Py;   //!
   TBranch        *b_MyFourMuonMu2Pz;   //!
   TBranch        *b_MyFourMuonMu1Px;   //!
   TBranch        *b_MyFourMuonMu1Py;   //!
   TBranch        *b_MyFourMuonMu1Pz;   //!
   TBranch        *b_MyFourMuonMu2fChi2;   //!
   TBranch        *b_MyFourMuonMu2fNDF;   //!
   TBranch        *b_MyFourMuonMu1fChi2;   //!
   TBranch        *b_MyFourMuonMu1fNDF;   //!
   TBranch        *b_MyFourMuoncosAlpha;   //!
   TBranch        *b_MyFourMuonFLSig;   //!
   TBranch        *b_MyFourMuonrVtxMag2D;   //!
   TBranch        *b_MyFourMuonsigmaRvtxMag2D;   //!
   TBranch        *b_MyFourMuonTrkIsoOverFourMuSumpt;   //!
   TBranch        *b_MyFourMuonTrkIsoOverFourMuVectpt;   //!
   TBranch        *b_MyFourMuonMu3fNDF;   //!
   TBranch        *b_MyFourMuonMu3Idx;   //!
   TBranch        *b_MyFourMuonMu3Px;   //!
   TBranch        *b_MyFourMuonMu3Py;   //!
   TBranch        *b_MyFourMuonMu3Pz;   //!
   TBranch        *b_MyFourMuonMu3fChi2;   //!
   TBranch        *b_MyFourMuonMu4fNDF;   //!
   TBranch        *b_MyFourMuonMu4Idx;   //!
   TBranch        *b_MyFourMuonMu4Px;   //!
   TBranch        *b_MyFourMuonMu4Py;   //!
   TBranch        *b_MyFourMuonMu4Pz;   //!
   TBranch        *b_MyFourMuonMu4fChi2;   //!
   TBranch        *b_nmumuonly;   //!
   TBranch        *b_mumuonlyMass;   //!
   TBranch        *b_mumuonlyMassErr;   //!
   TBranch        *b_mumuonlyVtxCL;   //!
   TBranch        *b_mumuonlyPx;   //!
   TBranch        *b_mumuonlyPy;   //!
   TBranch        *b_mumuonlyPz;   //!
   TBranch        *b_mumuonlymu1Idx;   //!
   TBranch        *b_mumuonlymu2Idx;   //!
   TBranch        *b_mumuonlyctau;   //!
   TBranch        *b_mumuonlyctauerr;   //!
   TBranch        *b_mumuonlymuoverlapped;   //!
   TBranch        *b_mumuonlyChg;   //!
   TBranch        *b_mumuonlynsharedSeg;   //!
   TBranch        *b_mymass1234JJ;   //!
   TBranch        *b_mymass1234YY;   //!
   TBranch        *b_mymass1234psi2spsi2s;   //!
   TBranch        *b_mymass1234psi2sJ;   //!
   TBranch        *b_mymass1234YJ;   //!
   TBranch        *b_mymass1234Ypsi2s;   //!
   TBranch        *b_mymass1234Y12mumu;   //!
   TBranch        *b_mymass1234Y34mumu;   //!
   TBranch        *b_mymass1234J12mumu;   //!
   TBranch        *b_mymass1234J34mumu;   //!
   TBranch        *b_mymass1324JJ;   //!
   TBranch        *b_mymass1324YY;   //!
   TBranch        *b_mymass1324psi2spsi2s;   //!
   TBranch        *b_mymass1324psi2sJ;   //!
   TBranch        *b_mymass1324YJ;   //!
   TBranch        *b_mymass1324Ypsi2s;   //!
   TBranch        *b_mymass1324Y13mumu;   //!
   TBranch        *b_mymass1324Y24mumu;   //!
   TBranch        *b_mymass1324J13mumu;   //!
   TBranch        *b_mymass1324J24mumu;   //!
   TBranch        *b_mymass1423JJ;   //!
   TBranch        *b_mymass1423YY;   //!
   TBranch        *b_mymass1423psi2spsi2s;   //!
   TBranch        *b_mymass1423psi2sJ;   //!
   TBranch        *b_mymass1423YJ;   //!
   TBranch        *b_mymass1423Ypsi2s;   //!
   TBranch        *b_mymass1423Y14mumu;   //!
   TBranch        *b_mymass1423Y23mumu;   //!
   TBranch        *b_mymass1423J14mumu;   //!
   TBranch        *b_mymass1423J23mumu;   //!
   TBranch        *b_myX1JJChiProb;   //!
   TBranch        *b_myX2JJChiProb;   //!
   TBranch        *b_myX1YYChiProb;   //!
   TBranch        *b_myX2YYChiProb;   //!
   TBranch        *b_myX1psi2spsi2sChiProb;   //!
   TBranch        *b_myX2psi2spsi2sChiProb;   //!
   TBranch        *b_myX1psi2sJChiProb;   //!
   TBranch        *b_myX2psi2sJChiProb;   //!
   TBranch        *b_myX1YJChiProb;   //!
   TBranch        *b_myX2YJChiProb;   //!
   TBranch        *b_myX1Ypsi2sChiProb;   //!
   TBranch        *b_myX2Ypsi2sChiProb;   //!
   TBranch        *b_myX1Y12mumuChiProb;   //!
   TBranch        *b_myX2Y12mumuChiProb;   //!
   TBranch        *b_myX1Y34mumuChiProb;   //!
   TBranch        *b_myX2Y34mumuChiProb;   //!
   TBranch        *b_myX1J12mumuChiProb;   //!
   TBranch        *b_myX2J12mumuChiProb;   //!
   TBranch        *b_myX1J34mumuChiProb;   //!
   TBranch        *b_myX2J34mumuChiProb;   //!
   TBranch        *b_myX3JJChiProb;   //!
   TBranch        *b_myX4JJChiProb;   //!
   TBranch        *b_myX3YYChiProb;   //!
   TBranch        *b_myX4YYChiProb;   //!
   TBranch        *b_myX3psi2spsi2sChiProb;   //!
   TBranch        *b_myX4psi2spsi2sChiProb;   //!
   TBranch        *b_myX3psi2sJChiProb;   //!
   TBranch        *b_myX4psi2sJChiProb;   //!
   TBranch        *b_myX3YJChiProb;   //!
   TBranch        *b_myX4YJChiProb;   //!
   TBranch        *b_myX3Ypsi2sChiProb;   //!
   TBranch        *b_myX4Ypsi2sChiProb;   //!
   TBranch        *b_myX3Y13mumuChiProb;   //!
   TBranch        *b_myX4Y13mumuChiProb;   //!
   TBranch        *b_myX3Y24mumuChiProb;   //!
   TBranch        *b_myX4Y24mumuChiProb;   //!
   TBranch        *b_myX3J13mumuChiProb;   //!
   TBranch        *b_myX4J13mumuChiProb;   //!
   TBranch        *b_myX3J24mumuChiProb;   //!
   TBranch        *b_myX4J24mumuChiProb;   //!
   TBranch        *b_myX5JJChiProb;   //!
   TBranch        *b_myX6JJChiProb;   //!
   TBranch        *b_myX5YYChiProb;   //!
   TBranch        *b_myX6YYChiProb;   //!
   TBranch        *b_myX5psi2spsi2sChiProb;   //!
   TBranch        *b_myX6psi2spsi2sChiProb;   //!
   TBranch        *b_myX5psi2sJChiProb;   //!
   TBranch        *b_myX6psi2sJChiProb;   //!
   TBranch        *b_myX5YJChiProb;   //!
   TBranch        *b_myX6YJChiProb;   //!
   TBranch        *b_myX5Ypsi2sChiProb;   //!
   TBranch        *b_myX6Ypsi2sChiProb;   //!
   TBranch        *b_myX5Y14mumuChiProb;   //!
   TBranch        *b_myX6Y14mumuChiProb;   //!
   TBranch        *b_myX5Y23mumuChiProb;   //!
   TBranch        *b_myX6Y23mumuChiProb;   //!
   TBranch        *b_myX5J14mumuChiProb;   //!
   TBranch        *b_myX6J14mumuChiProb;   //!
   TBranch        *b_myX5J23mumuChiProb;   //!
   TBranch        *b_myX6J23mumuChiProb;   //!
   TBranch        *b_my4muVtxCL1234JJ;   //!
   TBranch        *b_myX1Px1234JJ;   //!
   TBranch        *b_myX1Py1234JJ;   //!
   TBranch        *b_myX1Pz1234JJ;   //!
   TBranch        *b_myX1M1234JJ;   //!
   TBranch        *b_myX2Px1234JJ;   //!
   TBranch        *b_myX2Py1234JJ;   //!
   TBranch        *b_myX2Pz1234JJ;   //!
   TBranch        *b_myX2M1234JJ;   //!
   TBranch        *b_my4muVtxCL1324JJ;   //!
   TBranch        *b_myX3Px1324JJ;   //!
   TBranch        *b_myX3Py1324JJ;   //!
   TBranch        *b_myX3Pz1324JJ;   //!
   TBranch        *b_myX3M1324JJ;   //!
   TBranch        *b_myX4Px1324JJ;   //!
   TBranch        *b_myX4Py1324JJ;   //!
   TBranch        *b_myX4Pz1324JJ;   //!
   TBranch        *b_myX4M1324JJ;   //!
   TBranch        *b_my4muVtxCL1423JJ;   //!
   TBranch        *b_myX5Px1423JJ;   //!
   TBranch        *b_myX5Py1423JJ;   //!
   TBranch        *b_myX5Pz1423JJ;   //!
   TBranch        *b_myX5M1423JJ;   //!
   TBranch        *b_myX6Px1423JJ;   //!
   TBranch        *b_myX6Py1423JJ;   //!
   TBranch        *b_myX6Pz1423JJ;   //!
   TBranch        *b_myX6M1423JJ;   //!
   TBranch        *b_my4muVtxCL1234YY;   //!
   TBranch        *b_myX1Px1234YY;   //!
   TBranch        *b_myX1Py1234YY;   //!
   TBranch        *b_myX1Pz1234YY;   //!
   TBranch        *b_myX1M1234YY;   //!
   TBranch        *b_myX2Px1234YY;   //!
   TBranch        *b_myX2Py1234YY;   //!
   TBranch        *b_myX2Pz1234YY;   //!
   TBranch        *b_myX2M1234YY;   //!
   TBranch        *b_my4muVtxCL1324YY;   //!
   TBranch        *b_myX3Px1324YY;   //!
   TBranch        *b_myX3Py1324YY;   //!
   TBranch        *b_myX3Pz1324YY;   //!
   TBranch        *b_myX3M1324YY;   //!
   TBranch        *b_myX4Px1324YY;   //!
   TBranch        *b_myX4Py1324YY;   //!
   TBranch        *b_myX4Pz1324YY;   //!
   TBranch        *b_myX4M1324YY;   //!
   TBranch        *b_my4muVtxCL1423YY;   //!
   TBranch        *b_myX5Px1423YY;   //!
   TBranch        *b_myX5Py1423YY;   //!
   TBranch        *b_myX5Pz1423YY;   //!
   TBranch        *b_myX5M1423YY;   //!
   TBranch        *b_myX6Px1423YY;   //!
   TBranch        *b_myX6Py1423YY;   //!
   TBranch        *b_myX6Pz1423YY;   //!
   TBranch        *b_myX6M1423YY;   //!
   TBranch        *b_my4muVtxCL1234psi2spsi2s;   //!
   TBranch        *b_myX1Px1234psi2spsi2s;   //!
   TBranch        *b_myX1Py1234psi2spsi2s;   //!
   TBranch        *b_myX1Pz1234psi2spsi2s;   //!
   TBranch        *b_myX1M1234psi2spsi2s;   //!
   TBranch        *b_myX2Px1234psi2spsi2s;   //!
   TBranch        *b_myX2Py1234psi2spsi2s;   //!
   TBranch        *b_myX2Pz1234psi2spsi2s;   //!
   TBranch        *b_myX2M1234psi2spsi2s;   //!
   TBranch        *b_my4muVtxCL1324psi2spsi2s;   //!
   TBranch        *b_myX3Px1324psi2spsi2s;   //!
   TBranch        *b_myX3Py1324psi2spsi2s;   //!
   TBranch        *b_myX3Pz1324psi2spsi2s;   //!
   TBranch        *b_myX3M1324psi2spsi2s;   //!
   TBranch        *b_myX4Px1324psi2spsi2s;   //!
   TBranch        *b_myX4Py1324psi2spsi2s;   //!
   TBranch        *b_myX4Pz1324psi2spsi2s;   //!
   TBranch        *b_myX4M1324psi2spsi2s;   //!
   TBranch        *b_my4muVtxCL1423psi2spsi2s;   //!
   TBranch        *b_myX5Px1423psi2spsi2s;   //!
   TBranch        *b_myX5Py1423psi2spsi2s;   //!
   TBranch        *b_myX5Pz1423psi2spsi2s;   //!
   TBranch        *b_myX5M1423psi2spsi2s;   //!
   TBranch        *b_myX6Px1423psi2spsi2s;   //!
   TBranch        *b_myX6Py1423psi2spsi2s;   //!
   TBranch        *b_myX6Pz1423psi2spsi2s;   //!
   TBranch        *b_myX6M1423psi2spsi2s;   //!
   TBranch        *b_my4muVtxCL1234psi2sJ;   //!
   TBranch        *b_myX1Px1234psi2sJ;   //!
   TBranch        *b_myX1Py1234psi2sJ;   //!
   TBranch        *b_myX1Pz1234psi2sJ;   //!
   TBranch        *b_myX1M1234psi2sJ;   //!
   TBranch        *b_myX2Px1234psi2sJ;   //!
   TBranch        *b_myX2Py1234psi2sJ;   //!
   TBranch        *b_myX2Pz1234psi2sJ;   //!
   TBranch        *b_myX2M1234psi2sJ;   //!
   TBranch        *b_my4muVtxCL1324psi2sJ;   //!
   TBranch        *b_myX3Px1324psi2sJ;   //!
   TBranch        *b_myX3Py1324psi2sJ;   //!
   TBranch        *b_myX3Pz1324psi2sJ;   //!
   TBranch        *b_myX3M1324psi2sJ;   //!
   TBranch        *b_myX4Px1324psi2sJ;   //!
   TBranch        *b_myX4Py1324psi2sJ;   //!
   TBranch        *b_myX4Pz1324psi2sJ;   //!
   TBranch        *b_myX4M1324psi2sJ;   //!
   TBranch        *b_my4muVtxCL1423psi2sJ;   //!
   TBranch        *b_myX5Px1423psi2sJ;   //!
   TBranch        *b_myX5Py1423psi2sJ;   //!
   TBranch        *b_myX5Pz1423psi2sJ;   //!
   TBranch        *b_myX5M1423psi2sJ;   //!
   TBranch        *b_myX6Px1423psi2sJ;   //!
   TBranch        *b_myX6Py1423psi2sJ;   //!
   TBranch        *b_myX6Pz1423psi2sJ;   //!
   TBranch        *b_myX6M1423psi2sJ;   //!
   TBranch        *b_my4muVtxCL1234YJ;   //!
   TBranch        *b_myX1Px1234YJ;   //!
   TBranch        *b_myX1Py1234YJ;   //!
   TBranch        *b_myX1Pz1234YJ;   //!
   TBranch        *b_myX1M1234YJ;   //!
   TBranch        *b_myX2Px1234YJ;   //!
   TBranch        *b_myX2Py1234YJ;   //!
   TBranch        *b_myX2Pz1234YJ;   //!
   TBranch        *b_myX2M1234YJ;   //!
   TBranch        *b_my4muVtxCL1324YJ;   //!
   TBranch        *b_myX3Px1324YJ;   //!
   TBranch        *b_myX3Py1324YJ;   //!
   TBranch        *b_myX3Pz1324YJ;   //!
   TBranch        *b_myX3M1324YJ;   //!
   TBranch        *b_myX4Px1324YJ;   //!
   TBranch        *b_myX4Py1324YJ;   //!
   TBranch        *b_myX4Pz1324YJ;   //!
   TBranch        *b_myX4M1324YJ;   //!
   TBranch        *b_my4muVtxCL1423YJ;   //!
   TBranch        *b_myX5Px1423YJ;   //!
   TBranch        *b_myX5Py1423YJ;   //!
   TBranch        *b_myX5Pz1423YJ;   //!
   TBranch        *b_myX5M1423YJ;   //!
   TBranch        *b_myX6Px1423YJ;   //!
   TBranch        *b_myX6Py1423YJ;   //!
   TBranch        *b_myX6Pz1423YJ;   //!
   TBranch        *b_myX6M1423YJ;   //!
   TBranch        *b_my4muVtxCL1234Ypsi2s;   //!
   TBranch        *b_myX1Px1234Ypsi2s;   //!
   TBranch        *b_myX1Py1234Ypsi2s;   //!
   TBranch        *b_myX1Pz1234Ypsi2s;   //!
   TBranch        *b_myX1M1234Ypsi2s;   //!
   TBranch        *b_myX2Px1234Ypsi2s;   //!
   TBranch        *b_myX2Py1234Ypsi2s;   //!
   TBranch        *b_myX2Pz1234Ypsi2s;   //!
   TBranch        *b_myX2M1234Ypsi2s;   //!
   TBranch        *b_my4muVtxCL1324Ypsi2s;   //!
   TBranch        *b_myX3Px1324Ypsi2s;   //!
   TBranch        *b_myX3Py1324Ypsi2s;   //!
   TBranch        *b_myX3Pz1324Ypsi2s;   //!
   TBranch        *b_myX3M1324Ypsi2s;   //!
   TBranch        *b_myX4Px1324Ypsi2s;   //!
   TBranch        *b_myX4Py1324Ypsi2s;   //!
   TBranch        *b_myX4Pz1324Ypsi2s;   //!
   TBranch        *b_myX4M1324Ypsi2s;   //!
   TBranch        *b_my4muVtxCL1423Ypsi2s;   //!
   TBranch        *b_myX5Px1423Ypsi2s;   //!
   TBranch        *b_myX5Py1423Ypsi2s;   //!
   TBranch        *b_myX5Pz1423Ypsi2s;   //!
   TBranch        *b_myX5M1423Ypsi2s;   //!
   TBranch        *b_myX6Px1423Ypsi2s;   //!
   TBranch        *b_myX6Py1423Ypsi2s;   //!
   TBranch        *b_myX6Pz1423Ypsi2s;   //!
   TBranch        *b_myX6M1423Ypsi2s;   //!
   TBranch        *b_my4muVtxCL1234Y12mumu;   //!
   TBranch        *b_myX1Px1234Y12mumu;   //!
   TBranch        *b_myX1Py1234Y12mumu;   //!
   TBranch        *b_myX1Pz1234Y12mumu;   //!
   TBranch        *b_myX1M1234Y12mumu;   //!
   TBranch        *b_myX2Px1234Y12mumu;   //!
   TBranch        *b_myX2Py1234Y12mumu;   //!
   TBranch        *b_myX2Pz1234Y12mumu;   //!
   TBranch        *b_myX2M1234Y12mumu;   //!
   TBranch        *b_my4muVtxCL1324Y13mumu;   //!
   TBranch        *b_myX3Px1324Y13mumu;   //!
   TBranch        *b_myX3Py1324Y13mumu;   //!
   TBranch        *b_myX3Pz1324Y13mumu;   //!
   TBranch        *b_myX3M1324Y13mumu;   //!
   TBranch        *b_myX4Px1324Y13mumu;   //!
   TBranch        *b_myX4Py1324Y13mumu;   //!
   TBranch        *b_myX4Pz1324Y13mumu;   //!
   TBranch        *b_myX4M1324Y13mumu;   //!
   TBranch        *b_my4muVtxCL1423Y14mumu;   //!
   TBranch        *b_myX5Px1423Y14mumu;   //!
   TBranch        *b_myX5Py1423Y14mumu;   //!
   TBranch        *b_myX5Pz1423Y14mumu;   //!
   TBranch        *b_myX5M1423Y14mumu;   //!
   TBranch        *b_myX6Px1423Y14mumu;   //!
   TBranch        *b_myX6Py1423Y14mumu;   //!
   TBranch        *b_myX6Pz1423Y14mumu;   //!
   TBranch        *b_myX6M1423Y14mumu;   //!
   TBranch        *b_my4muVtxCL1234Y34mumu;   //!
   TBranch        *b_myX1Px1234Y34mumu;   //!
   TBranch        *b_myX1Py1234Y34mumu;   //!
   TBranch        *b_myX1Pz1234Y34mumu;   //!
   TBranch        *b_myX1M1234Y34mumu;   //!
   TBranch        *b_myX2Px1234Y34mumu;   //!
   TBranch        *b_myX2Py1234Y34mumu;   //!
   TBranch        *b_myX2Pz1234Y34mumu;   //!
   TBranch        *b_myX2M1234Y34mumu;   //!
   TBranch        *b_my4muVtxCL1324Y24mumu;   //!
   TBranch        *b_myX3Px1324Y24mumu;   //!
   TBranch        *b_myX3Py1324Y24mumu;   //!
   TBranch        *b_myX3Pz1324Y24mumu;   //!
   TBranch        *b_myX3M1324Y24mumu;   //!
   TBranch        *b_myX4Px1324Y24mumu;   //!
   TBranch        *b_myX4Py1324Y24mumu;   //!
   TBranch        *b_myX4Pz1324Y24mumu;   //!
   TBranch        *b_myX4M1324Y24mumu;   //!
   TBranch        *b_my4muVtxCL1423Y23mumu;   //!
   TBranch        *b_myX5Px1423Y23mumu;   //!
   TBranch        *b_myX5Py1423Y23mumu;   //!
   TBranch        *b_myX5Pz1423Y23mumu;   //!
   TBranch        *b_myX5M1423Y23mumu;   //!
   TBranch        *b_myX6Px1423Y23mumu;   //!
   TBranch        *b_myX6Py1423Y23mumu;   //!
   TBranch        *b_myX6Pz1423Y23mumu;   //!
   TBranch        *b_myX6M1423Y23mumu;   //!
   TBranch        *b_my4muVtxCL1234J12mumu;   //!
   TBranch        *b_myX1Px1234J12mumu;   //!
   TBranch        *b_myX1Py1234J12mumu;   //!
   TBranch        *b_myX1Pz1234J12mumu;   //!
   TBranch        *b_myX1M1234J12mumu;   //!
   TBranch        *b_myX2Px1234J12mumu;   //!
   TBranch        *b_myX2Py1234J12mumu;   //!
   TBranch        *b_myX2Pz1234J12mumu;   //!
   TBranch        *b_myX2M1234J12mumu;   //!
   TBranch        *b_my4muVtxCL1324J13mumu;   //!
   TBranch        *b_myX3Px1324J13mumu;   //!
   TBranch        *b_myX3Py1324J13mumu;   //!
   TBranch        *b_myX3Pz1324J13mumu;   //!
   TBranch        *b_myX3M1324J13mumu;   //!
   TBranch        *b_myX4Px1324J13mumu;   //!
   TBranch        *b_myX4Py1324J13mumu;   //!
   TBranch        *b_myX4Pz1324J13mumu;   //!
   TBranch        *b_myX4M1324J13mumu;   //!
   TBranch        *b_my4muVtxCL1423J14mumu;   //!
   TBranch        *b_myX5Px1423J14mumu;   //!
   TBranch        *b_myX5Py1423J14mumu;   //!
   TBranch        *b_myX5Pz1423J14mumu;   //!
   TBranch        *b_myX5M1423J14mumu;   //!
   TBranch        *b_myX6Px1423J14mumu;   //!
   TBranch        *b_myX6Py1423J14mumu;   //!
   TBranch        *b_myX6Pz1423J14mumu;   //!
   TBranch        *b_myX6M1423J14mumu;   //!
   TBranch        *b_my4muVtxCL1234J34mumu;   //!
   TBranch        *b_myX1Px1234J34mumu;   //!
   TBranch        *b_myX1Py1234J34mumu;   //!
   TBranch        *b_myX1Pz1234J34mumu;   //!
   TBranch        *b_myX1M1234J34mumu;   //!
   TBranch        *b_myX2Px1234J34mumu;   //!
   TBranch        *b_myX2Py1234J34mumu;   //!
   TBranch        *b_myX2Pz1234J34mumu;   //!
   TBranch        *b_myX2M1234J34mumu;   //!
   TBranch        *b_my4muVtxCL1324J24mumu;   //!
   TBranch        *b_myX3Px1324J24mumu;   //!
   TBranch        *b_myX3Py1324J24mumu;   //!
   TBranch        *b_myX3Pz1324J24mumu;   //!
   TBranch        *b_myX3M1324J24mumu;   //!
   TBranch        *b_myX4Px1324J24mumu;   //!
   TBranch        *b_myX4Py1324J24mumu;   //!
   TBranch        *b_myX4Pz1324J24mumu;   //!
   TBranch        *b_myX4M1324J24mumu;   //!
   TBranch        *b_my4muVtxCL1423J23mumu;   //!
   TBranch        *b_myX5Px1423J23mumu;   //!
   TBranch        *b_myX5Py1423J23mumu;   //!
   TBranch        *b_myX5Pz1423J23mumu;   //!
   TBranch        *b_myX5M1423J23mumu;   //!
   TBranch        *b_myX6Px1423J23mumu;   //!
   TBranch        *b_myX6Py1423J23mumu;   //!
   TBranch        *b_myX6Pz1423J23mumu;   //!
   TBranch        *b_myX6M1423J23mumu;   //!

   myntuple(TTree *tree=0);
   virtual ~myntuple();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString outputname);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef myntuple_cxx
myntuple::myntuple(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mymultilep_1011.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("mymultilep_1011.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("mymultilep_1011.root:/mkcands");
      dir->GetObject("X_data",tree);

   }
   Init(tree);
}

myntuple::~myntuple()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t myntuple::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t myntuple::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void myntuple::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   TrigRes = 0;
   TrigNames = 0;
   MatchTriggerNames = 0;
   L1TrigRes = 0;
   PriVtxXCorrX = 0;
   PriVtxXCorrY = 0;
   PriVtxXCorrZ = 0;
   PriVtxXCorrEX = 0;
   PriVtxXCorrEY = 0;
   PriVtxXCorrEZ = 0;
   PriVtxXCorrC2 = 0;
   PriVtxXCorrCL = 0;
   muPx = 0;
   muPy = 0;
   muPz = 0;
   muD0 = 0;
   muD0E = 0;
   muDz = 0;
   muChi2 = 0;
   muGlChi2 = 0;
   mufHits = 0;
   muFirstBarrel = 0;
   muFirstEndCap = 0;
   muDzVtx = 0;
   muDxyVtx = 0;
   muNDF = 0;
   muGlNDF = 0;
   muPhits = 0;
   muShits = 0;
   muGlMuHits = 0;
   muType = 0;
   muQual = 0;
   muTrack = 0;
   muCharge = 0;
   muIsoratio = 0;
   munMatchedSeg = 0;
   muIsGoodSoftMuonNewIlseMod = 0;
   muIsGoodSoftMuonNewIlse = 0;
   muIsGoodLooseMuonNew = 0;
   muIsGoodLooseMuon = 0;
   muIsGoodTightMuon = 0;
   muIsPatLooseMuon = 0;
   muIsPatTightMuon = 0;
   muIsPatSoftMuon = 0;
   muIsPatMediumMuon = 0;
   muIsJpsiTrigMatch = 0;
   muIsUpsTrigMatch = 0;
   muMVAMuonID = 0;
   musegmentCompatibility = 0;
   mupulldXdZ_pos_noArb = 0;
   mupulldYdZ_pos_noArb = 0;
   mupulldXdZ_pos_ArbDef = 0;
   mupulldYdZ_pos_ArbDef = 0;
   mupulldXdZ_pos_ArbST = 0;
   mupulldYdZ_pos_ArbST = 0;
   mupulldXdZ_pos_noArb_any = 0;
   mupulldYdZ_pos_noArb_any = 0;
   muUpsVrtxMatch = 0;
   muL3TriggerMatch = 0;
   MyFourMuonTrigMatch = 0;
   MyFourMuonChg = 0;
   MyFourMuonMass = 0;
   MyFourMuonMassErr = 0;
   MyFourMuonCTau = 0;
   MyFourMuonCTauErr = 0;
   MyHitBeforeVrtx = 0;
   MyMissAfterVrtx = 0;
   My1234Mass = 0;
   My1324Mass = 0;
   My1423Mass = 0;
   My1234JpsiDisXY = 0;
   My1324JpsiDisXY = 0;
   My1423JpsiDisXY = 0;
   My1234JpsiDisZ = 0;
   My1324JpsiDisZ = 0;
   My1423JpsiDisZ = 0;
   MyJpsi1CTau_Mu12 = 0;
   MyJpsi1CTauErr_Mu12 = 0;
   MyJpsi1ChiProb_Mu12 = 0;
   MyJpsi1HitsBeforeMu12 = 0;
   MyJpsi1MissAfterMu12 = 0;
   MyJpsi2CTau_Mu34 = 0;
   MyJpsi2CTauErr_Mu34 = 0;
   MyJpsi2ChiProb_Mu34 = 0;
   MyJpsi2HitsBeforeMu34 = 0;
   MyJpsi2MissAfterMu34 = 0;
   MyJpsi3CTau_Mu13 = 0;
   MyJpsi3CTauErr_Mu13 = 0;
   MyJpsi3ChiProb_Mu13 = 0;
   MyJpsi3HitsBeforeMu13 = 0;
   MyJpsi3MissAfterMu13 = 0;
   MyJpsi4CTau_Mu24 = 0;
   MyJpsi4CTauErr_Mu24 = 0;
   MyJpsi4ChiProb_Mu24 = 0;
   MyJpsi4HitsBeforeMu24 = 0;
   MyJpsi4MissAfterMu24 = 0;
   MyJpsi5CTau_Mu14 = 0;
   MyJpsi5CTauErr_Mu14 = 0;
   MyJpsi5ChiProb_Mu14 = 0;
   MyJpsi5HitsBeforeMu14 = 0;
   MyJpsi5MissAfterMu14 = 0;
   MyJpsi6CTau_Mu23 = 0;
   MyJpsi6CTauErr_Mu23 = 0;
   MyJpsi6ChiProb_Mu23 = 0;
   MyJpsi6HitsBeforeMu23 = 0;
   MyJpsi6MissAfterMu23 = 0;
   MyJpsi1Mass_Mu12 = 0;
   MyJpsi1MassErr_Mu12 = 0;
   MyJpsi2Mass_Mu34 = 0;
   MyJpsi2MassErr_Mu34 = 0;
   MyJpsi3Mass_Mu13 = 0;
   MyJpsi3MassErr_Mu13 = 0;
   MyJpsi4Mass_Mu24 = 0;
   MyJpsi4MassErr_Mu24 = 0;
   MyJpsi5Mass_Mu14 = 0;
   MyJpsi5MassErr_Mu14 = 0;
   MyJpsi6Mass_Mu23 = 0;
   MyJpsi6MassErr_Mu23 = 0;
   MyFourMuonOverlap12 = 0;
   MyFourMuonOverlap13 = 0;
   MyFourMuonOverlap14 = 0;
   MyFourMuonOverlap23 = 0;
   MyFourMuonOverlap24 = 0;
   MyFourMuonOverlap34 = 0;
   MyFourMuonSharedSeg12 = 0;
   MyFourMuonSharedSeg13 = 0;
   MyFourMuonSharedSeg14 = 0;
   MyFourMuonSharedSeg23 = 0;
   MyFourMuonSharedSeg24 = 0;
   MyFourMuonSharedSeg34 = 0;
   MyFourMuonVtxCL = 0;
   MyFourMuonVtxC2 = 0;
   MyFourMuonPx = 0;
   MyFourMuonPy = 0;
   MyFourMuonPz = 0;
   MyFourMuonDecayVtxX = 0;
   MyFourMuonDecayVtxY = 0;
   MyFourMuonDecayVtxZ = 0;
   MyFourMuonDecayVtxXE = 0;
   MyFourMuonDecayVtxYE = 0;
   MyFourMuonDecayVtxZE = 0;
   MyFourMuonMu1Idx = 0;
   MyFourMuonMu2Idx = 0;
   MyFourMuonMu2Px = 0;
   MyFourMuonMu2Py = 0;
   MyFourMuonMu2Pz = 0;
   MyFourMuonMu1Px = 0;
   MyFourMuonMu1Py = 0;
   MyFourMuonMu1Pz = 0;
   MyFourMuonMu2fChi2 = 0;
   MyFourMuonMu2fNDF = 0;
   MyFourMuonMu1fChi2 = 0;
   MyFourMuonMu1fNDF = 0;
   MyFourMuoncosAlpha = 0;
   MyFourMuonFLSig = 0;
   MyFourMuonrVtxMag2D = 0;
   MyFourMuonsigmaRvtxMag2D = 0;
   MyFourMuonTrkIsoOverFourMuSumpt = 0;
   MyFourMuonTrkIsoOverFourMuVectpt = 0;
   MyFourMuonMu3fNDF = 0;
   MyFourMuonMu3Idx = 0;
   MyFourMuonMu3Px = 0;
   MyFourMuonMu3Py = 0;
   MyFourMuonMu3Pz = 0;
   MyFourMuonMu3fChi2 = 0;
   MyFourMuonMu4fNDF = 0;
   MyFourMuonMu4Idx = 0;
   MyFourMuonMu4Px = 0;
   MyFourMuonMu4Py = 0;
   MyFourMuonMu4Pz = 0;
   MyFourMuonMu4fChi2 = 0;
   mumuonlyMass = 0;
   mumuonlyMassErr = 0;
   mumuonlyVtxCL = 0;
   mumuonlyPx = 0;
   mumuonlyPy = 0;
   mumuonlyPz = 0;
   mumuonlymu1Idx = 0;
   mumuonlymu2Idx = 0;
   mumuonlyctau = 0;
   mumuonlyctauerr = 0;
   mumuonlymuoverlapped = 0;
   mumuonlyChg = 0;
   mumuonlynsharedSeg = 0;
   mymass1234JJ = 0;
   mymass1234YY = 0;
   mymass1234psi2spsi2s = 0;
   mymass1234psi2sJ = 0;
   mymass1234YJ = 0;
   mymass1234Ypsi2s = 0;
   mymass1234Y12mumu = 0;
   mymass1234Y34mumu = 0;
   mymass1234J12mumu = 0;
   mymass1234J34mumu = 0;
   mymass1324JJ = 0;
   mymass1324YY = 0;
   mymass1324psi2spsi2s = 0;
   mymass1324psi2sJ = 0;
   mymass1324YJ = 0;
   mymass1324Ypsi2s = 0;
   mymass1324Y13mumu = 0;
   mymass1324Y24mumu = 0;
   mymass1324J13mumu = 0;
   mymass1324J24mumu = 0;
   mymass1423JJ = 0;
   mymass1423YY = 0;
   mymass1423psi2spsi2s = 0;
   mymass1423psi2sJ = 0;
   mymass1423YJ = 0;
   mymass1423Ypsi2s = 0;
   mymass1423Y14mumu = 0;
   mymass1423Y23mumu = 0;
   mymass1423J14mumu = 0;
   mymass1423J23mumu = 0;
   myX1JJChiProb = 0;
   myX2JJChiProb = 0;
   myX1YYChiProb = 0;
   myX2YYChiProb = 0;
   myX1psi2spsi2sChiProb = 0;
   myX2psi2spsi2sChiProb = 0;
   myX1psi2sJChiProb = 0;
   myX2psi2sJChiProb = 0;
   myX1YJChiProb = 0;
   myX2YJChiProb = 0;
   myX1Ypsi2sChiProb = 0;
   myX2Ypsi2sChiProb = 0;
   myX1Y12mumuChiProb = 0;
   myX2Y12mumuChiProb = 0;
   myX1Y34mumuChiProb = 0;
   myX2Y34mumuChiProb = 0;
   myX1J12mumuChiProb = 0;
   myX2J12mumuChiProb = 0;
   myX1J34mumuChiProb = 0;
   myX2J34mumuChiProb = 0;
   myX3JJChiProb = 0;
   myX4JJChiProb = 0;
   myX3YYChiProb = 0;
   myX4YYChiProb = 0;
   myX3psi2spsi2sChiProb = 0;
   myX4psi2spsi2sChiProb = 0;
   myX3psi2sJChiProb = 0;
   myX4psi2sJChiProb = 0;
   myX3YJChiProb = 0;
   myX4YJChiProb = 0;
   myX3Ypsi2sChiProb = 0;
   myX4Ypsi2sChiProb = 0;
   myX3Y13mumuChiProb = 0;
   myX4Y13mumuChiProb = 0;
   myX3Y24mumuChiProb = 0;
   myX4Y24mumuChiProb = 0;
   myX3J13mumuChiProb = 0;
   myX4J13mumuChiProb = 0;
   myX3J24mumuChiProb = 0;
   myX4J24mumuChiProb = 0;
   myX5JJChiProb = 0;
   myX6JJChiProb = 0;
   myX5YYChiProb = 0;
   myX6YYChiProb = 0;
   myX5psi2spsi2sChiProb = 0;
   myX6psi2spsi2sChiProb = 0;
   myX5psi2sJChiProb = 0;
   myX6psi2sJChiProb = 0;
   myX5YJChiProb = 0;
   myX6YJChiProb = 0;
   myX5Ypsi2sChiProb = 0;
   myX6Ypsi2sChiProb = 0;
   myX5Y14mumuChiProb = 0;
   myX6Y14mumuChiProb = 0;
   myX5Y23mumuChiProb = 0;
   myX6Y23mumuChiProb = 0;
   myX5J14mumuChiProb = 0;
   myX6J14mumuChiProb = 0;
   myX5J23mumuChiProb = 0;
   myX6J23mumuChiProb = 0;
   my4muVtxCL1234JJ = 0;
   myX1Px1234JJ = 0;
   myX1Py1234JJ = 0;
   myX1Pz1234JJ = 0;
   myX1M1234JJ = 0;
   myX2Px1234JJ = 0;
   myX2Py1234JJ = 0;
   myX2Pz1234JJ = 0;
   myX2M1234JJ = 0;
   my4muVtxCL1324JJ = 0;
   myX3Px1324JJ = 0;
   myX3Py1324JJ = 0;
   myX3Pz1324JJ = 0;
   myX3M1324JJ = 0;
   myX4Px1324JJ = 0;
   myX4Py1324JJ = 0;
   myX4Pz1324JJ = 0;
   myX4M1324JJ = 0;
   my4muVtxCL1423JJ = 0;
   myX5Px1423JJ = 0;
   myX5Py1423JJ = 0;
   myX5Pz1423JJ = 0;
   myX5M1423JJ = 0;
   myX6Px1423JJ = 0;
   myX6Py1423JJ = 0;
   myX6Pz1423JJ = 0;
   myX6M1423JJ = 0;
   my4muVtxCL1234YY = 0;
   myX1Px1234YY = 0;
   myX1Py1234YY = 0;
   myX1Pz1234YY = 0;
   myX1M1234YY = 0;
   myX2Px1234YY = 0;
   myX2Py1234YY = 0;
   myX2Pz1234YY = 0;
   myX2M1234YY = 0;
   my4muVtxCL1324YY = 0;
   myX3Px1324YY = 0;
   myX3Py1324YY = 0;
   myX3Pz1324YY = 0;
   myX3M1324YY = 0;
   myX4Px1324YY = 0;
   myX4Py1324YY = 0;
   myX4Pz1324YY = 0;
   myX4M1324YY = 0;
   my4muVtxCL1423YY = 0;
   myX5Px1423YY = 0;
   myX5Py1423YY = 0;
   myX5Pz1423YY = 0;
   myX5M1423YY = 0;
   myX6Px1423YY = 0;
   myX6Py1423YY = 0;
   myX6Pz1423YY = 0;
   myX6M1423YY = 0;
   my4muVtxCL1234psi2spsi2s = 0;
   myX1Px1234psi2spsi2s = 0;
   myX1Py1234psi2spsi2s = 0;
   myX1Pz1234psi2spsi2s = 0;
   myX1M1234psi2spsi2s = 0;
   myX2Px1234psi2spsi2s = 0;
   myX2Py1234psi2spsi2s = 0;
   myX2Pz1234psi2spsi2s = 0;
   myX2M1234psi2spsi2s = 0;
   my4muVtxCL1324psi2spsi2s = 0;
   myX3Px1324psi2spsi2s = 0;
   myX3Py1324psi2spsi2s = 0;
   myX3Pz1324psi2spsi2s = 0;
   myX3M1324psi2spsi2s = 0;
   myX4Px1324psi2spsi2s = 0;
   myX4Py1324psi2spsi2s = 0;
   myX4Pz1324psi2spsi2s = 0;
   myX4M1324psi2spsi2s = 0;
   my4muVtxCL1423psi2spsi2s = 0;
   myX5Px1423psi2spsi2s = 0;
   myX5Py1423psi2spsi2s = 0;
   myX5Pz1423psi2spsi2s = 0;
   myX5M1423psi2spsi2s = 0;
   myX6Px1423psi2spsi2s = 0;
   myX6Py1423psi2spsi2s = 0;
   myX6Pz1423psi2spsi2s = 0;
   myX6M1423psi2spsi2s = 0;
   my4muVtxCL1234psi2sJ = 0;
   myX1Px1234psi2sJ = 0;
   myX1Py1234psi2sJ = 0;
   myX1Pz1234psi2sJ = 0;
   myX1M1234psi2sJ = 0;
   myX2Px1234psi2sJ = 0;
   myX2Py1234psi2sJ = 0;
   myX2Pz1234psi2sJ = 0;
   myX2M1234psi2sJ = 0;
   my4muVtxCL1324psi2sJ = 0;
   myX3Px1324psi2sJ = 0;
   myX3Py1324psi2sJ = 0;
   myX3Pz1324psi2sJ = 0;
   myX3M1324psi2sJ = 0;
   myX4Px1324psi2sJ = 0;
   myX4Py1324psi2sJ = 0;
   myX4Pz1324psi2sJ = 0;
   myX4M1324psi2sJ = 0;
   my4muVtxCL1423psi2sJ = 0;
   myX5Px1423psi2sJ = 0;
   myX5Py1423psi2sJ = 0;
   myX5Pz1423psi2sJ = 0;
   myX5M1423psi2sJ = 0;
   myX6Px1423psi2sJ = 0;
   myX6Py1423psi2sJ = 0;
   myX6Pz1423psi2sJ = 0;
   myX6M1423psi2sJ = 0;
   my4muVtxCL1234YJ = 0;
   myX1Px1234YJ = 0;
   myX1Py1234YJ = 0;
   myX1Pz1234YJ = 0;
   myX1M1234YJ = 0;
   myX2Px1234YJ = 0;
   myX2Py1234YJ = 0;
   myX2Pz1234YJ = 0;
   myX2M1234YJ = 0;
   my4muVtxCL1324YJ = 0;
   myX3Px1324YJ = 0;
   myX3Py1324YJ = 0;
   myX3Pz1324YJ = 0;
   myX3M1324YJ = 0;
   myX4Px1324YJ = 0;
   myX4Py1324YJ = 0;
   myX4Pz1324YJ = 0;
   myX4M1324YJ = 0;
   my4muVtxCL1423YJ = 0;
   myX5Px1423YJ = 0;
   myX5Py1423YJ = 0;
   myX5Pz1423YJ = 0;
   myX5M1423YJ = 0;
   myX6Px1423YJ = 0;
   myX6Py1423YJ = 0;
   myX6Pz1423YJ = 0;
   myX6M1423YJ = 0;
   my4muVtxCL1234Ypsi2s = 0;
   myX1Px1234Ypsi2s = 0;
   myX1Py1234Ypsi2s = 0;
   myX1Pz1234Ypsi2s = 0;
   myX1M1234Ypsi2s = 0;
   myX2Px1234Ypsi2s = 0;
   myX2Py1234Ypsi2s = 0;
   myX2Pz1234Ypsi2s = 0;
   myX2M1234Ypsi2s = 0;
   my4muVtxCL1324Ypsi2s = 0;
   myX3Px1324Ypsi2s = 0;
   myX3Py1324Ypsi2s = 0;
   myX3Pz1324Ypsi2s = 0;
   myX3M1324Ypsi2s = 0;
   myX4Px1324Ypsi2s = 0;
   myX4Py1324Ypsi2s = 0;
   myX4Pz1324Ypsi2s = 0;
   myX4M1324Ypsi2s = 0;
   my4muVtxCL1423Ypsi2s = 0;
   myX5Px1423Ypsi2s = 0;
   myX5Py1423Ypsi2s = 0;
   myX5Pz1423Ypsi2s = 0;
   myX5M1423Ypsi2s = 0;
   myX6Px1423Ypsi2s = 0;
   myX6Py1423Ypsi2s = 0;
   myX6Pz1423Ypsi2s = 0;
   myX6M1423Ypsi2s = 0;
   my4muVtxCL1234Y12mumu = 0;
   myX1Px1234Y12mumu = 0;
   myX1Py1234Y12mumu = 0;
   myX1Pz1234Y12mumu = 0;
   myX1M1234Y12mumu = 0;
   myX2Px1234Y12mumu = 0;
   myX2Py1234Y12mumu = 0;
   myX2Pz1234Y12mumu = 0;
   myX2M1234Y12mumu = 0;
   my4muVtxCL1324Y13mumu = 0;
   myX3Px1324Y13mumu = 0;
   myX3Py1324Y13mumu = 0;
   myX3Pz1324Y13mumu = 0;
   myX3M1324Y13mumu = 0;
   myX4Px1324Y13mumu = 0;
   myX4Py1324Y13mumu = 0;
   myX4Pz1324Y13mumu = 0;
   myX4M1324Y13mumu = 0;
   my4muVtxCL1423Y14mumu = 0;
   myX5Px1423Y14mumu = 0;
   myX5Py1423Y14mumu = 0;
   myX5Pz1423Y14mumu = 0;
   myX5M1423Y14mumu = 0;
   myX6Px1423Y14mumu = 0;
   myX6Py1423Y14mumu = 0;
   myX6Pz1423Y14mumu = 0;
   myX6M1423Y14mumu = 0;
   my4muVtxCL1234Y34mumu = 0;
   myX1Px1234Y34mumu = 0;
   myX1Py1234Y34mumu = 0;
   myX1Pz1234Y34mumu = 0;
   myX1M1234Y34mumu = 0;
   myX2Px1234Y34mumu = 0;
   myX2Py1234Y34mumu = 0;
   myX2Pz1234Y34mumu = 0;
   myX2M1234Y34mumu = 0;
   my4muVtxCL1324Y24mumu = 0;
   myX3Px1324Y24mumu = 0;
   myX3Py1324Y24mumu = 0;
   myX3Pz1324Y24mumu = 0;
   myX3M1324Y24mumu = 0;
   myX4Px1324Y24mumu = 0;
   myX4Py1324Y24mumu = 0;
   myX4Pz1324Y24mumu = 0;
   myX4M1324Y24mumu = 0;
   my4muVtxCL1423Y23mumu = 0;
   myX5Px1423Y23mumu = 0;
   myX5Py1423Y23mumu = 0;
   myX5Pz1423Y23mumu = 0;
   myX5M1423Y23mumu = 0;
   myX6Px1423Y23mumu = 0;
   myX6Py1423Y23mumu = 0;
   myX6Pz1423Y23mumu = 0;
   myX6M1423Y23mumu = 0;
   my4muVtxCL1234J12mumu = 0;
   myX1Px1234J12mumu = 0;
   myX1Py1234J12mumu = 0;
   myX1Pz1234J12mumu = 0;
   myX1M1234J12mumu = 0;
   myX2Px1234J12mumu = 0;
   myX2Py1234J12mumu = 0;
   myX2Pz1234J12mumu = 0;
   myX2M1234J12mumu = 0;
   my4muVtxCL1324J13mumu = 0;
   myX3Px1324J13mumu = 0;
   myX3Py1324J13mumu = 0;
   myX3Pz1324J13mumu = 0;
   myX3M1324J13mumu = 0;
   myX4Px1324J13mumu = 0;
   myX4Py1324J13mumu = 0;
   myX4Pz1324J13mumu = 0;
   myX4M1324J13mumu = 0;
   my4muVtxCL1423J14mumu = 0;
   myX5Px1423J14mumu = 0;
   myX5Py1423J14mumu = 0;
   myX5Pz1423J14mumu = 0;
   myX5M1423J14mumu = 0;
   myX6Px1423J14mumu = 0;
   myX6Py1423J14mumu = 0;
   myX6Pz1423J14mumu = 0;
   myX6M1423J14mumu = 0;
   my4muVtxCL1234J34mumu = 0;
   myX1Px1234J34mumu = 0;
   myX1Py1234J34mumu = 0;
   myX1Pz1234J34mumu = 0;
   myX1M1234J34mumu = 0;
   myX2Px1234J34mumu = 0;
   myX2Py1234J34mumu = 0;
   myX2Pz1234J34mumu = 0;
   myX2M1234J34mumu = 0;
   my4muVtxCL1324J24mumu = 0;
   myX3Px1324J24mumu = 0;
   myX3Py1324J24mumu = 0;
   myX3Pz1324J24mumu = 0;
   myX3M1324J24mumu = 0;
   myX4Px1324J24mumu = 0;
   myX4Py1324J24mumu = 0;
   myX4Pz1324J24mumu = 0;
   myX4M1324J24mumu = 0;
   my4muVtxCL1423J23mumu = 0;
   myX5Px1423J23mumu = 0;
   myX5Py1423J23mumu = 0;
   myX5Pz1423J23mumu = 0;
   myX5M1423J23mumu = 0;
   myX6Px1423J23mumu = 0;
   myX6Py1423J23mumu = 0;
   myX6Pz1423J23mumu = 0;
   myX6M1423J23mumu = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("TrigRes", &TrigRes, &b_TrigRes);
   fChain->SetBranchAddress("TrigNames", &TrigNames, &b_TrigNames);
   fChain->SetBranchAddress("MatchTriggerNames", &MatchTriggerNames, &b_MatchTriggerNames);
   fChain->SetBranchAddress("L1TrigRes", &L1TrigRes, &b_L1TrigRes);
   fChain->SetBranchAddress("evtNum", &evtNum, &b_evtNum);
   fChain->SetBranchAddress("runNum", &runNum, &b_runNum);
   fChain->SetBranchAddress("lumiNum", &lumiNum, &b_lumiNum);
   fChain->SetBranchAddress("nGoodPrimVtx", &nGoodPrimVtx, &b_nGoodPrimVtx);
   fChain->SetBranchAddress("mybxlumicorr", &mybxlumicorr, &b_f);
   fChain->SetBranchAddress("myrawbxlumi", &myrawbxlumi, &b_f);
   fChain->SetBranchAddress("priVtxX", &priVtxX, &b_f);
   fChain->SetBranchAddress("priVtxY", &priVtxY, &b_f);
   fChain->SetBranchAddress("priVtxZ", &priVtxZ, &b_f);
   fChain->SetBranchAddress("priVtxXE", &priVtxXE, &b_f);
   fChain->SetBranchAddress("priVtxYE", &priVtxYE, &b_f);
   fChain->SetBranchAddress("priVtxZE", &priVtxZE, &b_f);
   fChain->SetBranchAddress("priVtxChiNorm", &priVtxChiNorm, &b_f);
   fChain->SetBranchAddress("priVtxChi", &priVtxChi, &b_f);
   fChain->SetBranchAddress("priVtxCL", &priVtxCL, &b_f);
   fChain->SetBranchAddress("PriVtxXCorrX", &PriVtxXCorrX, &b_PriVtxXCorrX);
   fChain->SetBranchAddress("PriVtxXCorrY", &PriVtxXCorrY, &b_PriVtxXCorrY);
   fChain->SetBranchAddress("PriVtxXCorrZ", &PriVtxXCorrZ, &b_PriVtxXCorrZ);
   fChain->SetBranchAddress("PriVtxXCorrEX", &PriVtxXCorrEX, &b_PriVtxXCorrEX);
   fChain->SetBranchAddress("PriVtxXCorrEY", &PriVtxXCorrEY, &b_PriVtxXCorrEY);
   fChain->SetBranchAddress("PriVtxXCorrEZ", &PriVtxXCorrEZ, &b_PriVtxXCorrEZ);
   fChain->SetBranchAddress("PriVtxXCorrC2", &PriVtxXCorrC2, &b_PriVtxXCorrC2);
   fChain->SetBranchAddress("PriVtxXCorrCL", &PriVtxXCorrCL, &b_PriVtxXCorrCL);
   fChain->SetBranchAddress("nMu", &nMu, &b_nMu);
   fChain->SetBranchAddress("muPx", &muPx, &b_muPx);
   fChain->SetBranchAddress("muPy", &muPy, &b_muPy);
   fChain->SetBranchAddress("muPz", &muPz, &b_muPz);
   fChain->SetBranchAddress("muD0", &muD0, &b_muD0);
   fChain->SetBranchAddress("muD0E", &muD0E, &b_muD0E);
   fChain->SetBranchAddress("muDz", &muDz, &b_muDz);
   fChain->SetBranchAddress("muChi2", &muChi2, &b_muChi2);
   fChain->SetBranchAddress("muGlChi2", &muGlChi2, &b_muGlChi2);
   fChain->SetBranchAddress("mufHits", &mufHits, &b_mufHits);
   fChain->SetBranchAddress("muFirstBarrel", &muFirstBarrel, &b_muFirstBarrel);
   fChain->SetBranchAddress("muFirstEndCap", &muFirstEndCap, &b_muFirstEndCap);
   fChain->SetBranchAddress("muDzVtx", &muDzVtx, &b_muDzVtx);
   fChain->SetBranchAddress("muDxyVtx", &muDxyVtx, &b_muDxyVtx);
   fChain->SetBranchAddress("muNDF", &muNDF, &b_muNDF);
   fChain->SetBranchAddress("muGlNDF", &muGlNDF, &b_muGlNDF);
   fChain->SetBranchAddress("muPhits", &muPhits, &b_muPhits);
   fChain->SetBranchAddress("muShits", &muShits, &b_muShits);
   fChain->SetBranchAddress("muGlMuHits", &muGlMuHits, &b_muGlMuHits);
   fChain->SetBranchAddress("muType", &muType, &b_muType);
   fChain->SetBranchAddress("muQual", &muQual, &b_muQual);
   fChain->SetBranchAddress("muTrack", &muTrack, &b_muTrack);
   fChain->SetBranchAddress("muCharge", &muCharge, &b_muCharge);
   fChain->SetBranchAddress("muIsoratio", &muIsoratio, &b_muIsoratio);
   fChain->SetBranchAddress("munMatchedSeg", &munMatchedSeg, &b_munMatchedSeg);
   fChain->SetBranchAddress("muIsGoodSoftMuonNewIlseMod", &muIsGoodSoftMuonNewIlseMod, &b_muIsGoodSoftMuonNewIlseMod);
   fChain->SetBranchAddress("muIsGoodSoftMuonNewIlse", &muIsGoodSoftMuonNewIlse, &b_muIsGoodSoftMuonNewIlse);
   fChain->SetBranchAddress("muIsGoodLooseMuonNew", &muIsGoodLooseMuonNew, &b_muIsGoodLooseMuonNew);
   fChain->SetBranchAddress("muIsGoodLooseMuon", &muIsGoodLooseMuon, &b_muIsGoodLooseMuon);
   fChain->SetBranchAddress("muIsGoodTightMuon", &muIsGoodTightMuon, &b_muIsGoodTightMuon);
   fChain->SetBranchAddress("muIsPatLooseMuon", &muIsPatLooseMuon, &b_muIsPatLooseMuon);
   fChain->SetBranchAddress("muIsPatTightMuon", &muIsPatTightMuon, &b_muIsPatTightMuon);
   fChain->SetBranchAddress("muIsPatSoftMuon", &muIsPatSoftMuon, &b_muIsPatSoftMuon);
   fChain->SetBranchAddress("muIsPatMediumMuon", &muIsPatMediumMuon, &b_muIsPatMediumMuon);
   fChain->SetBranchAddress("muIsJpsiTrigMatch", &muIsJpsiTrigMatch, &b_muIsJpsiTrigMatch);
   fChain->SetBranchAddress("muIsUpsTrigMatch", &muIsUpsTrigMatch, &b_muIsUpsTrigMatch);
   fChain->SetBranchAddress("muMVAMuonID", &muMVAMuonID, &b_muMVAMuonID);
   fChain->SetBranchAddress("musegmentCompatibility", &musegmentCompatibility, &b_musegmentCompatibility);
   fChain->SetBranchAddress("mupulldXdZ_pos_noArb", &mupulldXdZ_pos_noArb, &b_mupulldXdZ_pos_noArb);
   fChain->SetBranchAddress("mupulldYdZ_pos_noArb", &mupulldYdZ_pos_noArb, &b_mupulldYdZ_pos_noArb);
   fChain->SetBranchAddress("mupulldXdZ_pos_ArbDef", &mupulldXdZ_pos_ArbDef, &b_mupulldXdZ_pos_ArbDef);
   fChain->SetBranchAddress("mupulldYdZ_pos_ArbDef", &mupulldYdZ_pos_ArbDef, &b_mupulldYdZ_pos_ArbDef);
   fChain->SetBranchAddress("mupulldXdZ_pos_ArbST", &mupulldXdZ_pos_ArbST, &b_mupulldXdZ_pos_ArbST);
   fChain->SetBranchAddress("mupulldYdZ_pos_ArbST", &mupulldYdZ_pos_ArbST, &b_mupulldYdZ_pos_ArbST);
   fChain->SetBranchAddress("mupulldXdZ_pos_noArb_any", &mupulldXdZ_pos_noArb_any, &b_mupulldXdZ_pos_noArb_any);
   fChain->SetBranchAddress("mupulldYdZ_pos_noArb_any", &mupulldYdZ_pos_noArb_any, &b_mupulldYdZ_pos_noArb_any);
   fChain->SetBranchAddress("muUpsVrtxMatch", &muUpsVrtxMatch, &b_muUpsVrtxMatch);
   fChain->SetBranchAddress("muL3TriggerMatch", &muL3TriggerMatch, &b_muL3TriggerMatch);
   fChain->SetBranchAddress("nMyFourMuon", &nMyFourMuon, &b_nMyFourMuon);
   fChain->SetBranchAddress("MyFourMuonTrigMatch", &MyFourMuonTrigMatch, &b_MyFourMuonTrigMatch);
   fChain->SetBranchAddress("MyFourMuonChg", &MyFourMuonChg, &b_MyFourMuonChg);
   fChain->SetBranchAddress("MyFourMuonMass", &MyFourMuonMass, &b_MyFourMuonMass);
   fChain->SetBranchAddress("MyFourMuonMassErr", &MyFourMuonMassErr, &b_MyFourMuonMassErr);
   fChain->SetBranchAddress("MyFourMuonCTau", &MyFourMuonCTau, &b_MyFourMuonCTau);
   fChain->SetBranchAddress("MyFourMuonCTauErr", &MyFourMuonCTauErr, &b_MyFourMuonCTauErr);
   fChain->SetBranchAddress("MyHitBeforeVrtx", &MyHitBeforeVrtx, &b_MyHitBeforeVrtx);
   fChain->SetBranchAddress("MyMissAfterVrtx", &MyMissAfterVrtx, &b_MyMissAfterVrtx);
   fChain->SetBranchAddress("My1234Mass", &My1234Mass, &b_My1234Mass);
   fChain->SetBranchAddress("My1324Mass", &My1324Mass, &b_My1324Mass);
   fChain->SetBranchAddress("My1423Mass", &My1423Mass, &b_My1423Mass);
   fChain->SetBranchAddress("My1234JpsiDisXY", &My1234JpsiDisXY, &b_My1234JpsiDisXY);
   fChain->SetBranchAddress("My1324JpsiDisXY", &My1324JpsiDisXY, &b_My1324JpsiDisXY);
   fChain->SetBranchAddress("My1423JpsiDisXY", &My1423JpsiDisXY, &b_My1423JpsiDisXY);
   fChain->SetBranchAddress("My1234JpsiDisZ", &My1234JpsiDisZ, &b_My1234JpsiDisZ);
   fChain->SetBranchAddress("My1324JpsiDisZ", &My1324JpsiDisZ, &b_My1324JpsiDisZ);
   fChain->SetBranchAddress("My1423JpsiDisZ", &My1423JpsiDisZ, &b_My1423JpsiDisZ);
   fChain->SetBranchAddress("MyJpsi1CTau_Mu12", &MyJpsi1CTau_Mu12, &b_MyJpsi1CTau_Mu12);
   fChain->SetBranchAddress("MyJpsi1CTauErr_Mu12", &MyJpsi1CTauErr_Mu12, &b_MyJpsi1CTauErr_Mu12);
   fChain->SetBranchAddress("MyJpsi1ChiProb_Mu12", &MyJpsi1ChiProb_Mu12, &b_MyJpsi1ChiProb_Mu12);
   fChain->SetBranchAddress("MyJpsi1HitsBeforeMu12", &MyJpsi1HitsBeforeMu12, &b_MyJpsi1HitsBeforeMu12);
   fChain->SetBranchAddress("MyJpsi1MissAfterMu12", &MyJpsi1MissAfterMu12, &b_MyJpsi1MissAfterMu12);
   fChain->SetBranchAddress("MyJpsi2CTau_Mu34", &MyJpsi2CTau_Mu34, &b_MyJpsi2CTau_Mu34);
   fChain->SetBranchAddress("MyJpsi2CTauErr_Mu34", &MyJpsi2CTauErr_Mu34, &b_MyJpsi2CTauErr_Mu34);
   fChain->SetBranchAddress("MyJpsi2ChiProb_Mu34", &MyJpsi2ChiProb_Mu34, &b_MyJpsi2ChiProb_Mu34);
   fChain->SetBranchAddress("MyJpsi2HitsBeforeMu34", &MyJpsi2HitsBeforeMu34, &b_MyJpsi2HitsBeforeMu34);
   fChain->SetBranchAddress("MyJpsi2MissAfterMu34", &MyJpsi2MissAfterMu34, &b_MyJpsi2MissAfterMu34);
   fChain->SetBranchAddress("MyJpsi3CTau_Mu13", &MyJpsi3CTau_Mu13, &b_MyJpsi3CTau_Mu13);
   fChain->SetBranchAddress("MyJpsi3CTauErr_Mu13", &MyJpsi3CTauErr_Mu13, &b_MyJpsi3CTauErr_Mu13);
   fChain->SetBranchAddress("MyJpsi3ChiProb_Mu13", &MyJpsi3ChiProb_Mu13, &b_MyJpsi3ChiProb_Mu13);
   fChain->SetBranchAddress("MyJpsi3HitsBeforeMu13", &MyJpsi3HitsBeforeMu13, &b_MyJpsi3HitsBeforeMu13);
   fChain->SetBranchAddress("MyJpsi3MissAfterMu13", &MyJpsi3MissAfterMu13, &b_MyJpsi3MissAfterMu13);
   fChain->SetBranchAddress("MyJpsi4CTau_Mu24", &MyJpsi4CTau_Mu24, &b_MyJpsi4CTau_Mu24);
   fChain->SetBranchAddress("MyJpsi4CTauErr_Mu24", &MyJpsi4CTauErr_Mu24, &b_MyJpsi4CTauErr_Mu24);
   fChain->SetBranchAddress("MyJpsi4ChiProb_Mu24", &MyJpsi4ChiProb_Mu24, &b_MyJpsi4ChiProb_Mu24);
   fChain->SetBranchAddress("MyJpsi4HitsBeforeMu24", &MyJpsi4HitsBeforeMu24, &b_MyJpsi4HitsBeforeMu24);
   fChain->SetBranchAddress("MyJpsi4MissAfterMu24", &MyJpsi4MissAfterMu24, &b_MyJpsi4MissAfterMu24);
   fChain->SetBranchAddress("MyJpsi5CTau_Mu14", &MyJpsi5CTau_Mu14, &b_MyJpsi5CTau_Mu14);
   fChain->SetBranchAddress("MyJpsi5CTauErr_Mu14", &MyJpsi5CTauErr_Mu14, &b_MyJpsi5CTauErr_Mu14);
   fChain->SetBranchAddress("MyJpsi5ChiProb_Mu14", &MyJpsi5ChiProb_Mu14, &b_MyJpsi5ChiProb_Mu14);
   fChain->SetBranchAddress("MyJpsi5HitsBeforeMu14", &MyJpsi5HitsBeforeMu14, &b_MyJpsi5HitsBeforeMu14);
   fChain->SetBranchAddress("MyJpsi5MissAfterMu14", &MyJpsi5MissAfterMu14, &b_MyJpsi5MissAfterMu14);
   fChain->SetBranchAddress("MyJpsi6CTau_Mu23", &MyJpsi6CTau_Mu23, &b_MyJpsi6CTau_Mu23);
   fChain->SetBranchAddress("MyJpsi6CTauErr_Mu23", &MyJpsi6CTauErr_Mu23, &b_MyJpsi6CTauErr_Mu23);
   fChain->SetBranchAddress("MyJpsi6ChiProb_Mu23", &MyJpsi6ChiProb_Mu23, &b_MyJpsi6ChiProb_Mu23);
   fChain->SetBranchAddress("MyJpsi6HitsBeforeMu23", &MyJpsi6HitsBeforeMu23, &b_MyJpsi6HitsBeforeMu23);
   fChain->SetBranchAddress("MyJpsi6MissAfterMu23", &MyJpsi6MissAfterMu23, &b_MyJpsi6MissAfterMu23);
   fChain->SetBranchAddress("MyJpsi1Mass_Mu12", &MyJpsi1Mass_Mu12, &b_MyJpsi1Mass_Mu12);
   fChain->SetBranchAddress("MyJpsi1MassErr_Mu12", &MyJpsi1MassErr_Mu12, &b_MyJpsi1MassErr_Mu12);
   fChain->SetBranchAddress("MyJpsi2Mass_Mu34", &MyJpsi2Mass_Mu34, &b_MyJpsi2Mass_Mu34);
   fChain->SetBranchAddress("MyJpsi2MassErr_Mu34", &MyJpsi2MassErr_Mu34, &b_MyJpsi2MassErr_Mu34);
   fChain->SetBranchAddress("MyJpsi3Mass_Mu13", &MyJpsi3Mass_Mu13, &b_MyJpsi3Mass_Mu13);
   fChain->SetBranchAddress("MyJpsi3MassErr_Mu13", &MyJpsi3MassErr_Mu13, &b_MyJpsi3MassErr_Mu13);
   fChain->SetBranchAddress("MyJpsi4Mass_Mu24", &MyJpsi4Mass_Mu24, &b_MyJpsi4Mass_Mu24);
   fChain->SetBranchAddress("MyJpsi4MassErr_Mu24", &MyJpsi4MassErr_Mu24, &b_MyJpsi4MassErr_Mu24);
   fChain->SetBranchAddress("MyJpsi5Mass_Mu14", &MyJpsi5Mass_Mu14, &b_MyJpsi5Mass_Mu14);
   fChain->SetBranchAddress("MyJpsi5MassErr_Mu14", &MyJpsi5MassErr_Mu14, &b_MyJpsi5MassErr_Mu14);
   fChain->SetBranchAddress("MyJpsi6Mass_Mu23", &MyJpsi6Mass_Mu23, &b_MyJpsi6Mass_Mu23);
   fChain->SetBranchAddress("MyJpsi6MassErr_Mu23", &MyJpsi6MassErr_Mu23, &b_MyJpsi6MassErr_Mu23);
   fChain->SetBranchAddress("MyFourMuonOverlap12", &MyFourMuonOverlap12, &b_MyFourMuonOverlap12);
   fChain->SetBranchAddress("MyFourMuonOverlap13", &MyFourMuonOverlap13, &b_MyFourMuonOverlap13);
   fChain->SetBranchAddress("MyFourMuonOverlap14", &MyFourMuonOverlap14, &b_MyFourMuonOverlap14);
   fChain->SetBranchAddress("MyFourMuonOverlap23", &MyFourMuonOverlap23, &b_MyFourMuonOverlap23);
   fChain->SetBranchAddress("MyFourMuonOverlap24", &MyFourMuonOverlap24, &b_MyFourMuonOverlap24);
   fChain->SetBranchAddress("MyFourMuonOverlap34", &MyFourMuonOverlap34, &b_MyFourMuonOverlap34);
   fChain->SetBranchAddress("MyFourMuonSharedSeg12", &MyFourMuonSharedSeg12, &b_MyFourMuonSharedSeg12);
   fChain->SetBranchAddress("MyFourMuonSharedSeg13", &MyFourMuonSharedSeg13, &b_MyFourMuonSharedSeg13);
   fChain->SetBranchAddress("MyFourMuonSharedSeg14", &MyFourMuonSharedSeg14, &b_MyFourMuonSharedSeg14);
   fChain->SetBranchAddress("MyFourMuonSharedSeg23", &MyFourMuonSharedSeg23, &b_MyFourMuonSharedSeg23);
   fChain->SetBranchAddress("MyFourMuonSharedSeg24", &MyFourMuonSharedSeg24, &b_MyFourMuonSharedSeg24);
   fChain->SetBranchAddress("MyFourMuonSharedSeg34", &MyFourMuonSharedSeg34, &b_MyFourMuonSharedSeg34);
   fChain->SetBranchAddress("MyFourMuonVtxCL", &MyFourMuonVtxCL, &b_MyFourMuonVtxCL);
   fChain->SetBranchAddress("MyFourMuonVtxC2", &MyFourMuonVtxC2, &b_MyFourMuonVtxC2);
   fChain->SetBranchAddress("MyFourMuonPx", &MyFourMuonPx, &b_MyFourMuonPx);
   fChain->SetBranchAddress("MyFourMuonPy", &MyFourMuonPy, &b_MyFourMuonPy);
   fChain->SetBranchAddress("MyFourMuonPz", &MyFourMuonPz, &b_MyFourMuonPz);
   fChain->SetBranchAddress("MyFourMuonDecayVtxX", &MyFourMuonDecayVtxX, &b_MyFourMuonDecayVtxX);
   fChain->SetBranchAddress("MyFourMuonDecayVtxY", &MyFourMuonDecayVtxY, &b_MyFourMuonDecayVtxY);
   fChain->SetBranchAddress("MyFourMuonDecayVtxZ", &MyFourMuonDecayVtxZ, &b_MyFourMuonDecayVtxZ);
   fChain->SetBranchAddress("MyFourMuonDecayVtxXE", &MyFourMuonDecayVtxXE, &b_MyFourMuonDecayVtxXE);
   fChain->SetBranchAddress("MyFourMuonDecayVtxYE", &MyFourMuonDecayVtxYE, &b_MyFourMuonDecayVtxYE);
   fChain->SetBranchAddress("MyFourMuonDecayVtxZE", &MyFourMuonDecayVtxZE, &b_MyFourMuonDecayVtxZE);
   fChain->SetBranchAddress("MyFourMuonMu1Idx", &MyFourMuonMu1Idx, &b_MyFourMuonMu1Idx);
   fChain->SetBranchAddress("MyFourMuonMu2Idx", &MyFourMuonMu2Idx, &b_MyFourMuonMu2Idx);
   fChain->SetBranchAddress("MyFourMuonMu2Px", &MyFourMuonMu2Px, &b_MyFourMuonMu2Px);
   fChain->SetBranchAddress("MyFourMuonMu2Py", &MyFourMuonMu2Py, &b_MyFourMuonMu2Py);
   fChain->SetBranchAddress("MyFourMuonMu2Pz", &MyFourMuonMu2Pz, &b_MyFourMuonMu2Pz);
   fChain->SetBranchAddress("MyFourMuonMu1Px", &MyFourMuonMu1Px, &b_MyFourMuonMu1Px);
   fChain->SetBranchAddress("MyFourMuonMu1Py", &MyFourMuonMu1Py, &b_MyFourMuonMu1Py);
   fChain->SetBranchAddress("MyFourMuonMu1Pz", &MyFourMuonMu1Pz, &b_MyFourMuonMu1Pz);
   fChain->SetBranchAddress("MyFourMuonMu2fChi2", &MyFourMuonMu2fChi2, &b_MyFourMuonMu2fChi2);
   fChain->SetBranchAddress("MyFourMuonMu2fNDF", &MyFourMuonMu2fNDF, &b_MyFourMuonMu2fNDF);
   fChain->SetBranchAddress("MyFourMuonMu1fChi2", &MyFourMuonMu1fChi2, &b_MyFourMuonMu1fChi2);
   fChain->SetBranchAddress("MyFourMuonMu1fNDF", &MyFourMuonMu1fNDF, &b_MyFourMuonMu1fNDF);
   fChain->SetBranchAddress("MyFourMuoncosAlpha", &MyFourMuoncosAlpha, &b_MyFourMuoncosAlpha);
   fChain->SetBranchAddress("MyFourMuonFLSig", &MyFourMuonFLSig, &b_MyFourMuonFLSig);
   fChain->SetBranchAddress("MyFourMuonrVtxMag2D", &MyFourMuonrVtxMag2D, &b_MyFourMuonrVtxMag2D);
   fChain->SetBranchAddress("MyFourMuonsigmaRvtxMag2D", &MyFourMuonsigmaRvtxMag2D, &b_MyFourMuonsigmaRvtxMag2D);
   fChain->SetBranchAddress("MyFourMuonTrkIsoOverFourMuSumpt", &MyFourMuonTrkIsoOverFourMuSumpt, &b_MyFourMuonTrkIsoOverFourMuSumpt);
   fChain->SetBranchAddress("MyFourMuonTrkIsoOverFourMuVectpt", &MyFourMuonTrkIsoOverFourMuVectpt, &b_MyFourMuonTrkIsoOverFourMuVectpt);
   fChain->SetBranchAddress("MyFourMuonMu3fNDF", &MyFourMuonMu3fNDF, &b_MyFourMuonMu3fNDF);
   fChain->SetBranchAddress("MyFourMuonMu3Idx", &MyFourMuonMu3Idx, &b_MyFourMuonMu3Idx);
   fChain->SetBranchAddress("MyFourMuonMu3Px", &MyFourMuonMu3Px, &b_MyFourMuonMu3Px);
   fChain->SetBranchAddress("MyFourMuonMu3Py", &MyFourMuonMu3Py, &b_MyFourMuonMu3Py);
   fChain->SetBranchAddress("MyFourMuonMu3Pz", &MyFourMuonMu3Pz, &b_MyFourMuonMu3Pz);
   fChain->SetBranchAddress("MyFourMuonMu3fChi2", &MyFourMuonMu3fChi2, &b_MyFourMuonMu3fChi2);
   fChain->SetBranchAddress("MyFourMuonMu4fNDF", &MyFourMuonMu4fNDF, &b_MyFourMuonMu4fNDF);
   fChain->SetBranchAddress("MyFourMuonMu4Idx", &MyFourMuonMu4Idx, &b_MyFourMuonMu4Idx);
   fChain->SetBranchAddress("MyFourMuonMu4Px", &MyFourMuonMu4Px, &b_MyFourMuonMu4Px);
   fChain->SetBranchAddress("MyFourMuonMu4Py", &MyFourMuonMu4Py, &b_MyFourMuonMu4Py);
   fChain->SetBranchAddress("MyFourMuonMu4Pz", &MyFourMuonMu4Pz, &b_MyFourMuonMu4Pz);
   fChain->SetBranchAddress("MyFourMuonMu4fChi2", &MyFourMuonMu4fChi2, &b_MyFourMuonMu4fChi2);
   fChain->SetBranchAddress("nmumuonly", &nmumuonly, &b_nmumuonly);
   fChain->SetBranchAddress("mumuonlyMass", &mumuonlyMass, &b_mumuonlyMass);
   fChain->SetBranchAddress("mumuonlyMassErr", &mumuonlyMassErr, &b_mumuonlyMassErr);
   fChain->SetBranchAddress("mumuonlyVtxCL", &mumuonlyVtxCL, &b_mumuonlyVtxCL);
   fChain->SetBranchAddress("mumuonlyPx", &mumuonlyPx, &b_mumuonlyPx);
   fChain->SetBranchAddress("mumuonlyPy", &mumuonlyPy, &b_mumuonlyPy);
   fChain->SetBranchAddress("mumuonlyPz", &mumuonlyPz, &b_mumuonlyPz);
   fChain->SetBranchAddress("mumuonlymu1Idx", &mumuonlymu1Idx, &b_mumuonlymu1Idx);
   fChain->SetBranchAddress("mumuonlymu2Idx", &mumuonlymu2Idx, &b_mumuonlymu2Idx);
   fChain->SetBranchAddress("mumuonlyctau", &mumuonlyctau, &b_mumuonlyctau);
   fChain->SetBranchAddress("mumuonlyctauerr", &mumuonlyctauerr, &b_mumuonlyctauerr);
   fChain->SetBranchAddress("mumuonlymuoverlapped", &mumuonlymuoverlapped, &b_mumuonlymuoverlapped);
   fChain->SetBranchAddress("mumuonlyChg", &mumuonlyChg, &b_mumuonlyChg);
   fChain->SetBranchAddress("mumuonlynsharedSeg", &mumuonlynsharedSeg, &b_mumuonlynsharedSeg);
   fChain->SetBranchAddress("mymass1234JJ", &mymass1234JJ, &b_mymass1234JJ);
   fChain->SetBranchAddress("mymass1234YY", &mymass1234YY, &b_mymass1234YY);
   fChain->SetBranchAddress("mymass1234psi2spsi2s", &mymass1234psi2spsi2s, &b_mymass1234psi2spsi2s);
   fChain->SetBranchAddress("mymass1234psi2sJ", &mymass1234psi2sJ, &b_mymass1234psi2sJ);
   fChain->SetBranchAddress("mymass1234YJ", &mymass1234YJ, &b_mymass1234YJ);
   fChain->SetBranchAddress("mymass1234Ypsi2s", &mymass1234Ypsi2s, &b_mymass1234Ypsi2s);
   fChain->SetBranchAddress("mymass1234Y12mumu", &mymass1234Y12mumu, &b_mymass1234Y12mumu);
   fChain->SetBranchAddress("mymass1234Y34mumu", &mymass1234Y34mumu, &b_mymass1234Y34mumu);
   fChain->SetBranchAddress("mymass1234J12mumu", &mymass1234J12mumu, &b_mymass1234J12mumu);
   fChain->SetBranchAddress("mymass1234J34mumu", &mymass1234J34mumu, &b_mymass1234J34mumu);
   fChain->SetBranchAddress("mymass1324JJ", &mymass1324JJ, &b_mymass1324JJ);
   fChain->SetBranchAddress("mymass1324YY", &mymass1324YY, &b_mymass1324YY);
   fChain->SetBranchAddress("mymass1324psi2spsi2s", &mymass1324psi2spsi2s, &b_mymass1324psi2spsi2s);
   fChain->SetBranchAddress("mymass1324psi2sJ", &mymass1324psi2sJ, &b_mymass1324psi2sJ);
   fChain->SetBranchAddress("mymass1324YJ", &mymass1324YJ, &b_mymass1324YJ);
   fChain->SetBranchAddress("mymass1324Ypsi2s", &mymass1324Ypsi2s, &b_mymass1324Ypsi2s);
   fChain->SetBranchAddress("mymass1324Y13mumu", &mymass1324Y13mumu, &b_mymass1324Y13mumu);
   fChain->SetBranchAddress("mymass1324Y24mumu", &mymass1324Y24mumu, &b_mymass1324Y24mumu);
   fChain->SetBranchAddress("mymass1324J13mumu", &mymass1324J13mumu, &b_mymass1324J13mumu);
   fChain->SetBranchAddress("mymass1324J24mumu", &mymass1324J24mumu, &b_mymass1324J24mumu);
   fChain->SetBranchAddress("mymass1423JJ", &mymass1423JJ, &b_mymass1423JJ);
   fChain->SetBranchAddress("mymass1423YY", &mymass1423YY, &b_mymass1423YY);
   fChain->SetBranchAddress("mymass1423psi2spsi2s", &mymass1423psi2spsi2s, &b_mymass1423psi2spsi2s);
   fChain->SetBranchAddress("mymass1423psi2sJ", &mymass1423psi2sJ, &b_mymass1423psi2sJ);
   fChain->SetBranchAddress("mymass1423YJ", &mymass1423YJ, &b_mymass1423YJ);
   fChain->SetBranchAddress("mymass1423Ypsi2s", &mymass1423Ypsi2s, &b_mymass1423Ypsi2s);
   fChain->SetBranchAddress("mymass1423Y14mumu", &mymass1423Y14mumu, &b_mymass1423Y14mumu);
   fChain->SetBranchAddress("mymass1423Y23mumu", &mymass1423Y23mumu, &b_mymass1423Y23mumu);
   fChain->SetBranchAddress("mymass1423J14mumu", &mymass1423J14mumu, &b_mymass1423J14mumu);
   fChain->SetBranchAddress("mymass1423J23mumu", &mymass1423J23mumu, &b_mymass1423J23mumu);
   fChain->SetBranchAddress("myX1JJChiProb", &myX1JJChiProb, &b_myX1JJChiProb);
   fChain->SetBranchAddress("myX2JJChiProb", &myX2JJChiProb, &b_myX2JJChiProb);
   fChain->SetBranchAddress("myX1YYChiProb", &myX1YYChiProb, &b_myX1YYChiProb);
   fChain->SetBranchAddress("myX2YYChiProb", &myX2YYChiProb, &b_myX2YYChiProb);
   fChain->SetBranchAddress("myX1psi2spsi2sChiProb", &myX1psi2spsi2sChiProb, &b_myX1psi2spsi2sChiProb);
   fChain->SetBranchAddress("myX2psi2spsi2sChiProb", &myX2psi2spsi2sChiProb, &b_myX2psi2spsi2sChiProb);
   fChain->SetBranchAddress("myX1psi2sJChiProb", &myX1psi2sJChiProb, &b_myX1psi2sJChiProb);
   fChain->SetBranchAddress("myX2psi2sJChiProb", &myX2psi2sJChiProb, &b_myX2psi2sJChiProb);
   fChain->SetBranchAddress("myX1YJChiProb", &myX1YJChiProb, &b_myX1YJChiProb);
   fChain->SetBranchAddress("myX2YJChiProb", &myX2YJChiProb, &b_myX2YJChiProb);
   fChain->SetBranchAddress("myX1Ypsi2sChiProb", &myX1Ypsi2sChiProb, &b_myX1Ypsi2sChiProb);
   fChain->SetBranchAddress("myX2Ypsi2sChiProb", &myX2Ypsi2sChiProb, &b_myX2Ypsi2sChiProb);
   fChain->SetBranchAddress("myX1Y12mumuChiProb", &myX1Y12mumuChiProb, &b_myX1Y12mumuChiProb);
   fChain->SetBranchAddress("myX2Y12mumuChiProb", &myX2Y12mumuChiProb, &b_myX2Y12mumuChiProb);
   fChain->SetBranchAddress("myX1Y34mumuChiProb", &myX1Y34mumuChiProb, &b_myX1Y34mumuChiProb);
   fChain->SetBranchAddress("myX2Y34mumuChiProb", &myX2Y34mumuChiProb, &b_myX2Y34mumuChiProb);
   fChain->SetBranchAddress("myX1J12mumuChiProb", &myX1J12mumuChiProb, &b_myX1J12mumuChiProb);
   fChain->SetBranchAddress("myX2J12mumuChiProb", &myX2J12mumuChiProb, &b_myX2J12mumuChiProb);
   fChain->SetBranchAddress("myX1J34mumuChiProb", &myX1J34mumuChiProb, &b_myX1J34mumuChiProb);
   fChain->SetBranchAddress("myX2J34mumuChiProb", &myX2J34mumuChiProb, &b_myX2J34mumuChiProb);
   fChain->SetBranchAddress("myX3JJChiProb", &myX3JJChiProb, &b_myX3JJChiProb);
   fChain->SetBranchAddress("myX4JJChiProb", &myX4JJChiProb, &b_myX4JJChiProb);
   fChain->SetBranchAddress("myX3YYChiProb", &myX3YYChiProb, &b_myX3YYChiProb);
   fChain->SetBranchAddress("myX4YYChiProb", &myX4YYChiProb, &b_myX4YYChiProb);
   fChain->SetBranchAddress("myX3psi2spsi2sChiProb", &myX3psi2spsi2sChiProb, &b_myX3psi2spsi2sChiProb);
   fChain->SetBranchAddress("myX4psi2spsi2sChiProb", &myX4psi2spsi2sChiProb, &b_myX4psi2spsi2sChiProb);
   fChain->SetBranchAddress("myX3psi2sJChiProb", &myX3psi2sJChiProb, &b_myX3psi2sJChiProb);
   fChain->SetBranchAddress("myX4psi2sJChiProb", &myX4psi2sJChiProb, &b_myX4psi2sJChiProb);
   fChain->SetBranchAddress("myX3YJChiProb", &myX3YJChiProb, &b_myX3YJChiProb);
   fChain->SetBranchAddress("myX4YJChiProb", &myX4YJChiProb, &b_myX4YJChiProb);
   fChain->SetBranchAddress("myX3Ypsi2sChiProb", &myX3Ypsi2sChiProb, &b_myX3Ypsi2sChiProb);
   fChain->SetBranchAddress("myX4Ypsi2sChiProb", &myX4Ypsi2sChiProb, &b_myX4Ypsi2sChiProb);
   fChain->SetBranchAddress("myX3Y13mumuChiProb", &myX3Y13mumuChiProb, &b_myX3Y13mumuChiProb);
   fChain->SetBranchAddress("myX4Y13mumuChiProb", &myX4Y13mumuChiProb, &b_myX4Y13mumuChiProb);
   fChain->SetBranchAddress("myX3Y24mumuChiProb", &myX3Y24mumuChiProb, &b_myX3Y24mumuChiProb);
   fChain->SetBranchAddress("myX4Y24mumuChiProb", &myX4Y24mumuChiProb, &b_myX4Y24mumuChiProb);
   fChain->SetBranchAddress("myX3J13mumuChiProb", &myX3J13mumuChiProb, &b_myX3J13mumuChiProb);
   fChain->SetBranchAddress("myX4J13mumuChiProb", &myX4J13mumuChiProb, &b_myX4J13mumuChiProb);
   fChain->SetBranchAddress("myX3J24mumuChiProb", &myX3J24mumuChiProb, &b_myX3J24mumuChiProb);
   fChain->SetBranchAddress("myX4J24mumuChiProb", &myX4J24mumuChiProb, &b_myX4J24mumuChiProb);
   fChain->SetBranchAddress("myX5JJChiProb", &myX5JJChiProb, &b_myX5JJChiProb);
   fChain->SetBranchAddress("myX6JJChiProb", &myX6JJChiProb, &b_myX6JJChiProb);
   fChain->SetBranchAddress("myX5YYChiProb", &myX5YYChiProb, &b_myX5YYChiProb);
   fChain->SetBranchAddress("myX6YYChiProb", &myX6YYChiProb, &b_myX6YYChiProb);
   fChain->SetBranchAddress("myX5psi2spsi2sChiProb", &myX5psi2spsi2sChiProb, &b_myX5psi2spsi2sChiProb);
   fChain->SetBranchAddress("myX6psi2spsi2sChiProb", &myX6psi2spsi2sChiProb, &b_myX6psi2spsi2sChiProb);
   fChain->SetBranchAddress("myX5psi2sJChiProb", &myX5psi2sJChiProb, &b_myX5psi2sJChiProb);
   fChain->SetBranchAddress("myX6psi2sJChiProb", &myX6psi2sJChiProb, &b_myX6psi2sJChiProb);
   fChain->SetBranchAddress("myX5YJChiProb", &myX5YJChiProb, &b_myX5YJChiProb);
   fChain->SetBranchAddress("myX6YJChiProb", &myX6YJChiProb, &b_myX6YJChiProb);
   fChain->SetBranchAddress("myX5Ypsi2sChiProb", &myX5Ypsi2sChiProb, &b_myX5Ypsi2sChiProb);
   fChain->SetBranchAddress("myX6Ypsi2sChiProb", &myX6Ypsi2sChiProb, &b_myX6Ypsi2sChiProb);
   fChain->SetBranchAddress("myX5Y14mumuChiProb", &myX5Y14mumuChiProb, &b_myX5Y14mumuChiProb);
   fChain->SetBranchAddress("myX6Y14mumuChiProb", &myX6Y14mumuChiProb, &b_myX6Y14mumuChiProb);
   fChain->SetBranchAddress("myX5Y23mumuChiProb", &myX5Y23mumuChiProb, &b_myX5Y23mumuChiProb);
   fChain->SetBranchAddress("myX6Y23mumuChiProb", &myX6Y23mumuChiProb, &b_myX6Y23mumuChiProb);
   fChain->SetBranchAddress("myX5J14mumuChiProb", &myX5J14mumuChiProb, &b_myX5J14mumuChiProb);
   fChain->SetBranchAddress("myX6J14mumuChiProb", &myX6J14mumuChiProb, &b_myX6J14mumuChiProb);
   fChain->SetBranchAddress("myX5J23mumuChiProb", &myX5J23mumuChiProb, &b_myX5J23mumuChiProb);
   fChain->SetBranchAddress("myX6J23mumuChiProb", &myX6J23mumuChiProb, &b_myX6J23mumuChiProb);
   fChain->SetBranchAddress("my4muVtxCL1234JJ", &my4muVtxCL1234JJ, &b_my4muVtxCL1234JJ);
   fChain->SetBranchAddress("myX1Px1234JJ", &myX1Px1234JJ, &b_myX1Px1234JJ);
   fChain->SetBranchAddress("myX1Py1234JJ", &myX1Py1234JJ, &b_myX1Py1234JJ);
   fChain->SetBranchAddress("myX1Pz1234JJ", &myX1Pz1234JJ, &b_myX1Pz1234JJ);
   fChain->SetBranchAddress("myX1M1234JJ", &myX1M1234JJ, &b_myX1M1234JJ);
   fChain->SetBranchAddress("myX2Px1234JJ", &myX2Px1234JJ, &b_myX2Px1234JJ);
   fChain->SetBranchAddress("myX2Py1234JJ", &myX2Py1234JJ, &b_myX2Py1234JJ);
   fChain->SetBranchAddress("myX2Pz1234JJ", &myX2Pz1234JJ, &b_myX2Pz1234JJ);
   fChain->SetBranchAddress("myX2M1234JJ", &myX2M1234JJ, &b_myX2M1234JJ);
   fChain->SetBranchAddress("my4muVtxCL1324JJ", &my4muVtxCL1324JJ, &b_my4muVtxCL1324JJ);
   fChain->SetBranchAddress("myX3Px1324JJ", &myX3Px1324JJ, &b_myX3Px1324JJ);
   fChain->SetBranchAddress("myX3Py1324JJ", &myX3Py1324JJ, &b_myX3Py1324JJ);
   fChain->SetBranchAddress("myX3Pz1324JJ", &myX3Pz1324JJ, &b_myX3Pz1324JJ);
   fChain->SetBranchAddress("myX3M1324JJ", &myX3M1324JJ, &b_myX3M1324JJ);
   fChain->SetBranchAddress("myX4Px1324JJ", &myX4Px1324JJ, &b_myX4Px1324JJ);
   fChain->SetBranchAddress("myX4Py1324JJ", &myX4Py1324JJ, &b_myX4Py1324JJ);
   fChain->SetBranchAddress("myX4Pz1324JJ", &myX4Pz1324JJ, &b_myX4Pz1324JJ);
   fChain->SetBranchAddress("myX4M1324JJ", &myX4M1324JJ, &b_myX4M1324JJ);
   fChain->SetBranchAddress("my4muVtxCL1423JJ", &my4muVtxCL1423JJ, &b_my4muVtxCL1423JJ);
   fChain->SetBranchAddress("myX5Px1423JJ", &myX5Px1423JJ, &b_myX5Px1423JJ);
   fChain->SetBranchAddress("myX5Py1423JJ", &myX5Py1423JJ, &b_myX5Py1423JJ);
   fChain->SetBranchAddress("myX5Pz1423JJ", &myX5Pz1423JJ, &b_myX5Pz1423JJ);
   fChain->SetBranchAddress("myX5M1423JJ", &myX5M1423JJ, &b_myX5M1423JJ);
   fChain->SetBranchAddress("myX6Px1423JJ", &myX6Px1423JJ, &b_myX6Px1423JJ);
   fChain->SetBranchAddress("myX6Py1423JJ", &myX6Py1423JJ, &b_myX6Py1423JJ);
   fChain->SetBranchAddress("myX6Pz1423JJ", &myX6Pz1423JJ, &b_myX6Pz1423JJ);
   fChain->SetBranchAddress("myX6M1423JJ", &myX6M1423JJ, &b_myX6M1423JJ);
   fChain->SetBranchAddress("my4muVtxCL1234YY", &my4muVtxCL1234YY, &b_my4muVtxCL1234YY);
   fChain->SetBranchAddress("myX1Px1234YY", &myX1Px1234YY, &b_myX1Px1234YY);
   fChain->SetBranchAddress("myX1Py1234YY", &myX1Py1234YY, &b_myX1Py1234YY);
   fChain->SetBranchAddress("myX1Pz1234YY", &myX1Pz1234YY, &b_myX1Pz1234YY);
   fChain->SetBranchAddress("myX1M1234YY", &myX1M1234YY, &b_myX1M1234YY);
   fChain->SetBranchAddress("myX2Px1234YY", &myX2Px1234YY, &b_myX2Px1234YY);
   fChain->SetBranchAddress("myX2Py1234YY", &myX2Py1234YY, &b_myX2Py1234YY);
   fChain->SetBranchAddress("myX2Pz1234YY", &myX2Pz1234YY, &b_myX2Pz1234YY);
   fChain->SetBranchAddress("myX2M1234YY", &myX2M1234YY, &b_myX2M1234YY);
   fChain->SetBranchAddress("my4muVtxCL1324YY", &my4muVtxCL1324YY, &b_my4muVtxCL1324YY);
   fChain->SetBranchAddress("myX3Px1324YY", &myX3Px1324YY, &b_myX3Px1324YY);
   fChain->SetBranchAddress("myX3Py1324YY", &myX3Py1324YY, &b_myX3Py1324YY);
   fChain->SetBranchAddress("myX3Pz1324YY", &myX3Pz1324YY, &b_myX3Pz1324YY);
   fChain->SetBranchAddress("myX3M1324YY", &myX3M1324YY, &b_myX3M1324YY);
   fChain->SetBranchAddress("myX4Px1324YY", &myX4Px1324YY, &b_myX4Px1324YY);
   fChain->SetBranchAddress("myX4Py1324YY", &myX4Py1324YY, &b_myX4Py1324YY);
   fChain->SetBranchAddress("myX4Pz1324YY", &myX4Pz1324YY, &b_myX4Pz1324YY);
   fChain->SetBranchAddress("myX4M1324YY", &myX4M1324YY, &b_myX4M1324YY);
   fChain->SetBranchAddress("my4muVtxCL1423YY", &my4muVtxCL1423YY, &b_my4muVtxCL1423YY);
   fChain->SetBranchAddress("myX5Px1423YY", &myX5Px1423YY, &b_myX5Px1423YY);
   fChain->SetBranchAddress("myX5Py1423YY", &myX5Py1423YY, &b_myX5Py1423YY);
   fChain->SetBranchAddress("myX5Pz1423YY", &myX5Pz1423YY, &b_myX5Pz1423YY);
   fChain->SetBranchAddress("myX5M1423YY", &myX5M1423YY, &b_myX5M1423YY);
   fChain->SetBranchAddress("myX6Px1423YY", &myX6Px1423YY, &b_myX6Px1423YY);
   fChain->SetBranchAddress("myX6Py1423YY", &myX6Py1423YY, &b_myX6Py1423YY);
   fChain->SetBranchAddress("myX6Pz1423YY", &myX6Pz1423YY, &b_myX6Pz1423YY);
   fChain->SetBranchAddress("myX6M1423YY", &myX6M1423YY, &b_myX6M1423YY);
   fChain->SetBranchAddress("my4muVtxCL1234psi2spsi2s", &my4muVtxCL1234psi2spsi2s, &b_my4muVtxCL1234psi2spsi2s);
   fChain->SetBranchAddress("myX1Px1234psi2spsi2s", &myX1Px1234psi2spsi2s, &b_myX1Px1234psi2spsi2s);
   fChain->SetBranchAddress("myX1Py1234psi2spsi2s", &myX1Py1234psi2spsi2s, &b_myX1Py1234psi2spsi2s);
   fChain->SetBranchAddress("myX1Pz1234psi2spsi2s", &myX1Pz1234psi2spsi2s, &b_myX1Pz1234psi2spsi2s);
   fChain->SetBranchAddress("myX1M1234psi2spsi2s", &myX1M1234psi2spsi2s, &b_myX1M1234psi2spsi2s);
   fChain->SetBranchAddress("myX2Px1234psi2spsi2s", &myX2Px1234psi2spsi2s, &b_myX2Px1234psi2spsi2s);
   fChain->SetBranchAddress("myX2Py1234psi2spsi2s", &myX2Py1234psi2spsi2s, &b_myX2Py1234psi2spsi2s);
   fChain->SetBranchAddress("myX2Pz1234psi2spsi2s", &myX2Pz1234psi2spsi2s, &b_myX2Pz1234psi2spsi2s);
   fChain->SetBranchAddress("myX2M1234psi2spsi2s", &myX2M1234psi2spsi2s, &b_myX2M1234psi2spsi2s);
   fChain->SetBranchAddress("my4muVtxCL1324psi2spsi2s", &my4muVtxCL1324psi2spsi2s, &b_my4muVtxCL1324psi2spsi2s);
   fChain->SetBranchAddress("myX3Px1324psi2spsi2s", &myX3Px1324psi2spsi2s, &b_myX3Px1324psi2spsi2s);
   fChain->SetBranchAddress("myX3Py1324psi2spsi2s", &myX3Py1324psi2spsi2s, &b_myX3Py1324psi2spsi2s);
   fChain->SetBranchAddress("myX3Pz1324psi2spsi2s", &myX3Pz1324psi2spsi2s, &b_myX3Pz1324psi2spsi2s);
   fChain->SetBranchAddress("myX3M1324psi2spsi2s", &myX3M1324psi2spsi2s, &b_myX3M1324psi2spsi2s);
   fChain->SetBranchAddress("myX4Px1324psi2spsi2s", &myX4Px1324psi2spsi2s, &b_myX4Px1324psi2spsi2s);
   fChain->SetBranchAddress("myX4Py1324psi2spsi2s", &myX4Py1324psi2spsi2s, &b_myX4Py1324psi2spsi2s);
   fChain->SetBranchAddress("myX4Pz1324psi2spsi2s", &myX4Pz1324psi2spsi2s, &b_myX4Pz1324psi2spsi2s);
   fChain->SetBranchAddress("myX4M1324psi2spsi2s", &myX4M1324psi2spsi2s, &b_myX4M1324psi2spsi2s);
   fChain->SetBranchAddress("my4muVtxCL1423psi2spsi2s", &my4muVtxCL1423psi2spsi2s, &b_my4muVtxCL1423psi2spsi2s);
   fChain->SetBranchAddress("myX5Px1423psi2spsi2s", &myX5Px1423psi2spsi2s, &b_myX5Px1423psi2spsi2s);
   fChain->SetBranchAddress("myX5Py1423psi2spsi2s", &myX5Py1423psi2spsi2s, &b_myX5Py1423psi2spsi2s);
   fChain->SetBranchAddress("myX5Pz1423psi2spsi2s", &myX5Pz1423psi2spsi2s, &b_myX5Pz1423psi2spsi2s);
   fChain->SetBranchAddress("myX5M1423psi2spsi2s", &myX5M1423psi2spsi2s, &b_myX5M1423psi2spsi2s);
   fChain->SetBranchAddress("myX6Px1423psi2spsi2s", &myX6Px1423psi2spsi2s, &b_myX6Px1423psi2spsi2s);
   fChain->SetBranchAddress("myX6Py1423psi2spsi2s", &myX6Py1423psi2spsi2s, &b_myX6Py1423psi2spsi2s);
   fChain->SetBranchAddress("myX6Pz1423psi2spsi2s", &myX6Pz1423psi2spsi2s, &b_myX6Pz1423psi2spsi2s);
   fChain->SetBranchAddress("myX6M1423psi2spsi2s", &myX6M1423psi2spsi2s, &b_myX6M1423psi2spsi2s);
   fChain->SetBranchAddress("my4muVtxCL1234psi2sJ", &my4muVtxCL1234psi2sJ, &b_my4muVtxCL1234psi2sJ);
   fChain->SetBranchAddress("myX1Px1234psi2sJ", &myX1Px1234psi2sJ, &b_myX1Px1234psi2sJ);
   fChain->SetBranchAddress("myX1Py1234psi2sJ", &myX1Py1234psi2sJ, &b_myX1Py1234psi2sJ);
   fChain->SetBranchAddress("myX1Pz1234psi2sJ", &myX1Pz1234psi2sJ, &b_myX1Pz1234psi2sJ);
   fChain->SetBranchAddress("myX1M1234psi2sJ", &myX1M1234psi2sJ, &b_myX1M1234psi2sJ);
   fChain->SetBranchAddress("myX2Px1234psi2sJ", &myX2Px1234psi2sJ, &b_myX2Px1234psi2sJ);
   fChain->SetBranchAddress("myX2Py1234psi2sJ", &myX2Py1234psi2sJ, &b_myX2Py1234psi2sJ);
   fChain->SetBranchAddress("myX2Pz1234psi2sJ", &myX2Pz1234psi2sJ, &b_myX2Pz1234psi2sJ);
   fChain->SetBranchAddress("myX2M1234psi2sJ", &myX2M1234psi2sJ, &b_myX2M1234psi2sJ);
   fChain->SetBranchAddress("my4muVtxCL1324psi2sJ", &my4muVtxCL1324psi2sJ, &b_my4muVtxCL1324psi2sJ);
   fChain->SetBranchAddress("myX3Px1324psi2sJ", &myX3Px1324psi2sJ, &b_myX3Px1324psi2sJ);
   fChain->SetBranchAddress("myX3Py1324psi2sJ", &myX3Py1324psi2sJ, &b_myX3Py1324psi2sJ);
   fChain->SetBranchAddress("myX3Pz1324psi2sJ", &myX3Pz1324psi2sJ, &b_myX3Pz1324psi2sJ);
   fChain->SetBranchAddress("myX3M1324psi2sJ", &myX3M1324psi2sJ, &b_myX3M1324psi2sJ);
   fChain->SetBranchAddress("myX4Px1324psi2sJ", &myX4Px1324psi2sJ, &b_myX4Px1324psi2sJ);
   fChain->SetBranchAddress("myX4Py1324psi2sJ", &myX4Py1324psi2sJ, &b_myX4Py1324psi2sJ);
   fChain->SetBranchAddress("myX4Pz1324psi2sJ", &myX4Pz1324psi2sJ, &b_myX4Pz1324psi2sJ);
   fChain->SetBranchAddress("myX4M1324psi2sJ", &myX4M1324psi2sJ, &b_myX4M1324psi2sJ);
   fChain->SetBranchAddress("my4muVtxCL1423psi2sJ", &my4muVtxCL1423psi2sJ, &b_my4muVtxCL1423psi2sJ);
   fChain->SetBranchAddress("myX5Px1423psi2sJ", &myX5Px1423psi2sJ, &b_myX5Px1423psi2sJ);
   fChain->SetBranchAddress("myX5Py1423psi2sJ", &myX5Py1423psi2sJ, &b_myX5Py1423psi2sJ);
   fChain->SetBranchAddress("myX5Pz1423psi2sJ", &myX5Pz1423psi2sJ, &b_myX5Pz1423psi2sJ);
   fChain->SetBranchAddress("myX5M1423psi2sJ", &myX5M1423psi2sJ, &b_myX5M1423psi2sJ);
   fChain->SetBranchAddress("myX6Px1423psi2sJ", &myX6Px1423psi2sJ, &b_myX6Px1423psi2sJ);
   fChain->SetBranchAddress("myX6Py1423psi2sJ", &myX6Py1423psi2sJ, &b_myX6Py1423psi2sJ);
   fChain->SetBranchAddress("myX6Pz1423psi2sJ", &myX6Pz1423psi2sJ, &b_myX6Pz1423psi2sJ);
   fChain->SetBranchAddress("myX6M1423psi2sJ", &myX6M1423psi2sJ, &b_myX6M1423psi2sJ);
   fChain->SetBranchAddress("my4muVtxCL1234YJ", &my4muVtxCL1234YJ, &b_my4muVtxCL1234YJ);
   fChain->SetBranchAddress("myX1Px1234YJ", &myX1Px1234YJ, &b_myX1Px1234YJ);
   fChain->SetBranchAddress("myX1Py1234YJ", &myX1Py1234YJ, &b_myX1Py1234YJ);
   fChain->SetBranchAddress("myX1Pz1234YJ", &myX1Pz1234YJ, &b_myX1Pz1234YJ);
   fChain->SetBranchAddress("myX1M1234YJ", &myX1M1234YJ, &b_myX1M1234YJ);
   fChain->SetBranchAddress("myX2Px1234YJ", &myX2Px1234YJ, &b_myX2Px1234YJ);
   fChain->SetBranchAddress("myX2Py1234YJ", &myX2Py1234YJ, &b_myX2Py1234YJ);
   fChain->SetBranchAddress("myX2Pz1234YJ", &myX2Pz1234YJ, &b_myX2Pz1234YJ);
   fChain->SetBranchAddress("myX2M1234YJ", &myX2M1234YJ, &b_myX2M1234YJ);
   fChain->SetBranchAddress("my4muVtxCL1324YJ", &my4muVtxCL1324YJ, &b_my4muVtxCL1324YJ);
   fChain->SetBranchAddress("myX3Px1324YJ", &myX3Px1324YJ, &b_myX3Px1324YJ);
   fChain->SetBranchAddress("myX3Py1324YJ", &myX3Py1324YJ, &b_myX3Py1324YJ);
   fChain->SetBranchAddress("myX3Pz1324YJ", &myX3Pz1324YJ, &b_myX3Pz1324YJ);
   fChain->SetBranchAddress("myX3M1324YJ", &myX3M1324YJ, &b_myX3M1324YJ);
   fChain->SetBranchAddress("myX4Px1324YJ", &myX4Px1324YJ, &b_myX4Px1324YJ);
   fChain->SetBranchAddress("myX4Py1324YJ", &myX4Py1324YJ, &b_myX4Py1324YJ);
   fChain->SetBranchAddress("myX4Pz1324YJ", &myX4Pz1324YJ, &b_myX4Pz1324YJ);
   fChain->SetBranchAddress("myX4M1324YJ", &myX4M1324YJ, &b_myX4M1324YJ);
   fChain->SetBranchAddress("my4muVtxCL1423YJ", &my4muVtxCL1423YJ, &b_my4muVtxCL1423YJ);
   fChain->SetBranchAddress("myX5Px1423YJ", &myX5Px1423YJ, &b_myX5Px1423YJ);
   fChain->SetBranchAddress("myX5Py1423YJ", &myX5Py1423YJ, &b_myX5Py1423YJ);
   fChain->SetBranchAddress("myX5Pz1423YJ", &myX5Pz1423YJ, &b_myX5Pz1423YJ);
   fChain->SetBranchAddress("myX5M1423YJ", &myX5M1423YJ, &b_myX5M1423YJ);
   fChain->SetBranchAddress("myX6Px1423YJ", &myX6Px1423YJ, &b_myX6Px1423YJ);
   fChain->SetBranchAddress("myX6Py1423YJ", &myX6Py1423YJ, &b_myX6Py1423YJ);
   fChain->SetBranchAddress("myX6Pz1423YJ", &myX6Pz1423YJ, &b_myX6Pz1423YJ);
   fChain->SetBranchAddress("myX6M1423YJ", &myX6M1423YJ, &b_myX6M1423YJ);
   fChain->SetBranchAddress("my4muVtxCL1234Ypsi2s", &my4muVtxCL1234Ypsi2s, &b_my4muVtxCL1234Ypsi2s);
   fChain->SetBranchAddress("myX1Px1234Ypsi2s", &myX1Px1234Ypsi2s, &b_myX1Px1234Ypsi2s);
   fChain->SetBranchAddress("myX1Py1234Ypsi2s", &myX1Py1234Ypsi2s, &b_myX1Py1234Ypsi2s);
   fChain->SetBranchAddress("myX1Pz1234Ypsi2s", &myX1Pz1234Ypsi2s, &b_myX1Pz1234Ypsi2s);
   fChain->SetBranchAddress("myX1M1234Ypsi2s", &myX1M1234Ypsi2s, &b_myX1M1234Ypsi2s);
   fChain->SetBranchAddress("myX2Px1234Ypsi2s", &myX2Px1234Ypsi2s, &b_myX2Px1234Ypsi2s);
   fChain->SetBranchAddress("myX2Py1234Ypsi2s", &myX2Py1234Ypsi2s, &b_myX2Py1234Ypsi2s);
   fChain->SetBranchAddress("myX2Pz1234Ypsi2s", &myX2Pz1234Ypsi2s, &b_myX2Pz1234Ypsi2s);
   fChain->SetBranchAddress("myX2M1234Ypsi2s", &myX2M1234Ypsi2s, &b_myX2M1234Ypsi2s);
   fChain->SetBranchAddress("my4muVtxCL1324Ypsi2s", &my4muVtxCL1324Ypsi2s, &b_my4muVtxCL1324Ypsi2s);
   fChain->SetBranchAddress("myX3Px1324Ypsi2s", &myX3Px1324Ypsi2s, &b_myX3Px1324Ypsi2s);
   fChain->SetBranchAddress("myX3Py1324Ypsi2s", &myX3Py1324Ypsi2s, &b_myX3Py1324Ypsi2s);
   fChain->SetBranchAddress("myX3Pz1324Ypsi2s", &myX3Pz1324Ypsi2s, &b_myX3Pz1324Ypsi2s);
   fChain->SetBranchAddress("myX3M1324Ypsi2s", &myX3M1324Ypsi2s, &b_myX3M1324Ypsi2s);
   fChain->SetBranchAddress("myX4Px1324Ypsi2s", &myX4Px1324Ypsi2s, &b_myX4Px1324Ypsi2s);
   fChain->SetBranchAddress("myX4Py1324Ypsi2s", &myX4Py1324Ypsi2s, &b_myX4Py1324Ypsi2s);
   fChain->SetBranchAddress("myX4Pz1324Ypsi2s", &myX4Pz1324Ypsi2s, &b_myX4Pz1324Ypsi2s);
   fChain->SetBranchAddress("myX4M1324Ypsi2s", &myX4M1324Ypsi2s, &b_myX4M1324Ypsi2s);
   fChain->SetBranchAddress("my4muVtxCL1423Ypsi2s", &my4muVtxCL1423Ypsi2s, &b_my4muVtxCL1423Ypsi2s);
   fChain->SetBranchAddress("myX5Px1423Ypsi2s", &myX5Px1423Ypsi2s, &b_myX5Px1423Ypsi2s);
   fChain->SetBranchAddress("myX5Py1423Ypsi2s", &myX5Py1423Ypsi2s, &b_myX5Py1423Ypsi2s);
   fChain->SetBranchAddress("myX5Pz1423Ypsi2s", &myX5Pz1423Ypsi2s, &b_myX5Pz1423Ypsi2s);
   fChain->SetBranchAddress("myX5M1423Ypsi2s", &myX5M1423Ypsi2s, &b_myX5M1423Ypsi2s);
   fChain->SetBranchAddress("myX6Px1423Ypsi2s", &myX6Px1423Ypsi2s, &b_myX6Px1423Ypsi2s);
   fChain->SetBranchAddress("myX6Py1423Ypsi2s", &myX6Py1423Ypsi2s, &b_myX6Py1423Ypsi2s);
   fChain->SetBranchAddress("myX6Pz1423Ypsi2s", &myX6Pz1423Ypsi2s, &b_myX6Pz1423Ypsi2s);
   fChain->SetBranchAddress("myX6M1423Ypsi2s", &myX6M1423Ypsi2s, &b_myX6M1423Ypsi2s);
   fChain->SetBranchAddress("my4muVtxCL1234Y12mumu", &my4muVtxCL1234Y12mumu, &b_my4muVtxCL1234Y12mumu);
   fChain->SetBranchAddress("myX1Px1234Y12mumu", &myX1Px1234Y12mumu, &b_myX1Px1234Y12mumu);
   fChain->SetBranchAddress("myX1Py1234Y12mumu", &myX1Py1234Y12mumu, &b_myX1Py1234Y12mumu);
   fChain->SetBranchAddress("myX1Pz1234Y12mumu", &myX1Pz1234Y12mumu, &b_myX1Pz1234Y12mumu);
   fChain->SetBranchAddress("myX1M1234Y12mumu", &myX1M1234Y12mumu, &b_myX1M1234Y12mumu);
   fChain->SetBranchAddress("myX2Px1234Y12mumu", &myX2Px1234Y12mumu, &b_myX2Px1234Y12mumu);
   fChain->SetBranchAddress("myX2Py1234Y12mumu", &myX2Py1234Y12mumu, &b_myX2Py1234Y12mumu);
   fChain->SetBranchAddress("myX2Pz1234Y12mumu", &myX2Pz1234Y12mumu, &b_myX2Pz1234Y12mumu);
   fChain->SetBranchAddress("myX2M1234Y12mumu", &myX2M1234Y12mumu, &b_myX2M1234Y12mumu);
   fChain->SetBranchAddress("my4muVtxCL1324Y13mumu", &my4muVtxCL1324Y13mumu, &b_my4muVtxCL1324Y13mumu);
   fChain->SetBranchAddress("myX3Px1324Y13mumu", &myX3Px1324Y13mumu, &b_myX3Px1324Y13mumu);
   fChain->SetBranchAddress("myX3Py1324Y13mumu", &myX3Py1324Y13mumu, &b_myX3Py1324Y13mumu);
   fChain->SetBranchAddress("myX3Pz1324Y13mumu", &myX3Pz1324Y13mumu, &b_myX3Pz1324Y13mumu);
   fChain->SetBranchAddress("myX3M1324Y13mumu", &myX3M1324Y13mumu, &b_myX3M1324Y13mumu);
   fChain->SetBranchAddress("myX4Px1324Y13mumu", &myX4Px1324Y13mumu, &b_myX4Px1324Y13mumu);
   fChain->SetBranchAddress("myX4Py1324Y13mumu", &myX4Py1324Y13mumu, &b_myX4Py1324Y13mumu);
   fChain->SetBranchAddress("myX4Pz1324Y13mumu", &myX4Pz1324Y13mumu, &b_myX4Pz1324Y13mumu);
   fChain->SetBranchAddress("myX4M1324Y13mumu", &myX4M1324Y13mumu, &b_myX4M1324Y13mumu);
   fChain->SetBranchAddress("my4muVtxCL1423Y14mumu", &my4muVtxCL1423Y14mumu, &b_my4muVtxCL1423Y14mumu);
   fChain->SetBranchAddress("myX5Px1423Y14mumu", &myX5Px1423Y14mumu, &b_myX5Px1423Y14mumu);
   fChain->SetBranchAddress("myX5Py1423Y14mumu", &myX5Py1423Y14mumu, &b_myX5Py1423Y14mumu);
   fChain->SetBranchAddress("myX5Pz1423Y14mumu", &myX5Pz1423Y14mumu, &b_myX5Pz1423Y14mumu);
   fChain->SetBranchAddress("myX5M1423Y14mumu", &myX5M1423Y14mumu, &b_myX5M1423Y14mumu);
   fChain->SetBranchAddress("myX6Px1423Y14mumu", &myX6Px1423Y14mumu, &b_myX6Px1423Y14mumu);
   fChain->SetBranchAddress("myX6Py1423Y14mumu", &myX6Py1423Y14mumu, &b_myX6Py1423Y14mumu);
   fChain->SetBranchAddress("myX6Pz1423Y14mumu", &myX6Pz1423Y14mumu, &b_myX6Pz1423Y14mumu);
   fChain->SetBranchAddress("myX6M1423Y14mumu", &myX6M1423Y14mumu, &b_myX6M1423Y14mumu);
   fChain->SetBranchAddress("my4muVtxCL1234Y34mumu", &my4muVtxCL1234Y34mumu, &b_my4muVtxCL1234Y34mumu);
   fChain->SetBranchAddress("myX1Px1234Y34mumu", &myX1Px1234Y34mumu, &b_myX1Px1234Y34mumu);
   fChain->SetBranchAddress("myX1Py1234Y34mumu", &myX1Py1234Y34mumu, &b_myX1Py1234Y34mumu);
   fChain->SetBranchAddress("myX1Pz1234Y34mumu", &myX1Pz1234Y34mumu, &b_myX1Pz1234Y34mumu);
   fChain->SetBranchAddress("myX1M1234Y34mumu", &myX1M1234Y34mumu, &b_myX1M1234Y34mumu);
   fChain->SetBranchAddress("myX2Px1234Y34mumu", &myX2Px1234Y34mumu, &b_myX2Px1234Y34mumu);
   fChain->SetBranchAddress("myX2Py1234Y34mumu", &myX2Py1234Y34mumu, &b_myX2Py1234Y34mumu);
   fChain->SetBranchAddress("myX2Pz1234Y34mumu", &myX2Pz1234Y34mumu, &b_myX2Pz1234Y34mumu);
   fChain->SetBranchAddress("myX2M1234Y34mumu", &myX2M1234Y34mumu, &b_myX2M1234Y34mumu);
   fChain->SetBranchAddress("my4muVtxCL1324Y24mumu", &my4muVtxCL1324Y24mumu, &b_my4muVtxCL1324Y24mumu);
   fChain->SetBranchAddress("myX3Px1324Y24mumu", &myX3Px1324Y24mumu, &b_myX3Px1324Y24mumu);
   fChain->SetBranchAddress("myX3Py1324Y24mumu", &myX3Py1324Y24mumu, &b_myX3Py1324Y24mumu);
   fChain->SetBranchAddress("myX3Pz1324Y24mumu", &myX3Pz1324Y24mumu, &b_myX3Pz1324Y24mumu);
   fChain->SetBranchAddress("myX3M1324Y24mumu", &myX3M1324Y24mumu, &b_myX3M1324Y24mumu);
   fChain->SetBranchAddress("myX4Px1324Y24mumu", &myX4Px1324Y24mumu, &b_myX4Px1324Y24mumu);
   fChain->SetBranchAddress("myX4Py1324Y24mumu", &myX4Py1324Y24mumu, &b_myX4Py1324Y24mumu);
   fChain->SetBranchAddress("myX4Pz1324Y24mumu", &myX4Pz1324Y24mumu, &b_myX4Pz1324Y24mumu);
   fChain->SetBranchAddress("myX4M1324Y24mumu", &myX4M1324Y24mumu, &b_myX4M1324Y24mumu);
   fChain->SetBranchAddress("my4muVtxCL1423Y23mumu", &my4muVtxCL1423Y23mumu, &b_my4muVtxCL1423Y23mumu);
   fChain->SetBranchAddress("myX5Px1423Y23mumu", &myX5Px1423Y23mumu, &b_myX5Px1423Y23mumu);
   fChain->SetBranchAddress("myX5Py1423Y23mumu", &myX5Py1423Y23mumu, &b_myX5Py1423Y23mumu);
   fChain->SetBranchAddress("myX5Pz1423Y23mumu", &myX5Pz1423Y23mumu, &b_myX5Pz1423Y23mumu);
   fChain->SetBranchAddress("myX5M1423Y23mumu", &myX5M1423Y23mumu, &b_myX5M1423Y23mumu);
   fChain->SetBranchAddress("myX6Px1423Y23mumu", &myX6Px1423Y23mumu, &b_myX6Px1423Y23mumu);
   fChain->SetBranchAddress("myX6Py1423Y23mumu", &myX6Py1423Y23mumu, &b_myX6Py1423Y23mumu);
   fChain->SetBranchAddress("myX6Pz1423Y23mumu", &myX6Pz1423Y23mumu, &b_myX6Pz1423Y23mumu);
   fChain->SetBranchAddress("myX6M1423Y23mumu", &myX6M1423Y23mumu, &b_myX6M1423Y23mumu);
   fChain->SetBranchAddress("my4muVtxCL1234J12mumu", &my4muVtxCL1234J12mumu, &b_my4muVtxCL1234J12mumu);
   fChain->SetBranchAddress("myX1Px1234J12mumu", &myX1Px1234J12mumu, &b_myX1Px1234J12mumu);
   fChain->SetBranchAddress("myX1Py1234J12mumu", &myX1Py1234J12mumu, &b_myX1Py1234J12mumu);
   fChain->SetBranchAddress("myX1Pz1234J12mumu", &myX1Pz1234J12mumu, &b_myX1Pz1234J12mumu);
   fChain->SetBranchAddress("myX1M1234J12mumu", &myX1M1234J12mumu, &b_myX1M1234J12mumu);
   fChain->SetBranchAddress("myX2Px1234J12mumu", &myX2Px1234J12mumu, &b_myX2Px1234J12mumu);
   fChain->SetBranchAddress("myX2Py1234J12mumu", &myX2Py1234J12mumu, &b_myX2Py1234J12mumu);
   fChain->SetBranchAddress("myX2Pz1234J12mumu", &myX2Pz1234J12mumu, &b_myX2Pz1234J12mumu);
   fChain->SetBranchAddress("myX2M1234J12mumu", &myX2M1234J12mumu, &b_myX2M1234J12mumu);
   fChain->SetBranchAddress("my4muVtxCL1324J13mumu", &my4muVtxCL1324J13mumu, &b_my4muVtxCL1324J13mumu);
   fChain->SetBranchAddress("myX3Px1324J13mumu", &myX3Px1324J13mumu, &b_myX3Px1324J13mumu);
   fChain->SetBranchAddress("myX3Py1324J13mumu", &myX3Py1324J13mumu, &b_myX3Py1324J13mumu);
   fChain->SetBranchAddress("myX3Pz1324J13mumu", &myX3Pz1324J13mumu, &b_myX3Pz1324J13mumu);
   fChain->SetBranchAddress("myX3M1324J13mumu", &myX3M1324J13mumu, &b_myX3M1324J13mumu);
   fChain->SetBranchAddress("myX4Px1324J13mumu", &myX4Px1324J13mumu, &b_myX4Px1324J13mumu);
   fChain->SetBranchAddress("myX4Py1324J13mumu", &myX4Py1324J13mumu, &b_myX4Py1324J13mumu);
   fChain->SetBranchAddress("myX4Pz1324J13mumu", &myX4Pz1324J13mumu, &b_myX4Pz1324J13mumu);
   fChain->SetBranchAddress("myX4M1324J13mumu", &myX4M1324J13mumu, &b_myX4M1324J13mumu);
   fChain->SetBranchAddress("my4muVtxCL1423J14mumu", &my4muVtxCL1423J14mumu, &b_my4muVtxCL1423J14mumu);
   fChain->SetBranchAddress("myX5Px1423J14mumu", &myX5Px1423J14mumu, &b_myX5Px1423J14mumu);
   fChain->SetBranchAddress("myX5Py1423J14mumu", &myX5Py1423J14mumu, &b_myX5Py1423J14mumu);
   fChain->SetBranchAddress("myX5Pz1423J14mumu", &myX5Pz1423J14mumu, &b_myX5Pz1423J14mumu);
   fChain->SetBranchAddress("myX5M1423J14mumu", &myX5M1423J14mumu, &b_myX5M1423J14mumu);
   fChain->SetBranchAddress("myX6Px1423J14mumu", &myX6Px1423J14mumu, &b_myX6Px1423J14mumu);
   fChain->SetBranchAddress("myX6Py1423J14mumu", &myX6Py1423J14mumu, &b_myX6Py1423J14mumu);
   fChain->SetBranchAddress("myX6Pz1423J14mumu", &myX6Pz1423J14mumu, &b_myX6Pz1423J14mumu);
   fChain->SetBranchAddress("myX6M1423J14mumu", &myX6M1423J14mumu, &b_myX6M1423J14mumu);
   fChain->SetBranchAddress("my4muVtxCL1234J34mumu", &my4muVtxCL1234J34mumu, &b_my4muVtxCL1234J34mumu);
   fChain->SetBranchAddress("myX1Px1234J34mumu", &myX1Px1234J34mumu, &b_myX1Px1234J34mumu);
   fChain->SetBranchAddress("myX1Py1234J34mumu", &myX1Py1234J34mumu, &b_myX1Py1234J34mumu);
   fChain->SetBranchAddress("myX1Pz1234J34mumu", &myX1Pz1234J34mumu, &b_myX1Pz1234J34mumu);
   fChain->SetBranchAddress("myX1M1234J34mumu", &myX1M1234J34mumu, &b_myX1M1234J34mumu);
   fChain->SetBranchAddress("myX2Px1234J34mumu", &myX2Px1234J34mumu, &b_myX2Px1234J34mumu);
   fChain->SetBranchAddress("myX2Py1234J34mumu", &myX2Py1234J34mumu, &b_myX2Py1234J34mumu);
   fChain->SetBranchAddress("myX2Pz1234J34mumu", &myX2Pz1234J34mumu, &b_myX2Pz1234J34mumu);
   fChain->SetBranchAddress("myX2M1234J34mumu", &myX2M1234J34mumu, &b_myX2M1234J34mumu);
   fChain->SetBranchAddress("my4muVtxCL1324J24mumu", &my4muVtxCL1324J24mumu, &b_my4muVtxCL1324J24mumu);
   fChain->SetBranchAddress("myX3Px1324J24mumu", &myX3Px1324J24mumu, &b_myX3Px1324J24mumu);
   fChain->SetBranchAddress("myX3Py1324J24mumu", &myX3Py1324J24mumu, &b_myX3Py1324J24mumu);
   fChain->SetBranchAddress("myX3Pz1324J24mumu", &myX3Pz1324J24mumu, &b_myX3Pz1324J24mumu);
   fChain->SetBranchAddress("myX3M1324J24mumu", &myX3M1324J24mumu, &b_myX3M1324J24mumu);
   fChain->SetBranchAddress("myX4Px1324J24mumu", &myX4Px1324J24mumu, &b_myX4Px1324J24mumu);
   fChain->SetBranchAddress("myX4Py1324J24mumu", &myX4Py1324J24mumu, &b_myX4Py1324J24mumu);
   fChain->SetBranchAddress("myX4Pz1324J24mumu", &myX4Pz1324J24mumu, &b_myX4Pz1324J24mumu);
   fChain->SetBranchAddress("myX4M1324J24mumu", &myX4M1324J24mumu, &b_myX4M1324J24mumu);
   fChain->SetBranchAddress("my4muVtxCL1423J23mumu", &my4muVtxCL1423J23mumu, &b_my4muVtxCL1423J23mumu);
   fChain->SetBranchAddress("myX5Px1423J23mumu", &myX5Px1423J23mumu, &b_myX5Px1423J23mumu);
   fChain->SetBranchAddress("myX5Py1423J23mumu", &myX5Py1423J23mumu, &b_myX5Py1423J23mumu);
   fChain->SetBranchAddress("myX5Pz1423J23mumu", &myX5Pz1423J23mumu, &b_myX5Pz1423J23mumu);
   fChain->SetBranchAddress("myX5M1423J23mumu", &myX5M1423J23mumu, &b_myX5M1423J23mumu);
   fChain->SetBranchAddress("myX6Px1423J23mumu", &myX6Px1423J23mumu, &b_myX6Px1423J23mumu);
   fChain->SetBranchAddress("myX6Py1423J23mumu", &myX6Py1423J23mumu, &b_myX6Py1423J23mumu);
   fChain->SetBranchAddress("myX6Pz1423J23mumu", &myX6Pz1423J23mumu, &b_myX6Pz1423J23mumu);
   fChain->SetBranchAddress("myX6M1423J23mumu", &myX6M1423J23mumu, &b_myX6M1423J23mumu);
   Notify();
}

Bool_t myntuple::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void myntuple::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t myntuple::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef myntuple_cxx

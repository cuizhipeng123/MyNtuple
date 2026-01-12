void runJobs_0()
 {
	 gSystem->Load("myntuple_C.so");
//	 TChain * chain = new TChain("X_data","");
       TChain * chain = new TChain("/mkcands/X_data","");




//chain->Add("/home/storage0/users/llchen/dataMINI/Run3/ReReco2023/2023Dv1/ParkingDoubleMuonLowMass0/mymultilep_*100.root");
//chain->Add("/home/storage0/users/llchen/dataMINI/Run3/ReReco2022/2022C/ParkingDoubleMuonLowMass0/mymultilep_10*.root");
chain->Add("/home/storage0/users/llchen/dataMINI/Run3/ReReco2022/2022C/ParkingDoubleMuonLowMass0/mymultilep_965.root");


	 myntuple a(chain);
	 a.Loop("output_0.root");

 }

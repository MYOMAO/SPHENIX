// vim:set ts=4 sw=4 fdm=marker et:
using namespace std;

#ifndef _DNTUPLE_H_
#define _DNTUPLE_H_
#include "format.h"

class DntupleBranches

{//{{{
	public:
		//EvtInfo
		int     RunNo;
		int     EvtNo;
		int     LumiNo;
		int     Dsize;
		float   PVx;
		float   PVy;
		float   PVz;
		float   PVxE;
		float   PVyE;
		float   PVzE;
		float   PVnchi2;
		float   PVchi2;
		float   BSx;
		float   BSy;
		float   BSz;
		float   BSxErr;
		float   BSyErr;
		float   BSzErr;
		float   BSdxdz;
		float   BSdydz;
		float   BSdxdzErr;
		float   BSdydzErr;
		float   BSWidthX;
		float   BSWidthXErr;
		float   BSWidthY;
		float   BSWidthYErr;
		//DInfo
		int     Dindex[MAX_XB];
		int     Dtype[MAX_XB];
		float   Dmass[MAX_XB];
		float   D_unfitted_mass[MAX_XB];
		float   Dpt[MAX_XB];
		float   D_unfitted_pt[MAX_XB];
		float   Deta[MAX_XB];
		float   Dphi[MAX_XB];
		float   Dy[MAX_XB];
		float   DvtxX[MAX_XB];
		float   DvtxY[MAX_XB];
		float   DvtxZ[MAX_XB];
		float   Dd0[MAX_XB];
		float   Dd0Err[MAX_XB];
		float   Ddxyz[MAX_XB];
		float   DdxyzErr[MAX_XB];
		float   Dchi2ndf[MAX_XB];
		float   Dchi2cl[MAX_XB];
		float   Ddtheta[MAX_XB];
		float   Dlxy[MAX_XB];
		float   Dalpha[MAX_XB];
		float   DsvpvDistance[MAX_XB];
		float   DsvpvDisErr[MAX_XB];
		float   DsvpvDistance_2D[MAX_XB];
		float   DsvpvDisErr_2D[MAX_XB];
		float   Ddca[MAX_XB];
		float   DlxyBS[MAX_XB];
		float   DlxyBSErr[MAX_XB];
		float   DMaxDoca[MAX_XB];
		float   DMaxTkPt[MAX_XB];
		float   DMinTkPt[MAX_XB];

		//DInfo.trkInfo
		float   Dtrk1Pt[MAX_XB];
		float   Dtrk2Pt[MAX_XB];
		float   Dtrk3Pt[MAX_XB];
		float   Dtrk4Pt[MAX_XB];
		float   Dtrk1PtErr[MAX_XB];
		float   Dtrk2PtErr[MAX_XB];
		float   Dtrk3PtErr[MAX_XB];
		float   Dtrk4PtErr[MAX_XB];
		float   Dtrk1Eta[MAX_XB];
		float   Dtrk2Eta[MAX_XB];
		float   Dtrk3Eta[MAX_XB];
		float   Dtrk4Eta[MAX_XB];
		float   Dtrk1Phi[MAX_XB];
		float   Dtrk2Phi[MAX_XB];
		float   Dtrk3Phi[MAX_XB];
		float   Dtrk4Phi[MAX_XB];
		float   Dtrk1P[MAX_XB];
		float   Dtrk2P[MAX_XB];
		float   Dtrk3P[MAX_XB];
		float   Dtrk4P[MAX_XB];
		float   Dtrk1Y[MAX_XB];
		float   Dtrk2Y[MAX_XB];
		float   Dtrk3Y[MAX_XB];
		float   Dtrk4Y[MAX_XB];
		float   Dtrk1MassHypo[MAX_XB];
		float   Dtrk2MassHypo[MAX_XB];
		float   Dtrk3MassHypo[MAX_XB];
		float   Dtrk4MassHypo[MAX_XB];
		float   Dtrk1Dz[MAX_XB];
		float   Dtrk2Dz[MAX_XB];
		float   Dtrk3Dz[MAX_XB];
		float   Dtrk4Dz[MAX_XB];
		float   Dtrk1Dxy[MAX_XB];
		float   Dtrk2Dxy[MAX_XB];
		float   Dtrk3Dxy[MAX_XB];
		float   Dtrk4Dxy[MAX_XB];
		float   Dtrk1D0[MAX_XB];
		float   Dtrk2D0[MAX_XB];
		float   Dtrk3D0[MAX_XB];
		float   Dtrk4D0[MAX_XB];
		float   Dtrk1D0Err[MAX_XB];
		float   Dtrk2D0Err[MAX_XB];
		float   Dtrk3D0Err[MAX_XB];
		float   Dtrk4D0Err[MAX_XB];
		int     Dtrk1originalAlgo[MAX_XB];
		int     Dtrk2originalAlgo[MAX_XB];
		int     Dtrk3originalAlgo[MAX_XB];
		int     Dtrk4originalAlgo[MAX_XB];
		bool    Dtrk1highPurity[MAX_XB];
		bool    Dtrk2highPurity[MAX_XB];
		bool    Dtrk3highPurity[MAX_XB];
		bool    Dtrk4highPurity[MAX_XB];
		int     Dtrk1Quality[MAX_XB];
		int     Dtrk2Quality[MAX_XB];
		int     Dtrk3Quality[MAX_XB];
		int     Dtrk4Quality[MAX_XB];
		float   Dtrk1dedx[MAX_XB];
		float   Dtrk2dedx[MAX_XB];
		float   Dtrk3dedx[MAX_XB];
		float   Dtrk4dedx[MAX_XB];
		float   Dtrk1thetastar[MAX_XB];
		float   Dtrk2thetastar[MAX_XB];
		float   Dtrk3thetastar[MAX_XB];
		float   Dtrk4thetastar[MAX_XB];
		float   Dtrk1thetastar_uf[MAX_XB];
		float   Dtrk2thetastar_uf[MAX_XB];
		float   Dtrk3thetastar_uf[MAX_XB];
		float   Dtrk4thetastar_uf[MAX_XB];

		// Additional DInfo.trkInfo
		int     Dtrk1Idx[MAX_XB];
		int     Dtrk2Idx[MAX_XB];
		int     Dtrk3Idx[MAX_XB];
		int     Dtrk4Idx[MAX_XB];
		float   Dtrk1EtaErr[MAX_XB];
		float   Dtrk2EtaErr[MAX_XB];
		float   Dtrk3EtaErr[MAX_XB];
		float   Dtrk4EtaErr[MAX_XB];
		float   Dtrk1PhiErr[MAX_XB];
		float   Dtrk2PhiErr[MAX_XB];
		float   Dtrk3PhiErr[MAX_XB];
		float   Dtrk4PhiErr[MAX_XB];
		float   Dtrk1PixelHit[MAX_XB];
		float   Dtrk2PixelHit[MAX_XB];
		float   Dtrk3PixelHit[MAX_XB];
		float   Dtrk4PixelHit[MAX_XB];
		float   Dtrk1StripHit[MAX_XB];
		float   Dtrk2StripHit[MAX_XB];
		float   Dtrk3StripHit[MAX_XB];
		float   Dtrk4StripHit[MAX_XB];
		float   Dtrk1nStripLayer[MAX_XB];
		float   Dtrk2nStripLayer[MAX_XB];
		float   Dtrk3nStripLayer[MAX_XB];
		float   Dtrk4nStripLayer[MAX_XB];
		float   Dtrk1nPixelLayer[MAX_XB];
		float   Dtrk2nPixelLayer[MAX_XB];
		float   Dtrk3nPixelLayer[MAX_XB];
		float   Dtrk4nPixelLayer[MAX_XB];
		float   Dtrk1Chi2ndf[MAX_XB];
		float   Dtrk2Chi2ndf[MAX_XB];
		float   Dtrk3Chi2ndf[MAX_XB];
		float   Dtrk4Chi2ndf[MAX_XB];
		float   Dtrk1MVAVal[MAX_XB];
		float   Dtrk2MVAVal[MAX_XB];
		float   Dtrk3MVAVal[MAX_XB];
		float   Dtrk4MVAVal[MAX_XB];
		int     Dtrk1Algo[MAX_XB];
		int     Dtrk2Algo[MAX_XB];
		int     Dtrk3Algo[MAX_XB];
		int     Dtrk4Algo[MAX_XB];

		//DInfo.tktkResInfo
		float   DtktkResmass[MAX_XB];
		float   DtktkRes_unfitted_mass[MAX_XB];
		float   DtktkRespt[MAX_XB];
		float   DtktkRes_unfitted_pt[MAX_XB];
		float   DtktkReseta[MAX_XB];
		float   DtktkResphi[MAX_XB];
		float   DtktkRes_chi2ndf[MAX_XB];
		float   DtktkRes_chi2cl[MAX_XB];
		float   DtktkRes_alpha[MAX_XB];
		float   DtktkRes_alphaToSV[MAX_XB];
		float   DtktkRes_svpvDistance[MAX_XB];
		float   DtktkRes_svpvDisErr[MAX_XB];
		float   DtktkRes_svpvDistanceToSV[MAX_XB];
		float   DtktkRes_svpvDisErrToSV[MAX_XB];
		float   DtktkRes_dca[MAX_XB];
		float   DtktkRes_dcaToSV[MAX_XB];
		float   DtktkRes_lxyBS[MAX_XB];
		float   DtktkRes_lxyBSErr[MAX_XB];
		float   DtktkRes_angleToTrk1[MAX_XB];
		float   DtktkRes_unfitted_angleToTrk1[MAX_XB];
		float   DtktkRes_ptAsymToTrk1[MAX_XB];
		float   DtktkRes_unfitter_ptAsymToTrk1[MAX_XB];

		//DInfo.RestrkInfo
		float   DRestrk1Pt[MAX_XB];
		float   DRestrk2Pt[MAX_XB];
		float   DRestrk3Pt[MAX_XB];
		float   DRestrk4Pt[MAX_XB];
		float   DRestrk1PtErr[MAX_XB];
		float   DRestrk2PtErr[MAX_XB];
		float   DRestrk3PtErr[MAX_XB];
		float   DRestrk4PtErr[MAX_XB];
		float   DRestrk1Eta[MAX_XB];
		float   DRestrk2Eta[MAX_XB];
		float   DRestrk3Eta[MAX_XB];
		float   DRestrk4Eta[MAX_XB];
		float   DRestrk1Phi[MAX_XB];
		float   DRestrk2Phi[MAX_XB];
		float   DRestrk3Phi[MAX_XB];
		float   DRestrk4Phi[MAX_XB];
		float   DRestrk1P[MAX_XB];
		float   DRestrk2P[MAX_XB];
		float   DRestrk3P[MAX_XB];
		float   DRestrk4P[MAX_XB];
		float   DRestrk1Y[MAX_XB];
		float   DRestrk2Y[MAX_XB];
		float   DRestrk3Y[MAX_XB];
		float   DRestrk4Y[MAX_XB];
		float   DRestrk1MassHypo[MAX_XB];
		float   DRestrk2MassHypo[MAX_XB];
		float   DRestrk3MassHypo[MAX_XB];
		float   DRestrk4MassHypo[MAX_XB];
		float   DRestrk1Dz[MAX_XB];
		float   DRestrk2Dz[MAX_XB];
		float   DRestrk3Dz[MAX_XB];
		float   DRestrk4Dz[MAX_XB];
		float   DRestrk1Dxy[MAX_XB];
		float   DRestrk2Dxy[MAX_XB];
		float   DRestrk3Dxy[MAX_XB];
		float   DRestrk4Dxy[MAX_XB];
		float   DRestrk1D0[MAX_XB];
		float   DRestrk2D0[MAX_XB];
		float   DRestrk3D0[MAX_XB];
		float   DRestrk4D0[MAX_XB];
		float   DRestrk1D0Err[MAX_XB];
		float   DRestrk2D0Err[MAX_XB];
		float   DRestrk3D0Err[MAX_XB];
		float   DRestrk4D0Err[MAX_XB];
		int     DRestrk1originalAlgo[MAX_XB];
		int     DRestrk2originalAlgo[MAX_XB];
		int     DRestrk3originalAlgo[MAX_XB];
		int     DRestrk4originalAlgo[MAX_XB];
		bool    DRestrk1highPurity[MAX_XB];
		bool    DRestrk2highPurity[MAX_XB];
		bool    DRestrk3highPurity[MAX_XB];
		bool    DRestrk4highPurity[MAX_XB];
		int     DRestrk1Quality[MAX_XB];
		int     DRestrk2Quality[MAX_XB];
		int     DRestrk3Quality[MAX_XB];
		int     DRestrk4Quality[MAX_XB];
		float   DRestrk1dedx[MAX_XB];
		float   DRestrk2dedx[MAX_XB];
		float   DRestrk3dedx[MAX_XB];
		float   DRestrk4dedx[MAX_XB];
		float   DRestrk1thetastar[MAX_XB];
		float   DRestrk2thetastar[MAX_XB];
		float   DRestrk3thetastar[MAX_XB];
		float   DRestrk4thetastar[MAX_XB];
		float   DRestrk1thetastar_uf[MAX_XB];
		float   DRestrk2thetastar_uf[MAX_XB];
		float   DRestrk3thetastar_uf[MAX_XB];
		float   DRestrk4thetastar_uf[MAX_XB];
		//DInfo.genInfo
		float   Dgen[MAX_XB];
		int     DgennDa[MAX_XB];
		int     DgenIndex[MAX_XB];
		float   Dgenpt[MAX_XB];
		float   Dgeneta[MAX_XB];
		float   Dgenphi[MAX_XB];
		float   Dgeny[MAX_XB];
		int     DgencollisionId[MAX_XB];
		float   DgenBAncestorpt[MAX_XB];
		int     DgenBAncestorpdgId[MAX_XB];
		float   DgenprodvtxX[MAX_XB];
		float   DgenprodvtxY[MAX_XB];
		float   DgenprodvtxZ[MAX_XB];
		float   DgendecayvtxX[MAX_XB];
		float   DgendecayvtxY[MAX_XB];
		float   DgendecayvtxZ[MAX_XB];
		int     DgenfromgenPV[MAX_XB];

		void buildDBranch(TTree* dnt, bool D0kpimode=false, bool detailMode=true)
		{
		
			dnt->Branch("RunNo",&RunNo);
			dnt->Branch("EvtNo",&EvtNo);
			dnt->Branch("LumiNo",&LumiNo);
			dnt->Branch("Dsize",&Dsize);

			//DInfo

			dnt->Branch("Dindex",Dindex,"Dindex[Dsize]/I");
			//   dnt->Branch("Dtype",Dtype,"Dtype[Dsize]/I");
			dnt->Branch("Dmass",Dmass,"Dmass[Dsize]/F");
			dnt->Branch("Dpt",Dpt,"Dpt[Dsize]/F");

			dnt->Branch("Dy",Dy,"Dy[Dsize]/F");
			dnt->Branch("Dchi2cl",Dchi2cl,"Dchi2cl[Dsize]/F");
			dnt->Branch("Dalpha",Dalpha,"Dalpha[Dsize]/F");
			dnt->Branch("DsvpvDistance",DsvpvDistance,"DsvpvDistance[Dsize]/F");
			dnt->Branch("DsvpvDisErr",DsvpvDisErr,"DsvpvDisErr[Dsize]/F");
			dnt->Branch("Dtrk1thetastar",Dtrk1thetastar,"Dtrk1thetastar[Dsize]/F");
			//DInfo.trkInfo
			dnt->Branch("Dtrk1Pt",Dtrk1Pt,"Dtrk1Pt[Dsize]/F");
			dnt->Branch("Dtrk2Pt",Dtrk2Pt,"Dtrk2Pt[Dsize]/F");
			dnt->Branch("Dtrk1D0",Dtrk1D0,"Dtrk1D0[Dsize]/F");
			dnt->Branch("Dtrk2D0",Dtrk2D0,"Dtrk2D0[Dsize]/F"); 
			dnt->Branch("Dgen",Dgen,"Dgen[Dsize]/F");
			dnt->Branch("Dtrk1Eta",Dtrk1Eta,"Dtrk1Eta[Dsize]/F");
			dnt->Branch("Dtrk2Eta",Dtrk2Eta,"Dtrk2Eta[Dsize]/F");

		}

		//GenInfo
		float   GPVx;
		float   GPVy;
		float   GPVz;
		int     Gsize;
		float   Gy[MAX_GEN];
		float   Geta[MAX_GEN];
		float   Gphi[MAX_GEN];
		float   Gpt[MAX_GEN];
		int     GpdgId[MAX_GEN];
		int     GcollisionId[MAX_GEN];
		int     GisSignal[MAX_GEN];
		float   GprodvtxX[MAX_GEN];//gen production vertex
		float   GprodvtxY[MAX_GEN];
		float   GprodvtxZ[MAX_GEN];
		float   GdecayvtxX[MAX_GEN];//gen decay vertex
		float   GdecayvtxY[MAX_GEN];
		float   GdecayvtxZ[MAX_GEN];
		float   GBAncestorpt[MAX_GEN];
		int     GBAncestorpdgId[MAX_GEN];
		int     GfromgenPV[MAX_GEN];
		float   Gtk1pt[MAX_GEN];
		float   Gtk1eta[MAX_GEN];
		float   Gtk1y[MAX_GEN];
		float   Gtk1phi[MAX_GEN];
		float   Gtk2pt[MAX_GEN];
		float   Gtk2eta[MAX_GEN];
		float   Gtk2y[MAX_GEN];
		float   Gtk2phi[MAX_GEN];
		float   Gtk3pt[MAX_GEN];
		float   Gtk3eta[MAX_GEN];
		float   Gtk3y[MAX_GEN];
		float   Gtk3phi[MAX_GEN];
		float   Gtk4pt[MAX_GEN];
		float   Gtk4eta[MAX_GEN];
		float   Gtk4y[MAX_GEN];
		float   Gtk4phi[MAX_GEN];
		float   GRestk1pt[MAX_GEN];
		float   GRestk1eta[MAX_GEN];
		float   GRestk1y[MAX_GEN];
		float   GRestk1phi[MAX_GEN];
		float   GRestk2pt[MAX_GEN];
		float   GRestk2eta[MAX_GEN];
		float   GRestk2y[MAX_GEN];
		float   GRestk2phi[MAX_GEN];
		float   GRestk3pt[MAX_GEN];
		float   GRestk3eta[MAX_GEN];
		float   GRestk3y[MAX_GEN];
		float   GRestk3phi[MAX_GEN];
		float   GRestk4pt[MAX_GEN];
		float   GRestk4eta[MAX_GEN];
		float   GRestk4y[MAX_GEN];
		float   GRestk4phi[MAX_GEN];  

		void buildGenBranch(TTree* nt)
		{
			nt->Branch("GPVx",&GPVx);
			nt->Branch("GPVy",&GPVy);
			nt->Branch("GPVz",&GPVz);
			nt->Branch("Gsize",&Gsize);
			nt->Branch("Gy",Gy,"Gy[Gsize]/F");
			nt->Branch("Geta",Geta,"Geta[Gsize]/F");
			nt->Branch("Gphi",Gphi,"Gphi[Gsize]/F");
			nt->Branch("Gpt",Gpt,"Gpt[Gsize]/F");
			nt->Branch("GpdgId",GpdgId,"GpdgId[Gsize]/I");
			nt->Branch("GcollisionId",GcollisionId,"GcollisionId[Gsize]/I");
			nt->Branch("GisSignal",GisSignal,"GisSignal[Gsize]/I");
			nt->Branch("GBAncestorpt",GBAncestorpt,"GBAncestorpt[Gsize]/F");
			nt->Branch("GBAncestorpdgId",GBAncestorpdgId,"GBAncestorpdgId[Gsize]/I");
			nt->Branch("GfromgenPV",GfromgenPV,"GfromgenPV[Gsize]/I");
			nt->Branch("GprodvtxX",GprodvtxX,"GprodvtxX[Gsize]/F");
			nt->Branch("GprodvtxY",GprodvtxY,"GprodvtxY[Gsize]/F");
			nt->Branch("GprodvtxZ",GprodvtxZ,"GprodvtxZ[Gsize]/F");
			nt->Branch("GdecayvtxX",GdecayvtxX,"GdecayvtxX[Gsize]/F");
			nt->Branch("GdecayvtxY",GdecayvtxY,"GdecayvtxY[Gsize]/F");
			nt->Branch("GdecayvtxZ",GdecayvtxZ,"GdecayvtxZ[Gsize]/F");
			nt->Branch("Gtk1pt",Gtk1pt,"Gtk1pt[Gsize]/F");
			nt->Branch("Gtk1eta",Gtk1eta,"Gtk1eta[Gsize]/F");
			nt->Branch("Gtk1y",Gtk1y,"Gtk1y[Gsize]/F");
			nt->Branch("Gtk1phi",Gtk1phi,"Gtk1phi[Gsize]/F");
			nt->Branch("Gtk2pt",Gtk2pt,"Gtk2pt[Gsize]/F");
			nt->Branch("Gtk2eta",Gtk2eta,"Gtk2eta[Gsize]/F");
			nt->Branch("Gtk2y",Gtk2y,"Gtk2y[Gsize]/F");
			nt->Branch("Gtk2phi",Gtk2phi,"Gtk2phi[Gsize]/F");
			nt->Branch("Gtk3pt",Gtk3pt,"Gtk3pt[Gsize]/F");
			nt->Branch("Gtk3eta",Gtk3eta,"Gtk3eta[Gsize]/F");
			nt->Branch("Gtk3y",Gtk3y,"Gtk3y[Gsize]/F");
			nt->Branch("Gtk3phi",Gtk3phi,"Gtk3phi[Gsize]/F");
			nt->Branch("Gtk4pt",Gtk4pt,"Gtk4pt[Gsize]/F");
			nt->Branch("Gtk4eta",Gtk4eta,"Gtk4eta[Gsize]/F");
			nt->Branch("Gtk4y",Gtk4y,"Gtk4y[Gsize]/F");
			nt->Branch("Gtk4phi",Gtk4phi,"Gtk4phi[Gsize]/F");
			nt->Branch("GRestk1pt",GRestk1pt,"GRestk1pt[Gsize]/F");
			nt->Branch("GRestk1eta",GRestk1eta,"GRestk1eta[Gsize]/F");
			nt->Branch("GRestk1y",GRestk1y,"GRestk1y[Gsize]/F");
			nt->Branch("GRestk1phi",GRestk1phi,"GRestk1phi[Gsize]/F");
			nt->Branch("GRestk2pt",GRestk2pt,"GRestk2pt[Gsize]/F");
			nt->Branch("GRestk2eta",GRestk2eta,"GRestk2eta[Gsize]/F");
			nt->Branch("GRestk2y",GRestk2y,"GRestk2y[Gsize]/F");
			nt->Branch("GRestk2phi",GRestk2phi,"GRestk2phi[Gsize]/F");
			nt->Branch("GRestk3pt",GRestk3pt,"GRestk3pt[Gsize]/F");
			nt->Branch("GRestk3eta",GRestk3eta,"GRestk3eta[Gsize]/F");
			nt->Branch("GRestk3y",GRestk3y,"GRestk3y[Gsize]/F");
			nt->Branch("GRestk3phi",GRestk3phi,"GRestk3phi[Gsize]/F");
			nt->Branch("GRestk4pt",GRestk4pt,"GRestk4pt[Gsize]/F");
			nt->Branch("GRestk4eta",GRestk4eta,"GRestk4eta[Gsize]/F");
			nt->Branch("GRestk4y",GRestk4y,"GRestk4y[Gsize]/F");
			nt->Branch("GRestk4phi",GRestk4phi,"GRestk4phi[Gsize]/F");
		}

		void makeDNtuple(int isDchannel[], int Dtypesize[], bool REAL, bool fillZeroCandEvt, bool skim, EvtInfoBranches *EvtInfo, VtxInfoBranches *VtxInfo, TrackInfoBranches *TrackInfo, DInfoBranches *DInfo, GenInfoBranches *GenInfo, TTree* ntD1, TTree* ntD2, TTree* ntD3, TTree* ntD4, TTree* ntD5, TTree* ntD6, TTree* ntD7)

		{//{{{
			TVector3* bP = new TVector3;
			TVector3* bVtx = new TVector3;
			TLorentzVector* b4P = new TLorentzVector;
			TVector3* boost = new TVector3();
			TVector3* D3Vec = new TVector3();
			fillTreeEvt(EvtInfo);
			bool zeroCand = true;
			for(int t=0;t<14;t++)
			{
				if(t%2==0)
				{
					Dsize = 0;
				}
				if(isDchannel[t]==1)
				{
					for(int j=0;j<DInfo->size;j++)
					{
						b4P->SetPtEtaPhiM(DInfo->pt[j],DInfo->eta[j],DInfo->phi[j],DInfo->mass[j]);
						if(skim)
						{
							if(DInfo->pt[j]>1)continue;
							if(DInfo->pt[j]<0.5)continue;

							if(DInfo->pt[j]<1 && DInfo->pt[j]> 0.5 ){

								//if(((xDtrk1dedx - (3.167900 + TMath::Exp(-5.559714*xDtrk1P) * (67.638309+-104.172529*xDtrk1P+-46.837944*xDtrk1P*xDtrk1P+224.708977*xDtrk1P*xDtrk1P*xDtrk1P+ -97.664217*xDtrk1P*xDtrk1P*xDtrk1P*xDtrk1P)) > 0.5) && (xDtrk2dedx - (3.224272 + TMath::Exp(-6.791927*xDtrk2P) *(132.629856+-384.452748*xDtrk2P+96.914685*xDtrk2P*xDtrk2P+963.786242*xDtrk2P*xDtrk2P*xDtrk2P+-827.656091*xDtrk2P*xDtrk2P*xDtrk2P*xDtrk2P)) < -0.3)) || ((xDtrk1dedx - (3.167900 + TMath::Exp(-5.559714*xDtrk1P) * (67.638309+-104.172529*xDtrk1P+-46.837944*xDtrk1P*xDtrk1P+224.708977*xDtrk1P*xDtrk1P*xDtrk1P+ -97.664217*xDtrk1P*xDtrk1P*xDtrk1P*xDtrk1P)) < -0.5) && (xDtrk2dedx - (3.224272 + TMath::Exp(-6.791927*xDtrk2P) *(132.629856+-384.452748*xDtrk2P+96.914685*xDtrk2P*xDtrk2P+963.786242*xDtrk2P*xDtrk2P*xDtrk2P+-827.656091*xDtrk2P*xDtrk2P*xDtrk2P*xDtrk2P)) > 0.3))) continue;
								if(fabs(b4P->Rapidity())>2.0) continue;
								if(fabs(TrackInfo->eta[DInfo->rftk1_index[j]])>2.0) continue;
								if(fabs(TrackInfo->eta[DInfo->rftk2_index[j]])>2.0) continue;
								if(TrackInfo->pt[DInfo->rftk1_index[j]]<7.9411092958009577e-01) continue;
								if(TrackInfo->pt[DInfo->rftk2_index[j]]<3.8972126135143670e-01) continue;
								if((DInfo->svpvDistance[j]/DInfo->svpvDisErr[j])< 5.5315170983477921e-02) continue;
								if(DInfo->svpvDistance[j]*TMath::Sin(DInfo->alpha[j])>2.9960421397116938e-02) continue;
								if(TMath::Prob(DInfo->vtxchi2[j],DInfo->vtxdof[j]) < 5.3553525199870847e-02) continue;

							}

						}
						if(DInfo->type[j]==(t+1))
						{
							fillDTree(bP,bVtx,b4P,boost,D3Vec,j,Dtypesize[t/2],REAL,EvtInfo,VtxInfo,TrackInfo,DInfo,GenInfo);
							Dtypesize[t/2]++;
						}
					}
					if(Dtypesize[t/2] != 0) zeroCand = false;
					else continue;
					if(t==1)       ntD1->Fill();
					else if(t==3)  ntD2->Fill();
					else if(t==5)  ntD3->Fill();
					else if(t==7)  ntD4->Fill();
					else if(t==9)  ntD5->Fill();
					else if(t==11) ntD6->Fill();
					else if(t==13) ntD7->Fill();
				}
			}

			Dsize = 0;
			for(int t = 1; t < 14; t+=2)
			{
				if(isDchannel[t]==1 && Dtypesize[t/2]==0)
				{
					if(!zeroCand || fillZeroCandEvt)
					{
						if(t==1)       ntD1->Fill();
						else if(t==3)  ntD2->Fill();
						else if(t==5)  ntD3->Fill();
						else if(t==7)  ntD4->Fill();
						else if(t==9)  ntD5->Fill();
						else if(t==11) ntD6->Fill();
						else if(t==13) ntD7->Fill();
					}
				}
			}

		}//}}}

		void fillDGenTree(TTree* ntGen, GenInfoBranches *GenInfo, bool gskim=true)
		{
			GPVx = GenInfo->genPVx;
			GPVy = GenInfo->genPVy;
			GPVz = GenInfo->genPVz;
			TLorentzVector* bGen = new TLorentzVector;
			int gt=0,sigtype=0;
			int gsize=0;
			int BAncestorindex=-99;
			Gsize = 0;
			for(int j=0;j<GenInfo->size;j++)
			{
				if(TMath::Abs(GenInfo->pdgId[j])!=DZERO_PDGID&&
						TMath::Abs(GenInfo->pdgId[j])!=DPLUS_PDGID&&
						TMath::Abs(GenInfo->pdgId[j])!=DSUBS_PDGID&&
						TMath::Abs(GenInfo->pdgId[j])!=DSTAR_PDGID&& 
						TMath::Abs(GenInfo->pdgId[j])!=BPLUS_PDGID&&gskim) continue;
				Gsize = gsize+1;
				Gpt[gsize] = GenInfo->pt[j];
				Geta[gsize] = GenInfo->eta[j];
				Gphi[gsize] = GenInfo->phi[j];
				GpdgId[gsize] = GenInfo->pdgId[j];
				GcollisionId[gsize] = GenInfo->collisionId[j];
				GprodvtxX[gsize] = GenInfo->vtxX[j];
				GprodvtxY[gsize] = GenInfo->vtxY[j];
				GprodvtxZ[gsize] = GenInfo->vtxZ[j];
				if( fabs(GprodvtxX[gsize]-GPVx) < 0.001 && fabs(GprodvtxY[gsize]-GPVy) < 0.001 && fabs(GprodvtxZ[gsize]-GPVz) < 0.001 )
					GfromgenPV[gsize] = 1;
				else
					GfromgenPV[gsize] = -1;
				bGen->SetPtEtaPhiM(GenInfo->pt[j],GenInfo->eta[j],GenInfo->phi[j],GenInfo->mass[j]);
				Gy[gsize] = bGen->Rapidity();
				sigtype=0;
				for(gt=1;gt<15;gt++)
				{
					if(isDsignalGen(gt,j,GenInfo))
					{
						sigtype=gt;
						break;
					}
				}
				GisSignal[gsize] = sigtype;
				GBAncestorpt[gsize] = -99.;
				GBAncestorpdgId[gsize] = 0;
				BAncestorindex = findBAncestor(j, GenInfo);
				if(BAncestorindex>=0)
				{
					GBAncestorpt[gsize] = GenInfo->pt[BAncestorindex];
					GBAncestorpdgId[gsize] = GenInfo->pdgId[BAncestorindex];
				}
				GdecayvtxX[gsize] = -999;
				GdecayvtxY[gsize] = -999;
				GdecayvtxZ[gsize] = -999;
				Gtk1pt[gsize] = -1;
				Gtk1eta[gsize] = -20;
				Gtk1phi[gsize] = -20;
				Gtk1y[gsize] = -1;
				Gtk2pt[gsize] = -1;
				Gtk2eta[gsize] = -20;
				Gtk2phi[gsize] = -20;
				Gtk2y[gsize] = -1;
				Gtk3pt[gsize] = -1;
				Gtk3eta[gsize] = -20;
				Gtk3phi[gsize] = -20;
				Gtk3y[gsize] = -1;
				Gtk4pt[gsize] = -1;
				Gtk4eta[gsize] = -20;
				Gtk4phi[gsize] = -20;
				Gtk4y[gsize] = -1;
				GRestk1pt[gsize] = -1;
				GRestk1eta[gsize] = -20;
				GRestk1phi[gsize] = -20;
				GRestk1y[gsize] = -1;
				GRestk2pt[gsize] = -1;
				GRestk2eta[gsize] = -20;
				GRestk2phi[gsize] = -20;
				GRestk2y[gsize] = -1;
				GRestk3pt[gsize] = -1;
				GRestk3eta[gsize] = -20;
				GRestk3phi[gsize] = -20;
				GRestk3y[gsize] = -1;
				GRestk4pt[gsize] = -1;
				GRestk4eta[gsize] = -20;
				GRestk4phi[gsize] = -20;
				GRestk4y[gsize] = -1;
				if(GisSignal[gsize]==1||GisSignal[gsize]==2||GisSignal[gsize]==3||GisSignal[gsize]==4||GisSignal[gsize]==5||GisSignal[gsize]==6)
				{
					GdecayvtxX[gsize] = GenInfo->vtxX[GenInfo->da1[j]];//all daughers should be from the same vertex, can be double checked here
					GdecayvtxY[gsize] = GenInfo->vtxY[GenInfo->da1[j]];
					GdecayvtxZ[gsize] = GenInfo->vtxZ[GenInfo->da1[j]];
					Gtk1pt[gsize] = GenInfo->pt[GenInfo->da1[j]];
					Gtk1eta[gsize] = GenInfo->eta[GenInfo->da1[j]];
					Gtk1phi[gsize] = GenInfo->phi[GenInfo->da1[j]];
					bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da1[j]],GenInfo->eta[GenInfo->da1[j]],GenInfo->phi[GenInfo->da1[j]],GenInfo->mass[GenInfo->da1[j]]);
					Gtk1y[gsize] = bGen->Rapidity();
					Gtk2pt[gsize] = GenInfo->pt[GenInfo->da2[j]];
					Gtk2eta[gsize] = GenInfo->eta[GenInfo->da2[j]];
					Gtk2phi[gsize] = GenInfo->phi[GenInfo->da2[j]];
					bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da2[j]],GenInfo->eta[GenInfo->da2[j]],GenInfo->phi[GenInfo->da2[j]],GenInfo->mass[GenInfo->da2[j]]);
					Gtk2y[gsize] = bGen->Rapidity();
					if(GisSignal[gsize]==3||GisSignal[gsize]==4||GisSignal[gsize]==5||GisSignal[gsize]==6)
					{
						Gtk3pt[gsize] = GenInfo->pt[GenInfo->da3[j]];
						Gtk3eta[gsize] = GenInfo->eta[GenInfo->da3[j]];
						Gtk3phi[gsize] = GenInfo->phi[GenInfo->da3[j]];
						bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da3[j]],GenInfo->eta[GenInfo->da3[j]],GenInfo->phi[GenInfo->da3[j]],GenInfo->mass[GenInfo->da3[j]]);
						Gtk3y[gsize] = bGen->Rapidity();
						if(GisSignal[gsize]==5||GisSignal[gsize]==6)
						{
							Gtk4pt[gsize] = GenInfo->pt[GenInfo->da4[j]];
							Gtk4eta[gsize] = GenInfo->eta[GenInfo->da4[j]];
							Gtk4phi[gsize] = GenInfo->phi[GenInfo->da4[j]];
							bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da4[j]],GenInfo->eta[GenInfo->da4[j]],GenInfo->phi[GenInfo->da4[j]],GenInfo->mass[GenInfo->da4[j]]);
							Gtk4y[gsize] = bGen->Rapidity();
						}
					}
				}
				if(GisSignal[gsize]==7||GisSignal[gsize]==8||GisSignal[gsize]==9||GisSignal[gsize]==10||GisSignal[gsize]==11||GisSignal[gsize]==12||GisSignal[gsize]==13||GisSignal[gsize]==14)
				{
					GdecayvtxX[gsize] = GenInfo->vtxX[GenInfo->da1[j]];
					GdecayvtxY[gsize] = GenInfo->vtxY[GenInfo->da1[j]];
					GdecayvtxZ[gsize] = GenInfo->vtxZ[GenInfo->da1[j]];
					Gtk1pt[gsize] = GenInfo->pt[GenInfo->da2[j]];
					Gtk1eta[gsize] = GenInfo->eta[GenInfo->da2[j]];
					Gtk1phi[gsize] = GenInfo->phi[GenInfo->da2[j]];
					bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da2[j]],GenInfo->eta[GenInfo->da2[j]],GenInfo->phi[GenInfo->da2[j]],GenInfo->mass[GenInfo->da2[j]]);
					Gtk1y[gsize] = bGen->Rapidity();
					GRestk1pt[gsize] = GenInfo->pt[GenInfo->da1[GenInfo->da1[j]]];
					GRestk1eta[gsize] = GenInfo->eta[GenInfo->da1[GenInfo->da1[j]]];
					GRestk1phi[gsize] = GenInfo->phi[GenInfo->da1[GenInfo->da1[j]]];
					bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da1[GenInfo->da1[j]]],GenInfo->eta[GenInfo->da1[GenInfo->da1[j]]],GenInfo->phi[GenInfo->da1[GenInfo->da1[j]]],GenInfo->mass[GenInfo->da1[GenInfo->da1[j]]]);
					GRestk1y[gsize] = bGen->Rapidity();
					GRestk2pt[gsize] = GenInfo->pt[GenInfo->da2[GenInfo->da1[j]]];
					GRestk2eta[gsize] = GenInfo->eta[GenInfo->da2[GenInfo->da1[j]]];
					GRestk2phi[gsize] = GenInfo->phi[GenInfo->da2[GenInfo->da1[j]]];
					bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da2[GenInfo->da1[j]]],GenInfo->eta[GenInfo->da2[GenInfo->da1[j]]],GenInfo->phi[GenInfo->da2[GenInfo->da1[j]]],GenInfo->mass[GenInfo->da2[GenInfo->da1[j]]]);
					GRestk2y[gsize] = bGen->Rapidity();
					if(GisSignal[gsize]==11||GisSignal[gsize]==12)
					{
						GRestk3pt[gsize] = GenInfo->pt[GenInfo->da3[GenInfo->da1[j]]];
						GRestk3eta[gsize] = GenInfo->eta[GenInfo->da3[GenInfo->da1[j]]];
						GRestk3phi[gsize] = GenInfo->phi[GenInfo->da3[GenInfo->da1[j]]];
						bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da3[GenInfo->da1[j]]],GenInfo->eta[GenInfo->da3[GenInfo->da1[j]]],GenInfo->phi[GenInfo->da3[GenInfo->da1[j]]],GenInfo->mass[GenInfo->da3[GenInfo->da1[j]]]);
						GRestk3y[gsize] = bGen->Rapidity();
						GRestk4pt[gsize] = GenInfo->pt[GenInfo->da4[GenInfo->da1[j]]];
						GRestk4eta[gsize] = GenInfo->eta[GenInfo->da4[GenInfo->da1[j]]];
						GRestk4phi[gsize] = GenInfo->phi[GenInfo->da4[GenInfo->da1[j]]];
						bGen->SetPtEtaPhiM(GenInfo->pt[GenInfo->da4[GenInfo->da1[j]]],GenInfo->eta[GenInfo->da4[GenInfo->da1[j]]],GenInfo->phi[GenInfo->da4[GenInfo->da1[j]]],GenInfo->mass[GenInfo->da4[GenInfo->da1[j]]]);
						GRestk4y[gsize] = bGen->Rapidity();
					}
				}
				gsize++;
			}
			ntGen->Fill();
		}

		double findMass(int particlePdgId)
		{
			if(TMath::Abs(particlePdgId)==211) return PION_MASS;
			if(TMath::Abs(particlePdgId)==321) return KAON_MASS;
			else
			{
				cout<<"ERROR: find particle mass falied >> Particle pdgId: "<<particlePdgId<<endl;
				return 0;
			}
		}

		int findPdgid(Double_t tkmass)
		{
			if(TMath::Abs(tkmass-KAON_MASS)<0.1) return KAON_PDGID;
			else if(TMath::Abs(tkmass-PION_MASS)<0.1) return PION_PDGID;
			else
			{
				cout<<"ERROR: find particle pdgid falied >> Particle mass: "<<tkmass<<endl;
				return 0;
			}
		}

		void fillTreeEvt(EvtInfoBranches *EvtInfo)
		{
			//Event Info
			RunNo = EvtInfo->RunNo;
			EvtNo = EvtInfo->EvtNo;
			LumiNo = EvtInfo->LumiNo;
			PVx = EvtInfo->PVx;
			PVy = EvtInfo->PVy;
			PVz = EvtInfo->PVz;
			PVxE = EvtInfo->PVxE;
			PVyE = EvtInfo->PVyE;
			PVzE = EvtInfo->PVzE;
			PVnchi2 = EvtInfo->PVnchi2;
			PVchi2 = EvtInfo->PVchi2;
			BSx = EvtInfo->BSx;
			BSy = EvtInfo->BSy;
			BSz = EvtInfo->BSz;
			BSxErr = EvtInfo->BSxErr;
			BSyErr = EvtInfo->BSyErr;
			BSzErr = EvtInfo->BSzErr;
			BSdxdz = EvtInfo->BSdxdz;
			BSdydz = EvtInfo->BSdydz;
			BSdxdzErr = EvtInfo->BSdxdzErr;
			BSdydzErr = EvtInfo->BSdydzErr;
			BSWidthX = EvtInfo->BSWidthX;
			BSWidthXErr = EvtInfo->BSWidthXErr;
			BSWidthY = EvtInfo->BSWidthY;
			BSWidthYErr = EvtInfo->BSWidthYErr;
		}

		void fillDTree(TVector3* bP, TVector3* bVtx, TLorentzVector* b4P, TVector3* boost, TVector3* D3Vec, int j, int typesize, bool REAL, EvtInfoBranches *EvtInfo, VtxInfoBranches *VtxInfo, TrackInfoBranches *TrackInfo, DInfoBranches *DInfo, GenInfoBranches *GenInfo)
		{
			// track four vectors
			TLorentzVector* tk1Vec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* tk2Vec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* tk3Vec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* tk4Vec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* restk1Vec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* restk2Vec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* restk3Vec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* restk4Vec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* resSumVec = new TLorentzVector(0.,0.,0.,0.);
			TLorentzVector* SumVec = new TLorentzVector(0.,0.,0.,0.);

			//EvtInfo
			Dsize = typesize+1;

			//DInfo
			bP->SetPtEtaPhi(DInfo->pt[j],DInfo->eta[j]*0,DInfo->phi[j]);
			bVtx->SetXYZ(DInfo->vtxX[j]-EvtInfo->PVx,
					DInfo->vtxY[j]-EvtInfo->PVy,
					DInfo->vtxZ[j]*0-EvtInfo->PVz*0);
			b4P->SetPtEtaPhiM(DInfo->pt[j],DInfo->eta[j],DInfo->phi[j],DInfo->mass[j]);
			boost->SetXYZ(b4P->BoostVector().X(), b4P->BoostVector().Y(), b4P->BoostVector().Z());
			D3Vec->SetXYZ(b4P->Vect().X(), b4P->Vect().Y(), b4P->Vect().Z());
			Dindex[typesize] = typesize;
			Dtype[typesize] = DInfo->type[j];
			Dmass[typesize] = DInfo->mass[j];
			D_unfitted_mass[typesize] = DInfo->unfitted_mass[j];
			Dpt[typesize] = DInfo->pt[j];
			D_unfitted_pt[typesize] = DInfo->unfitted_pt[j];
			Deta[typesize] = DInfo->eta[j];
			Dphi[typesize] = DInfo->phi[j];
			Dy[typesize] = b4P->Rapidity();
			DvtxX[typesize] = DInfo->vtxX[j] - EvtInfo->PVx;
			DvtxY[typesize] = DInfo->vtxY[j] - EvtInfo->PVy;
			DvtxZ[typesize] = DInfo->vtxZ[j] - EvtInfo->PVz;
			Dd0[typesize] = TMath::Sqrt((DInfo->vtxX[j]-EvtInfo->PVx)*(DInfo->vtxX[j]-EvtInfo->PVx)+(DInfo->vtxY[j]-EvtInfo->PVy)*(DInfo->vtxY[j]-EvtInfo->PVy));
			Dd0Err[typesize] = TMath::Sqrt(DInfo->vtxXErr[j]*DInfo->vtxXErr[j]+DInfo->vtxYErr[j]*DInfo->vtxYErr[j]);
			Ddxyz[typesize] = TMath::Sqrt((DInfo->vtxX[j]-EvtInfo->PVx)*(DInfo->vtxX[j]-EvtInfo->PVx)+(DInfo->vtxY[j]-EvtInfo->PVy)*(DInfo->vtxY[j]-EvtInfo->PVy)+(DInfo->vtxZ[j]-EvtInfo->PVz)*(DInfo->vtxZ[j]-EvtInfo->PVz));
			DdxyzErr[typesize] = TMath::Sqrt(DInfo->vtxXErr[j]*DInfo->vtxXErr[j]+DInfo->vtxYErr[j]*DInfo->vtxYErr[j]+DInfo->vtxZErr[j]*DInfo->vtxZErr[j]);
			Dchi2ndf[typesize] = DInfo->vtxchi2[j]/DInfo->vtxdof[j];
			Dchi2cl[typesize] = TMath::Prob(DInfo->vtxchi2[j],DInfo->vtxdof[j]);
			Ddtheta[typesize] = bP->Angle(*bVtx);
			Dlxy[typesize] = ((DInfo->vtxX[j]-EvtInfo->PVx)*b4P->Px() + (DInfo->vtxY[j]-EvtInfo->PVy)*b4P->Py())/DInfo->pt[j];
			Dalpha[typesize] = DInfo->alpha[j];
			DsvpvDistance[typesize] = DInfo->svpvDistance[j];
			DsvpvDisErr[typesize] = DInfo->svpvDisErr[j];
			DsvpvDistance_2D[typesize] = DInfo->svpvDistance_2D[j];
			DsvpvDisErr_2D[typesize] = DInfo->svpvDisErr_2D[j];
			Ddca[typesize] = DInfo->svpvDistance[j]*TMath::Sin(DInfo->alpha[j]);

			float r2lxyBS = (DInfo->vtxX[j]-EvtInfo->BSx+(DInfo->vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdxdz) * (DInfo->vtxX[j]-EvtInfo->BSx+(DInfo->vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdxdz)
				+ (DInfo->vtxY[j]-EvtInfo->BSy+(DInfo->vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdydz) * (DInfo->vtxY[j]-EvtInfo->BSy+(DInfo->vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdydz);
			float xlxyBS = DInfo->vtxX[j]-EvtInfo->BSx + (DInfo->vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdxdz;
			float ylxyBS = DInfo->vtxY[j]-EvtInfo->BSy + (DInfo->vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdydz;
			DlxyBS[typesize] = TMath::Sqrt(r2lxyBS);
			DlxyBSErr[typesize] = (1./r2lxyBS) * ((xlxyBS*xlxyBS)*DInfo->vtxXErr[j] + (2*xlxyBS*ylxyBS)*DInfo->vtxYXErr[j] + (ylxyBS*ylxyBS)*DInfo->vtxYErr[j]);
			DMaxDoca[typesize] = DInfo->MaxDoca[j];

			//
			DtktkResmass[typesize] = -1;
			DtktkRes_unfitted_mass[typesize] = -1;
			DtktkRespt[typesize] = -1;
			DtktkRes_unfitted_pt[typesize] = -1;
			DtktkReseta[typesize] = -20;
			DtktkResphi[typesize] = -20;
			DtktkRes_chi2ndf[typesize] = -1;
			DtktkRes_chi2cl[typesize] = -1;
			DtktkRes_alpha[typesize] = -1;
			DtktkRes_alphaToSV[typesize] = -1;
			DtktkRes_svpvDistance[typesize] = -1;
			DtktkRes_svpvDisErr[typesize] = -1;
			DtktkRes_svpvDistanceToSV[typesize] = -1;
			DtktkRes_svpvDisErrToSV[typesize] = -1;
			DtktkRes_dca[typesize] = -1;
			DtktkRes_dcaToSV[typesize] = -1;
			DtktkRes_angleToTrk1[typesize] = -1;
			DtktkRes_unfitted_angleToTrk1[typesize] = -1;
			DtktkRes_ptAsymToTrk1[typesize] = -1;
			DtktkRes_unfitter_ptAsymToTrk1[typesize] = -1;
			DtktkRes_lxyBS[typesize] = -1;
			DtktkRes_lxyBSErr[typesize] = -1;

			Dtrk1thetastar[typesize] = -20;
			Dtrk2thetastar[typesize] = -20;
			Dtrk3thetastar[typesize] = -20;
			Dtrk4thetastar[typesize] = -20;
			Dtrk1thetastar_uf[typesize] = -20;
			Dtrk2thetastar_uf[typesize] = -20;
			Dtrk3thetastar_uf[typesize] = -20;
			Dtrk4thetastar_uf[typesize] = -20;

			DRestrk1Pt[typesize] = -1;
			DRestrk1PtErr[typesize] = -1;
			DRestrk1Eta[typesize] = -20;
			DRestrk1Phi[typesize] = -20;
			DRestrk1P[typesize] = -1;
			DRestrk1Y[typesize] = -1;
			DRestrk1MassHypo[typesize] = -1;
			DRestrk1Dz[typesize] = -1;
			DRestrk1Dxy[typesize] = -1;
			DRestrk1D0[typesize] = -1;
			DRestrk1D0Err[typesize] = -1;
			DRestrk1originalAlgo[typesize] = 0;
			DRestrk1highPurity[typesize] = -1;
			DRestrk1Quality[typesize] = -1;
			DRestrk1dedx[typesize] = -20;
			DRestrk1thetastar[typesize] = -20;
			DRestrk1thetastar_uf[typesize] = -20;

			DRestrk2Pt[typesize] = -1;
			DRestrk2PtErr[typesize] = -1;
			DRestrk2Eta[typesize] = -20;
			DRestrk2Phi[typesize] = -20;
			DRestrk2P[typesize] = -1;
			DRestrk2Y[typesize] = -1;
			DRestrk2MassHypo[typesize] = -1;
			DRestrk2Dz[typesize] = -1;
			DRestrk2Dxy[typesize] = -1;
			DRestrk2D0[typesize] = -1;
			DRestrk2D0Err[typesize] = -1;
			DRestrk2originalAlgo[typesize] = 0;
			DRestrk2highPurity[typesize] = -1;
			DRestrk2Quality[typesize] = -1;
			DRestrk2dedx[typesize] = -20;
			DRestrk2thetastar[typesize] = -20;
			DRestrk2thetastar_uf[typesize] = -20;

			DRestrk3Pt[typesize] = -1;
			DRestrk3PtErr[typesize] = -1;
			DRestrk3Eta[typesize] = -20;
			DRestrk3Phi[typesize] = -20;
			DRestrk3P[typesize] = -1;
			DRestrk3Y[typesize] = -1;
			DRestrk3MassHypo[typesize] = -1;
			DRestrk3Dz[typesize] = -1;
			DRestrk3Dxy[typesize] = -1;
			DRestrk3D0[typesize] = -1;
			DRestrk3D0Err[typesize] = -1;
			DRestrk3originalAlgo[typesize] = 0;
			DRestrk3highPurity[typesize] = -1;
			DRestrk3Quality[typesize] = -1;
			DRestrk3dedx[typesize] = -20;
			DRestrk3thetastar[typesize] = -20;
			DRestrk3thetastar_uf[typesize] = -20;

			DRestrk4Pt[typesize] = -1;
			DRestrk4PtErr[typesize] = -1;
			DRestrk4Eta[typesize] = -20;
			DRestrk4Phi[typesize] = -20;
			DRestrk4P[typesize] = -1;
			DRestrk4Y[typesize] = -1;
			DRestrk4MassHypo[typesize] = -1;
			DRestrk4Dz[typesize] = -1;
			DRestrk4Dxy[typesize] = -1;
			DRestrk4D0[typesize] = -1;
			DRestrk4D0Err[typesize] = -1;
			DRestrk4originalAlgo[typesize] = 0;
			DRestrk4highPurity[typesize] = -1;
			DRestrk4Quality[typesize] = -1;
			DRestrk4dedx[typesize] = -20;
			DRestrk4thetastar[typesize] = -20;
			DRestrk4thetastar_uf[typesize] = -20;

			//DInfo.trkInfo
			if(DInfo->type[j]==1||DInfo->type[j]==2||DInfo->type[j]==3||DInfo->type[j]==4||DInfo->type[j]==5||DInfo->type[j]==6)
			{
				Dtrk1Idx[typesize] = DInfo->rftk1_index[j];
				Dtrk1Pt[typesize] = TrackInfo->pt[DInfo->rftk1_index[j]];
				Dtrk1Eta[typesize] = TrackInfo->eta[DInfo->rftk1_index[j]];
				Dtrk1Phi[typesize] = TrackInfo->phi[DInfo->rftk1_index[j]];
				Dtrk1PtErr[typesize] = TrackInfo->ptErr[DInfo->rftk1_index[j]];
				Dtrk1EtaErr[typesize] = TrackInfo->etaErr[DInfo->rftk1_index[j]];
				Dtrk1PhiErr[typesize] = TrackInfo->phiErr[DInfo->rftk1_index[j]];
				tk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk1_index[j]],TrackInfo->eta[DInfo->rftk1_index[j]],TrackInfo->phi[DInfo->rftk1_index[j]],DInfo->rftk1_MassHypo[j]);
				Dtrk1Y[typesize] = tk1Vec->Rapidity();
				Dtrk1P[typesize] = tk1Vec->P();
				tk1Vec->Boost(-*boost);
				Dtrk1thetastar[typesize] = tk1Vec->Angle(*D3Vec);
				tk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk1_index[j]],TrackInfo->eta[DInfo->rftk1_index[j]],TrackInfo->phi[DInfo->rftk1_index[j]],DInfo->rftk1_MassHypo[j]);
				Dtrk1Dz[typesize] = TrackInfo->dzPV[DInfo->rftk1_index[j]];
				Dtrk1Dxy[typesize] = TrackInfo->dxyPV[DInfo->rftk1_index[j]];
				Dtrk1D0[typesize] = TrackInfo->d0[DInfo->rftk1_index[j]];
				Dtrk1D0Err[typesize] = TrackInfo->d0error[DInfo->rftk1_index[j]];
				Dtrk1PixelHit[typesize] = TrackInfo->pixelhit[DInfo->rftk1_index[j]];
				Dtrk1StripHit[typesize] = TrackInfo->striphit[DInfo->rftk1_index[j]];
				Dtrk1nPixelLayer[typesize] = TrackInfo->nPixelLayer[DInfo->rftk1_index[j]];
				Dtrk1nStripLayer[typesize] = TrackInfo->nStripLayer[DInfo->rftk1_index[j]];
				Dtrk1Chi2ndf[typesize] = TrackInfo->chi2[DInfo->rftk1_index[j]]/TrackInfo->ndf[DInfo->rftk1_index[j]];
				Dtrk1MassHypo[typesize] = DInfo->rftk1_MassHypo[j];
				Dtrk1MVAVal[typesize] = TrackInfo->trkMVAVal[DInfo->rftk1_index[j]];
				Dtrk1Algo[typesize] = TrackInfo->trkAlgo[DInfo->rftk1_index[j]];
				Dtrk1originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->rftk1_index[j]];
				Dtrk1highPurity[typesize] = TrackInfo->highPurity[DInfo->rftk1_index[j]];
				Dtrk1Quality[typesize] = TrackInfo->trackQuality[DInfo->rftk1_index[j]];
				Dtrk1dedx[typesize] = TrackInfo->dedx[DInfo->rftk1_index[j]];

				Dtrk2Idx[typesize] = DInfo->rftk2_index[j];
				Dtrk2Pt[typesize] = TrackInfo->pt[DInfo->rftk2_index[j]];
				Dtrk2Eta[typesize] = TrackInfo->eta[DInfo->rftk2_index[j]];
				Dtrk2Phi[typesize] = TrackInfo->phi[DInfo->rftk2_index[j]];
				Dtrk2PtErr[typesize] = TrackInfo->ptErr[DInfo->rftk2_index[j]];
				Dtrk2EtaErr[typesize] = TrackInfo->etaErr[DInfo->rftk2_index[j]];
				Dtrk2PhiErr[typesize] = TrackInfo->phiErr[DInfo->rftk2_index[j]];
				tk2Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk2_index[j]],TrackInfo->eta[DInfo->rftk2_index[j]],TrackInfo->phi[DInfo->rftk2_index[j]],DInfo->rftk2_MassHypo[j]);
				Dtrk2Y[typesize] = tk2Vec->Rapidity();
				Dtrk2P[typesize] = tk2Vec->P();
				tk2Vec->Boost(-*boost);
				Dtrk2thetastar[typesize] = tk2Vec->Angle(*D3Vec);
				tk2Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk2_index[j]],TrackInfo->eta[DInfo->rftk2_index[j]],TrackInfo->phi[DInfo->rftk2_index[j]],DInfo->rftk2_MassHypo[j]);
				Dtrk2Dz[typesize] = TrackInfo->dzPV[DInfo->rftk2_index[j]];
				Dtrk2Dxy[typesize] = TrackInfo->dxyPV[DInfo->rftk2_index[j]];
				Dtrk2D0[typesize] = TrackInfo->d0[DInfo->rftk2_index[j]];
				Dtrk2D0Err[typesize] = TrackInfo->d0error[DInfo->rftk2_index[j]];
				Dtrk2PixelHit[typesize] = TrackInfo->pixelhit[DInfo->rftk2_index[j]];
				Dtrk2StripHit[typesize] = TrackInfo->striphit[DInfo->rftk2_index[j]];
				Dtrk2nPixelLayer[typesize] = TrackInfo->nPixelLayer[DInfo->rftk2_index[j]];
				Dtrk2nStripLayer[typesize] = TrackInfo->nStripLayer[DInfo->rftk2_index[j]];
				Dtrk2Chi2ndf[typesize] = TrackInfo->chi2[DInfo->rftk2_index[j]]/TrackInfo->ndf[DInfo->rftk2_index[j]];
				Dtrk2MassHypo[typesize] = DInfo->rftk2_MassHypo[j];
				Dtrk2MVAVal[typesize] = TrackInfo->trkMVAVal[DInfo->rftk2_index[j]];
				Dtrk2Algo[typesize] = TrackInfo->trkAlgo[DInfo->rftk2_index[j]];
				Dtrk2originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->rftk2_index[j]];
				Dtrk2highPurity[typesize] = TrackInfo->highPurity[DInfo->rftk2_index[j]];
				Dtrk2Quality[typesize] = TrackInfo->trackQuality[DInfo->rftk2_index[j]];
				Dtrk2dedx[typesize] = TrackInfo->dedx[DInfo->rftk2_index[j]];

				if(DInfo->type[j]==1||DInfo->type[j]==2)
				{
					Dtrk3Idx[typesize] = -1;
					Dtrk3Pt[typesize] = -1;
					Dtrk3Eta[typesize] = -20;
					Dtrk3Phi[typesize] = -20;
					Dtrk3P[typesize] = -1;
					Dtrk3PtErr[typesize] = 0;
					Dtrk3EtaErr[typesize] = 0;
					Dtrk3PhiErr[typesize] = 0;
					Dtrk3Y[typesize] = -1;
					Dtrk3Dz[typesize] = -1;
					Dtrk3Dxy[typesize] = -1;
					Dtrk3D0[typesize] = -1;
					Dtrk3D0Err[typesize] = -1;
					Dtrk3PixelHit[typesize] = -1;
					Dtrk3StripHit[typesize] = -1;
					Dtrk3nPixelLayer[typesize] = -1;
					Dtrk3nStripLayer[typesize] = -1;
					Dtrk3Chi2ndf[typesize] = -1;
					Dtrk3MassHypo[typesize] = -1;
					Dtrk3MVAVal[typesize] = -100;
					Dtrk3Algo[typesize] = 0;
					Dtrk3originalAlgo[typesize] = 0;
					Dtrk3Quality[typesize] = 0;
					Dtrk3highPurity[typesize] = false;
					Dtrk3dedx[typesize] = -20;
					Dtrk3thetastar[typesize] = -20;

					Dtrk4Idx[typesize] = -1;
					Dtrk4Pt[typesize] = -1;
					Dtrk4Eta[typesize] = -20;
					Dtrk4Phi[typesize] = -20;
					Dtrk4P[typesize] = -1;
					Dtrk4PtErr[typesize] = 0;
					Dtrk4EtaErr[typesize] = 0;
					Dtrk4PhiErr[typesize] = 0;
					Dtrk4Y[typesize] = -1;
					Dtrk4Dz[typesize] = -1;
					Dtrk4Dxy[typesize] = -1;
					Dtrk4D0[typesize] = -1;
					Dtrk4D0Err[typesize] = -1;
					Dtrk4PixelHit[typesize] = -1;
					Dtrk4StripHit[typesize] = -1;
					Dtrk4nPixelLayer[typesize] = -1;
					Dtrk4nStripLayer[typesize] = -1;
					Dtrk4Chi2ndf[typesize] = -1;
					Dtrk4MassHypo[typesize] = -1;
					Dtrk4MVAVal[typesize] = -100;
					Dtrk4Algo[typesize] = 0;
					Dtrk4originalAlgo[typesize] = 0;
					Dtrk4Quality[typesize] = 0;
					Dtrk4highPurity[typesize] = false;
					Dtrk4dedx[typesize] = -20;
					Dtrk4thetastar[typesize] = -20;
				}
				else if(DInfo->type[j]==3||DInfo->type[j]==4)
				{
					Dtrk3Idx[typesize] = DInfo->rftk3_index[j];
					Dtrk3Pt[typesize] = TrackInfo->pt[DInfo->rftk3_index[j]];
					Dtrk3Eta[typesize] = TrackInfo->eta[DInfo->rftk3_index[j]];
					Dtrk3Phi[typesize] = TrackInfo->phi[DInfo->rftk3_index[j]];
					Dtrk3PtErr[typesize] = TrackInfo->ptErr[DInfo->rftk3_index[j]];
					Dtrk3EtaErr[typesize] = TrackInfo->etaErr[DInfo->rftk3_index[j]];
					Dtrk3PhiErr[typesize] = TrackInfo->phiErr[DInfo->rftk3_index[j]];
					tk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk3_index[j]],TrackInfo->eta[DInfo->rftk3_index[j]],TrackInfo->phi[DInfo->rftk3_index[j]],DInfo->rftk3_MassHypo[j]);
					Dtrk3Y[typesize] = tk3Vec->Rapidity();
					Dtrk3P[typesize] = tk3Vec->P();
					tk3Vec->Boost(-*boost);
					Dtrk3thetastar[typesize] = tk3Vec->Angle(*D3Vec);
					tk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk3_index[j]],TrackInfo->eta[DInfo->rftk3_index[j]],TrackInfo->phi[DInfo->rftk3_index[j]],DInfo->rftk3_MassHypo[j]);
					Dtrk3Dz[typesize] = TrackInfo->dzPV[DInfo->rftk3_index[j]];
					Dtrk3Dxy[typesize] = TrackInfo->dxyPV[DInfo->rftk3_index[j]];
					Dtrk3D0[typesize] = TrackInfo->d0[DInfo->rftk3_index[j]];
					Dtrk3D0Err[typesize] = TrackInfo->d0error[DInfo->rftk3_index[j]];
					Dtrk3PixelHit[typesize] = TrackInfo->pixelhit[DInfo->rftk3_index[j]];
					Dtrk3StripHit[typesize] = TrackInfo->striphit[DInfo->rftk3_index[j]];
					Dtrk3nPixelLayer[typesize] = TrackInfo->nPixelLayer[DInfo->rftk3_index[j]];
					Dtrk3nStripLayer[typesize] = TrackInfo->nStripLayer[DInfo->rftk3_index[j]];
					Dtrk3Chi2ndf[typesize] = TrackInfo->chi2[DInfo->rftk3_index[j]]/TrackInfo->ndf[DInfo->rftk3_index[j]];
					Dtrk3MassHypo[typesize] = DInfo->rftk3_MassHypo[j];
					Dtrk3MVAVal[typesize] = TrackInfo->trkMVAVal[DInfo->rftk3_index[j]];
					Dtrk3Algo[typesize] = TrackInfo->trkAlgo[DInfo->rftk3_index[j]];
					Dtrk3originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->rftk3_index[j]];
					Dtrk3highPurity[typesize] = TrackInfo->highPurity[DInfo->rftk3_index[j]];
					Dtrk3Quality[typesize] = TrackInfo->trackQuality[DInfo->rftk3_index[j]];
					Dtrk3dedx[typesize] = TrackInfo->dedx[DInfo->rftk3_index[j]];

					Dtrk4Idx[typesize] = -1;
					Dtrk4Pt[typesize] = -1;
					Dtrk4Eta[typesize] = -20;
					Dtrk4Phi[typesize] = -20;
					Dtrk4P[typesize] = -1;
					Dtrk4PtErr[typesize] = 0;
					Dtrk4EtaErr[typesize] = 0;
					Dtrk4PhiErr[typesize] = 0;
					Dtrk4Y[typesize] = -1;
					Dtrk4Dz[typesize] = -1;
					Dtrk4Dxy[typesize] = -1;
					Dtrk4D0[typesize] = -1;
					Dtrk4D0Err[typesize] = -1;
					Dtrk4PixelHit[typesize] = -1;
					Dtrk4StripHit[typesize] = -1;
					Dtrk4nPixelLayer[typesize] = -1;
					Dtrk4nStripLayer[typesize] = -1;
					Dtrk4Chi2ndf[typesize] = -1;
					Dtrk4MassHypo[typesize] = -1;
					Dtrk4MVAVal[typesize] = -100;
					Dtrk4Algo[typesize] = 0;
					Dtrk4originalAlgo[typesize] = 0;
					Dtrk4Quality[typesize] = 0;
					Dtrk4highPurity[typesize] = false;
					Dtrk4dedx[typesize] = -20;
					Dtrk4thetastar[typesize] = -20;
				}
				else if(DInfo->type[j]==5||DInfo->type[j]==6)
				{
					Dtrk3Idx[typesize] = DInfo->rftk3_index[j];
					Dtrk3Pt[typesize] = TrackInfo->pt[DInfo->rftk3_index[j]];
					Dtrk3Eta[typesize] = TrackInfo->eta[DInfo->rftk3_index[j]];
					Dtrk3Phi[typesize] = TrackInfo->phi[DInfo->rftk3_index[j]];
					Dtrk3PtErr[typesize] = TrackInfo->ptErr[DInfo->rftk3_index[j]];
					Dtrk3EtaErr[typesize] = TrackInfo->etaErr[DInfo->rftk3_index[j]];
					Dtrk3PhiErr[typesize] = TrackInfo->phiErr[DInfo->rftk3_index[j]];
					tk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk3_index[j]],TrackInfo->eta[DInfo->rftk3_index[j]],TrackInfo->phi[DInfo->rftk3_index[j]],DInfo->rftk3_MassHypo[j]);
					Dtrk3Y[typesize] = tk3Vec->Rapidity();
					Dtrk3P[typesize] = tk3Vec->P();
					tk3Vec->Boost(-*boost);
					Dtrk3thetastar[typesize] = tk3Vec->Angle(*D3Vec);
					tk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk3_index[j]],TrackInfo->eta[DInfo->rftk3_index[j]],TrackInfo->phi[DInfo->rftk3_index[j]],DInfo->rftk3_MassHypo[j]);
					Dtrk3Dz[typesize] = TrackInfo->dzPV[DInfo->rftk3_index[j]];
					Dtrk3Dxy[typesize] = TrackInfo->dxyPV[DInfo->rftk3_index[j]];
					Dtrk3D0[typesize] = TrackInfo->d0[DInfo->rftk3_index[j]];
					Dtrk3D0Err[typesize] = TrackInfo->d0error[DInfo->rftk3_index[j]];
					Dtrk3PixelHit[typesize] = TrackInfo->pixelhit[DInfo->rftk3_index[j]];
					Dtrk3StripHit[typesize] = TrackInfo->striphit[DInfo->rftk3_index[j]];
					Dtrk3nPixelLayer[typesize] = TrackInfo->nPixelLayer[DInfo->rftk3_index[j]];
					Dtrk3nStripLayer[typesize] = TrackInfo->nStripLayer[DInfo->rftk3_index[j]];
					Dtrk3Chi2ndf[typesize] = TrackInfo->chi2[DInfo->rftk3_index[j]]/TrackInfo->ndf[DInfo->rftk3_index[j]];
					Dtrk3MassHypo[typesize] = DInfo->rftk3_MassHypo[j];
					Dtrk3MVAVal[typesize] = TrackInfo->trkMVAVal[DInfo->rftk3_index[j]];
					Dtrk3Algo[typesize] = TrackInfo->trkAlgo[DInfo->rftk3_index[j]];
					Dtrk3originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->rftk3_index[j]];
					Dtrk3highPurity[typesize] = TrackInfo->highPurity[DInfo->rftk3_index[j]];
					Dtrk3Quality[typesize] = TrackInfo->trackQuality[DInfo->rftk3_index[j]];
					Dtrk3dedx[typesize] = TrackInfo->dedx[DInfo->rftk3_index[j]];

					Dtrk4Idx[typesize] = DInfo->rftk4_index[j];
					Dtrk4Pt[typesize] = TrackInfo->pt[DInfo->rftk4_index[j]];
					Dtrk4Eta[typesize] = TrackInfo->eta[DInfo->rftk4_index[j]];
					Dtrk4Phi[typesize] = TrackInfo->phi[DInfo->rftk4_index[j]];
					Dtrk4PtErr[typesize] = TrackInfo->ptErr[DInfo->rftk4_index[j]];
					Dtrk4EtaErr[typesize] = TrackInfo->etaErr[DInfo->rftk4_index[j]];
					Dtrk4PhiErr[typesize] = TrackInfo->phiErr[DInfo->rftk4_index[j]];
					tk4Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk4_index[j]],TrackInfo->eta[DInfo->rftk4_index[j]],TrackInfo->phi[DInfo->rftk4_index[j]],DInfo->rftk4_MassHypo[j]);
					Dtrk4Y[typesize] = tk4Vec->Rapidity();
					Dtrk4P[typesize] = tk4Vec->P();
					tk4Vec->Boost(-*boost);
					Dtrk4thetastar[typesize] = tk4Vec->Angle(*D3Vec);
					tk4Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk4_index[j]],TrackInfo->eta[DInfo->rftk4_index[j]],TrackInfo->phi[DInfo->rftk4_index[j]],DInfo->rftk4_MassHypo[j]);
					Dtrk4Dz[typesize] = TrackInfo->dzPV[DInfo->rftk4_index[j]];
					Dtrk4Dxy[typesize] = TrackInfo->dxyPV[DInfo->rftk4_index[j]];
					Dtrk4D0[typesize] = TrackInfo->d0[DInfo->rftk4_index[j]];
					Dtrk4D0Err[typesize] = TrackInfo->d0error[DInfo->rftk4_index[j]];
					Dtrk4PixelHit[typesize] = TrackInfo->pixelhit[DInfo->rftk4_index[j]];
					Dtrk4StripHit[typesize] = TrackInfo->striphit[DInfo->rftk4_index[j]];
					Dtrk4nPixelLayer[typesize] = TrackInfo->nPixelLayer[DInfo->rftk4_index[j]];
					Dtrk4nStripLayer[typesize] = TrackInfo->nStripLayer[DInfo->rftk4_index[j]];
					Dtrk4Chi2ndf[typesize] = TrackInfo->chi2[DInfo->rftk4_index[j]]/TrackInfo->ndf[DInfo->rftk4_index[j]];
					Dtrk4MassHypo[typesize] = DInfo->rftk4_MassHypo[j];
					Dtrk4MVAVal[typesize] = TrackInfo->trkMVAVal[DInfo->rftk4_index[j]];
					Dtrk4Algo[typesize] = TrackInfo->trkAlgo[DInfo->rftk4_index[j]];
					Dtrk4originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->rftk4_index[j]];
					Dtrk4highPurity[typesize] = TrackInfo->highPurity[DInfo->rftk4_index[j]];
					Dtrk4Quality[typesize] = TrackInfo->trackQuality[DInfo->rftk4_index[j]];
					Dtrk4dedx[typesize] = TrackInfo->dedx[DInfo->rftk4_index[j]];
				}

				//
				SumVec->SetXYZT((tk1Vec->Px()+tk2Vec->Px()+tk3Vec->Px()+tk4Vec->Px()), (tk1Vec->Py()+tk2Vec->Py()+tk3Vec->Py()+tk4Vec->Py()), (tk1Vec->Pz()+tk2Vec->Pz()+tk3Vec->Pz()+tk4Vec->Pz()), (tk1Vec->E()+tk2Vec->E()+tk3Vec->E()+tk4Vec->E()));
				TVector3 *Sumboost = new TVector3();
				TVector3 *Sum3Vec = new TVector3();
				Sumboost->SetXYZ(SumVec->BoostVector().X(), SumVec->BoostVector().Y(), SumVec->BoostVector().Z());
				Sum3Vec->SetXYZ(SumVec->Vect().X(), SumVec->Vect().Y(), SumVec->Vect().Z());
				tk1Vec->Boost(-*Sumboost);
				Dtrk1thetastar_uf[typesize] = tk1Vec->Angle(*Sum3Vec);
				tk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk1_index[j]],TrackInfo->eta[DInfo->rftk1_index[j]],TrackInfo->phi[DInfo->rftk1_index[j]],DInfo->rftk1_MassHypo[j]);
				tk2Vec->Boost(-*Sumboost);
				Dtrk2thetastar_uf[typesize] = tk2Vec->Angle(*Sum3Vec);
				tk2Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk2_index[j]],TrackInfo->eta[DInfo->rftk2_index[j]],TrackInfo->phi[DInfo->rftk2_index[j]],DInfo->rftk2_MassHypo[j]);
				if(DInfo->type[j]==1||DInfo->type[j]==2)
				{
				}
				else if(DInfo->type[j]==3||DInfo->type[j]==4)
				{
					tk3Vec->Boost(-*Sumboost);
					Dtrk3thetastar_uf[typesize] = tk3Vec->Angle(*Sum3Vec);
					tk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk3_index[j]],TrackInfo->eta[DInfo->rftk3_index[j]],TrackInfo->phi[DInfo->rftk3_index[j]],DInfo->rftk3_MassHypo[j]);
				}
				else if(DInfo->type[j]==5||DInfo->type[j]==6)
				{
					tk3Vec->Boost(-*Sumboost);
					Dtrk3thetastar_uf[typesize] = tk3Vec->Angle(*Sum3Vec);
					tk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk3_index[j]],TrackInfo->eta[DInfo->rftk3_index[j]],TrackInfo->phi[DInfo->rftk3_index[j]],DInfo->rftk3_MassHypo[j]);
					tk4Vec->Boost(-*Sumboost);
					Dtrk4thetastar_uf[typesize] = tk4Vec->Angle(*Sum3Vec);
					tk4Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk4_index[j]],TrackInfo->eta[DInfo->rftk4_index[j]],TrackInfo->phi[DInfo->rftk4_index[j]],DInfo->rftk4_MassHypo[j]);
				}

			}
			else if(DInfo->type[j]==7||DInfo->type[j]==8||DInfo->type[j]==9||DInfo->type[j]==10||DInfo->type[j]==11||DInfo->type[j]==12||DInfo->type[j]==13||DInfo->type[j]==14)
			{
				Dtrk1Idx[typesize] = DInfo->rftk2_index[j];
				Dtrk1Pt[typesize] = TrackInfo->pt[DInfo->rftk2_index[j]];
				Dtrk1Eta[typesize] = TrackInfo->eta[DInfo->rftk2_index[j]];
				Dtrk1Phi[typesize] = TrackInfo->phi[DInfo->rftk2_index[j]];
				Dtrk1PtErr[typesize] = TrackInfo->ptErr[DInfo->rftk2_index[j]];
				Dtrk1EtaErr[typesize] = TrackInfo->etaErr[DInfo->rftk2_index[j]];
				Dtrk1PhiErr[typesize] = TrackInfo->phiErr[DInfo->rftk2_index[j]];
				tk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk2_index[j]],TrackInfo->eta[DInfo->rftk2_index[j]],TrackInfo->phi[DInfo->rftk2_index[j]],DInfo->rftk2_MassHypo[j]);
				Dtrk1Y[typesize] = tk1Vec->Rapidity();
				Dtrk1P[typesize] = tk1Vec->P();
				tk1Vec->Boost(-*boost);
				Dtrk1thetastar[typesize] = tk1Vec->Angle(*D3Vec);
				tk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk2_index[j]],TrackInfo->eta[DInfo->rftk2_index[j]],TrackInfo->phi[DInfo->rftk2_index[j]],DInfo->rftk2_MassHypo[j]);
				Dtrk1Dz[typesize] = TrackInfo->dzPV[DInfo->rftk2_index[j]];
				Dtrk1Dxy[typesize] = TrackInfo->dxyPV[DInfo->rftk2_index[j]];
				Dtrk1D0[typesize] = TrackInfo->d0[DInfo->rftk2_index[j]];
				Dtrk1D0Err[typesize] = TrackInfo->d0error[DInfo->rftk2_index[j]];
				Dtrk1PixelHit[typesize] = TrackInfo->pixelhit[DInfo->rftk2_index[j]];
				Dtrk1StripHit[typesize] = TrackInfo->striphit[DInfo->rftk2_index[j]];
				Dtrk1nPixelLayer[typesize] = TrackInfo->nPixelLayer[DInfo->rftk2_index[j]];
				Dtrk1nStripLayer[typesize] = TrackInfo->nStripLayer[DInfo->rftk2_index[j]];
				Dtrk1Chi2ndf[typesize] = TrackInfo->chi2[DInfo->rftk2_index[j]]/TrackInfo->ndf[DInfo->rftk2_index[j]];
				Dtrk1MassHypo[typesize] = DInfo->rftk2_MassHypo[j];
				Dtrk1MVAVal[typesize] = TrackInfo->trkMVAVal[DInfo->rftk2_index[j]];
				Dtrk1Algo[typesize] = TrackInfo->trkAlgo[DInfo->rftk2_index[j]];
				Dtrk1originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->rftk2_index[j]];
				Dtrk1highPurity[typesize] = TrackInfo->highPurity[DInfo->rftk2_index[j]];
				Dtrk1Quality[typesize] = TrackInfo->trackQuality[DInfo->rftk2_index[j]];
				Dtrk1dedx[typesize] = TrackInfo->dedx[DInfo->rftk2_index[j]];

				Dtrk2Idx[typesize] = -1;
				Dtrk2Pt[typesize] = -1;
				Dtrk2Eta[typesize] = -20;
				Dtrk2Phi[typesize] = -20;
				Dtrk2P[typesize] = -1;
				Dtrk2PtErr[typesize] = 0;
				Dtrk2EtaErr[typesize] = 0;
				Dtrk2PhiErr[typesize] = 0;
				Dtrk2Y[typesize] = -1;
				Dtrk2Dz[typesize] = -1;
				Dtrk2Dxy[typesize] = -1;
				Dtrk2D0[typesize] = -1;
				Dtrk2D0Err[typesize] = -1;
				Dtrk2PixelHit[typesize] = -1;
				Dtrk2StripHit[typesize] = -1;
				Dtrk2nPixelLayer[typesize] = -1;
				Dtrk2nStripLayer[typesize] = -1;
				Dtrk2Chi2ndf[typesize] = -1;
				Dtrk2MassHypo[typesize] = -1;
				Dtrk2MVAVal[typesize] = -100;
				Dtrk2Algo[typesize] = 0;
				Dtrk2originalAlgo[typesize] = 0;
				Dtrk2Quality[typesize] = 0;
				Dtrk2highPurity[typesize] = false;
				Dtrk2dedx[typesize] = -20;
				Dtrk2thetastar[typesize] = -20;

				Dtrk3Idx[typesize] = -1;
				Dtrk3Pt[typesize] = -1;
				Dtrk3Eta[typesize] = -20;
				Dtrk3Phi[typesize] = -20;
				Dtrk3P[typesize] = -1;
				Dtrk3PtErr[typesize] = 0;
				Dtrk3EtaErr[typesize] = 0;
				Dtrk3PhiErr[typesize] = 0;
				Dtrk3Y[typesize] = -1;
				Dtrk3Dz[typesize] = -1;
				Dtrk3Dxy[typesize] = -1;
				Dtrk3D0[typesize] = -1;
				Dtrk3D0Err[typesize] = -1;
				Dtrk3PixelHit[typesize] = -1;
				Dtrk3StripHit[typesize] = -1;
				Dtrk3nPixelLayer[typesize] = -1;
				Dtrk3nStripLayer[typesize] = -1;
				Dtrk3Chi2ndf[typesize] = -1;
				Dtrk3MassHypo[typesize] = -1;
				Dtrk3MVAVal[typesize] = -100;
				Dtrk3Algo[typesize] = 0;
				Dtrk3originalAlgo[typesize] = 0;
				Dtrk3Quality[typesize] = 0;
				Dtrk3highPurity[typesize] = false;
				Dtrk3dedx[typesize] = -20;
				Dtrk3thetastar[typesize] = -20;

				Dtrk4Idx[typesize] = -1;
				Dtrk4Pt[typesize] = -1;
				Dtrk4Eta[typesize] = -20;
				Dtrk4Phi[typesize] = -20;
				Dtrk4P[typesize] = -1;
				Dtrk4PtErr[typesize] = 0;
				Dtrk4EtaErr[typesize] = 0;
				Dtrk4PhiErr[typesize] = 0;
				Dtrk4Y[typesize] = -1;
				Dtrk4Dz[typesize] = -1;
				Dtrk4Dxy[typesize] = -1;
				Dtrk4D0[typesize] = -1;
				Dtrk4D0Err[typesize] = -1;
				Dtrk4PixelHit[typesize] = -1;
				Dtrk4StripHit[typesize] = -1;
				Dtrk4nPixelLayer[typesize] = -1;
				Dtrk4nStripLayer[typesize] = -1;
				Dtrk4Chi2ndf[typesize] = -1;
				Dtrk4MassHypo[typesize] = -1;
				Dtrk4MVAVal[typesize] = -100;
				Dtrk4Algo[typesize] = 0;
				Dtrk4originalAlgo[typesize] = 0;
				Dtrk4Quality[typesize] = 0;
				Dtrk4highPurity[typesize] = false;
				Dtrk4dedx[typesize] = -20;
				Dtrk4thetastar[typesize] = -20;

				DRestrk1Pt[typesize] = TrackInfo->pt[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1PtErr[typesize] = TrackInfo->ptErr[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1Eta[typesize] = TrackInfo->eta[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1Phi[typesize] = TrackInfo->phi[DInfo->tktkRes_rftk1_index[j]];
				restk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk1_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk1_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk1_index[j]],DInfo->tktkRes_rftk1_MassHypo[j]);
				DRestrk1Y[typesize] = restk1Vec->Rapidity();
				DRestrk1P[typesize] = restk1Vec->P();
				restk1Vec->Boost(-*boost);
				DRestrk1thetastar[typesize] = restk1Vec->Angle(*D3Vec);
				restk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk1_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk1_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk1_index[j]],DInfo->tktkRes_rftk1_MassHypo[j]);
				DRestrk1Dz[typesize] = TrackInfo->dzPV[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1Dxy[typesize] = TrackInfo->dxyPV[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1D0[typesize] = TrackInfo->d0[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1D0Err[typesize] = TrackInfo->d0error[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1highPurity[typesize] = TrackInfo->highPurity[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1Quality[typesize] = TrackInfo->trackQuality[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1dedx[typesize] = TrackInfo->dedx[DInfo->tktkRes_rftk1_index[j]];
				DRestrk1MassHypo[typesize] = DInfo->tktkRes_rftk1_MassHypo[j];

				DRestrk2Pt[typesize] = TrackInfo->pt[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2PtErr[typesize] = TrackInfo->ptErr[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2Eta[typesize] = TrackInfo->eta[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2Phi[typesize] = TrackInfo->phi[DInfo->tktkRes_rftk2_index[j]];
				restk2Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk2_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk2_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk2_index[j]],DInfo->tktkRes_rftk2_MassHypo[j]);
				DRestrk2Y[typesize] = restk2Vec->Rapidity();
				DRestrk2P[typesize] = restk2Vec->P();
				restk2Vec->Boost(-*boost);
				DRestrk2thetastar[typesize] = restk2Vec->Angle(*D3Vec);
				restk2Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk2_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk2_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk2_index[j]],DInfo->tktkRes_rftk2_MassHypo[j]);
				DRestrk2Dz[typesize] = TrackInfo->dzPV[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2Dxy[typesize] = TrackInfo->dxyPV[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2D0[typesize] = TrackInfo->d0[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2D0Err[typesize] = TrackInfo->d0error[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2highPurity[typesize] = TrackInfo->highPurity[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2Quality[typesize] = TrackInfo->trackQuality[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2dedx[typesize] = TrackInfo->dedx[DInfo->tktkRes_rftk2_index[j]];
				DRestrk2MassHypo[typesize] = DInfo->tktkRes_rftk2_MassHypo[j];

				DRestrk3Pt[typesize] = -1;
				DRestrk3PtErr[typesize] = -1;
				DRestrk3Eta[typesize] = -20;
				DRestrk3Phi[typesize] = -20;
				DRestrk3P[typesize] = -1;
				DRestrk3Y[typesize] = -1;
				DRestrk3thetastar[typesize] = -20;
				DRestrk3Dz[typesize] = -1;
				DRestrk3Dxy[typesize] = -1;
				DRestrk3D0[typesize] = -1;
				DRestrk3D0Err[typesize] = -1;
				DRestrk3highPurity[typesize] = -1;
				DRestrk3originalAlgo[typesize] = 0;
				DRestrk3Quality[typesize] = -1;
				DRestrk3dedx[typesize] = -20;
				DRestrk3MassHypo[typesize] = -1;

				DRestrk4Pt[typesize] = -1;
				DRestrk4PtErr[typesize] = -1;
				DRestrk4Eta[typesize] = -20;
				DRestrk4Phi[typesize] = -20;
				DRestrk4P[typesize] = -1;
				DRestrk4Y[typesize] = -1;
				DRestrk4thetastar[typesize] = -20;
				DRestrk4Dz[typesize] = -1;
				DRestrk4Dxy[typesize] = -1;
				DRestrk4D0[typesize] = -1;
				DRestrk4D0Err[typesize] = -1;
				DRestrk4highPurity[typesize] = -1;
				DRestrk4originalAlgo[typesize] = 0;
				DRestrk4Quality[typesize] = -1;
				DRestrk4dedx[typesize] = -20;
				DRestrk4MassHypo[typesize] = -1;

				DtktkResmass[typesize] = DInfo->tktkRes_mass[j];
				DtktkRes_unfitted_mass[typesize] = DInfo->tktkRes_unfitted_mass[j];
				DtktkRespt[typesize] = DInfo->tktkRes_pt[j];
				DtktkRes_unfitted_pt[typesize] = DInfo->tktkRes_unfitted_pt[j];
				DtktkReseta[typesize] = DInfo->tktkRes_eta[j];
				DtktkResphi[typesize] = DInfo->tktkRes_phi[j];

				DtktkRes_chi2ndf[typesize] = DInfo->tktkRes_vtxchi2[j]/DInfo->tktkRes_vtxdof[j];
				DtktkRes_chi2cl[typesize] = TMath::Prob(DInfo->tktkRes_vtxchi2[j], DInfo->tktkRes_vtxdof[j]);
				DtktkRes_alpha[typesize] = DInfo->tktkRes_alpha[j];
				TVector3 *DisSvResVtx = new TVector3;
				DisSvResVtx->SetXYZ(DInfo->tktkRes_vtxX[j]-DInfo->vtxX[j],
						DInfo->tktkRes_vtxY[j]-DInfo->vtxY[j],
						DInfo->tktkRes_vtxZ[j]-DInfo->vtxZ[j]);
				TLorentzVector *tktkRes4Vec = new TLorentzVector;
				tktkRes4Vec->SetPtEtaPhiM(DInfo->tktkRes_pt[j], DInfo->tktkRes_eta[j], DInfo->tktkRes_phi[j], DInfo->tktkRes_mass[j]);
				DtktkRes_alphaToSV[typesize] = tktkRes4Vec->Angle(*DisSvResVtx);
				//DtktkRes_alphaToSV[typesize] = DInfo->tktkRes_alphaToSV[j]; // update after moving to new Dfinder
				DtktkRes_svpvDistance[typesize] = DInfo->tktkRes_svpvDistance[j];
				DtktkRes_svpvDisErr[typesize] = DInfo->tktkRes_svpvDisErr[j];
				DtktkRes_svpvDistanceToSV[typesize] = DisSvResVtx->Mag();
				//DtktkRes_svpvDistanceToSV[typesize] = DInfo->tktkRes_svpvDistanceToSV[j]; // update after moving to new Dfinder
				DtktkRes_svpvDisErrToSV[typesize] = 1;
				//DtktkRes_svpvDisErrToSV[typesize] = DInfo->tktkRes_svpvDisErrToSV[j]; // update after moving to new Dfinder
				DtktkRes_dca[typesize] = DInfo->tktkRes_svpvDistance[j]*TMath::Sin(DInfo->tktkRes_alpha[j]);
				DtktkRes_dcaToSV[typesize] = DtktkRes_svpvDistanceToSV[typesize]*TMath::Sin(DtktkRes_alphaToSV[typesize]);
				//DtktkRes_dcaToSV[typesize] = DInfo->tktkRes_svpvDistanceToSV[j]*TMath::Sin(DInfo->tktkRes_alphaToSV[j]); // update after moving to new Dfinder

				r2lxyBS = (DInfo->tktkRes_vtxX[j]-EvtInfo->BSx+(DInfo->tktkRes_vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdxdz) * (DInfo->tktkRes_vtxX[j]-EvtInfo->BSx+(DInfo->tktkRes_vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdxdz)
					+ (DInfo->tktkRes_vtxY[j]-EvtInfo->BSy+(DInfo->tktkRes_vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdydz) * (DInfo->tktkRes_vtxY[j]-EvtInfo->BSy+(DInfo->tktkRes_vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdydz);
				xlxyBS = DInfo->tktkRes_vtxX[j]-EvtInfo->BSx + (DInfo->tktkRes_vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdxdz;
				ylxyBS = DInfo->tktkRes_vtxY[j]-EvtInfo->BSy + (DInfo->tktkRes_vtxZ[j]-EvtInfo->BSz)*EvtInfo->BSdydz;
				DtktkRes_lxyBS[typesize] = TMath::Sqrt(r2lxyBS);
				DtktkRes_lxyBSErr[typesize] = (1./r2lxyBS) * ((xlxyBS*xlxyBS)*DInfo->tktkRes_vtxXErr[j] + (2*xlxyBS*ylxyBS)*DInfo->tktkRes_vtxYXErr[j] + (ylxyBS*ylxyBS)*DInfo->tktkRes_vtxYErr[j]);

				tk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk2_index[j]],TrackInfo->eta[DInfo->rftk2_index[j]],TrackInfo->phi[DInfo->rftk2_index[j]],DInfo->rftk2_MassHypo[j]);
				DtktkRes_angleToTrk1[typesize] = tktkRes4Vec->Angle(tk1Vec->Vect());

				DtktkRes_ptAsymToTrk1[typesize] = (DInfo->tktkRes_pt[j]-TrackInfo->pt[DInfo->rftk2_index[j]])/(DInfo->tktkRes_pt[j]+TrackInfo->pt[DInfo->rftk2_index[j]]);
				DtktkRes_unfitter_ptAsymToTrk1[typesize] = (DInfo->tktkRes_unfitted_pt[j]-TrackInfo->pt[DInfo->rftk2_index[j]])/(DInfo->tktkRes_unfitted_pt[j]+TrackInfo->pt[DInfo->rftk2_index[j]]);

				if(DInfo->type[j]==11||DInfo->type[j]==12)
				{
					DRestrk3Pt[typesize] = TrackInfo->pt[DInfo->tktkRes_rftk3_index[j]];
					DRestrk3Eta[typesize] = TrackInfo->eta[DInfo->tktkRes_rftk3_index[j]];
					DRestrk3Phi[typesize] = TrackInfo->phi[DInfo->tktkRes_rftk3_index[j]];
					restk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk3_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk3_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk3_index[j]],DInfo->tktkRes_rftk3_MassHypo[j]);
					DRestrk3Y[typesize] = restk3Vec->Rapidity();
					DRestrk3P[typesize] = restk3Vec->P();
					restk3Vec->Boost(-*boost);
					DRestrk3thetastar[typesize] = restk3Vec->Angle(*D3Vec);
					restk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk3_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk3_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk3_index[j]],DInfo->tktkRes_rftk3_MassHypo[j]);
					DRestrk3Dz[typesize] = TrackInfo->dzPV[DInfo->tktkRes_rftk3_index[j]];
					DRestrk3Dxy[typesize] = TrackInfo->dxyPV[DInfo->tktkRes_rftk3_index[j]];
					DRestrk3D0[typesize] = TrackInfo->d0[DInfo->tktkRes_rftk3_index[j]];
					DRestrk3D0Err[typesize] = TrackInfo->d0error[DInfo->tktkRes_rftk3_index[j]];
					DRestrk3originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->tktkRes_rftk3_index[j]];
					DRestrk3MassHypo[typesize] = DInfo->tktkRes_rftk3_MassHypo[j];

					DRestrk4Pt[typesize] = TrackInfo->pt[DInfo->tktkRes_rftk4_index[j]];
					DRestrk4Eta[typesize] = TrackInfo->eta[DInfo->tktkRes_rftk4_index[j]];
					DRestrk4Phi[typesize] = TrackInfo->phi[DInfo->tktkRes_rftk4_index[j]];
					restk4Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk4_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk4_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk4_index[j]],DInfo->tktkRes_rftk4_MassHypo[j]);
					DRestrk4Y[typesize] = restk4Vec->Rapidity();
					DRestrk4P[typesize] = restk4Vec->P();
					restk4Vec->Boost(-*boost);
					DRestrk4thetastar[typesize] = restk4Vec->Angle(*D3Vec);
					restk4Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk4_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk4_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk4_index[j]],DInfo->tktkRes_rftk4_MassHypo[j]);
					DRestrk4Dz[typesize] = TrackInfo->dzPV[DInfo->tktkRes_rftk4_index[j]];
					DRestrk4Dxy[typesize] = TrackInfo->dxyPV[DInfo->tktkRes_rftk4_index[j]];
					DRestrk4D0[typesize] = TrackInfo->d0[DInfo->tktkRes_rftk4_index[j]];
					DRestrk4D0Err[typesize] = TrackInfo->d0error[DInfo->tktkRes_rftk4_index[j]];
					DRestrk4originalAlgo[typesize] = TrackInfo->originalTrkAlgo[DInfo->tktkRes_rftk4_index[j]];
					DRestrk4MassHypo[typesize] = DInfo->tktkRes_rftk4_MassHypo[j];

					DRestrk3PtErr[typesize] = TrackInfo->ptErr[DInfo->tktkRes_rftk3_index[j]];
					DRestrk4PtErr[typesize] = TrackInfo->ptErr[DInfo->tktkRes_rftk4_index[j]];
					DRestrk3highPurity[typesize] = TrackInfo->highPurity[DInfo->tktkRes_rftk3_index[j]];
					DRestrk4highPurity[typesize] = TrackInfo->highPurity[DInfo->tktkRes_rftk4_index[j]];
					DRestrk3Quality[typesize] = TrackInfo->trackQuality[DInfo->tktkRes_rftk3_index[j]];
					DRestrk4Quality[typesize] = TrackInfo->trackQuality[DInfo->tktkRes_rftk4_index[j]];
					DRestrk3dedx[typesize] = TrackInfo->dedx[DInfo->tktkRes_rftk3_index[j]];
					DRestrk4dedx[typesize] = TrackInfo->dedx[DInfo->tktkRes_rftk4_index[j]];

				}

				resSumVec->SetXYZT((restk1Vec->Px()+restk2Vec->Px()+restk3Vec->Px()+restk4Vec->Px()), (restk1Vec->Py()+restk2Vec->Py()+restk3Vec->Py()+restk4Vec->Py()), (restk1Vec->Pz()+restk2Vec->Pz()+restk3Vec->Pz()+restk4Vec->Pz()), (restk1Vec->E()+restk2Vec->E()+restk3Vec->E()+restk4Vec->E()));
				DtktkRes_unfitted_angleToTrk1[typesize] = resSumVec->Angle(tk1Vec->Vect());

				//
				SumVec->SetXYZT((tk1Vec->Px()+tk2Vec->Px()+tk3Vec->Px()+tk4Vec->Px()+restk1Vec->Px()+restk2Vec->Px()+restk3Vec->Px()+restk4Vec->Px()), (tk1Vec->Py()+tk2Vec->Py()+tk3Vec->Py()+tk4Vec->Py()+restk1Vec->Py()+restk2Vec->Py()+restk3Vec->Py()+restk4Vec->Py()), (tk1Vec->Pz()+tk2Vec->Pz()+tk3Vec->Pz()+tk4Vec->Pz()+restk1Vec->Pz()+restk2Vec->Pz()+restk3Vec->Pz()+restk4Vec->Pz()), (tk1Vec->E()+tk2Vec->E()+tk3Vec->E()+tk4Vec->E()+restk1Vec->E()+restk2Vec->E()+restk3Vec->E()+restk4Vec->E()));
				TVector3 *Sumboost = new TVector3();
				TVector3 *Sum3Vec = new TVector3();
				Sumboost->SetXYZ(SumVec->BoostVector().X(), SumVec->BoostVector().Y(), SumVec->BoostVector().Z());
				Sum3Vec->SetXYZ(SumVec->Vect().X(), SumVec->Vect().Y(), SumVec->Vect().Z());
				tk1Vec->Boost(-*Sumboost);
				Dtrk1thetastar_uf[typesize] = tk1Vec->Angle(*Sum3Vec);
				tk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->rftk2_index[j]],TrackInfo->eta[DInfo->rftk2_index[j]],TrackInfo->phi[DInfo->rftk2_index[j]],DInfo->rftk2_MassHypo[j]);

				restk1Vec->Boost(-*Sumboost);
				DRestrk1thetastar_uf[typesize] = restk1Vec->Angle(*Sum3Vec);
				restk1Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk1_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk1_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk1_index[j]],DInfo->tktkRes_rftk1_MassHypo[j]);
				restk2Vec->Boost(-*Sumboost);
				DRestrk2thetastar_uf[typesize] = restk2Vec->Angle(*Sum3Vec);
				restk2Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk2_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk2_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk2_index[j]],DInfo->tktkRes_rftk2_MassHypo[j]);
				if(DInfo->type[j]==11||DInfo->type[j]==12)
				{
					restk3Vec->Boost(-*Sumboost);
					DRestrk3thetastar_uf[typesize] = restk3Vec->Angle(*Sum3Vec);
					restk3Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk3_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk3_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk3_index[j]],DInfo->tktkRes_rftk3_MassHypo[j]);
					restk4Vec->Boost(-*Sumboost);
					DRestrk4thetastar_uf[typesize] = restk4Vec->Angle(*Sum3Vec);
					restk4Vec->SetPtEtaPhiM(TrackInfo->pt[DInfo->tktkRes_rftk4_index[j]],TrackInfo->eta[DInfo->tktkRes_rftk4_index[j]],TrackInfo->phi[DInfo->tktkRes_rftk4_index[j]],DInfo->tktkRes_rftk4_MassHypo[j]);
				}

			}
			DMaxTkPt[typesize] = max(Dtrk1Pt[typesize], max(Dtrk2Pt[typesize], max(Dtrk3Pt[typesize], max(Dtrk4Pt[typesize], max(DRestrk1Pt[typesize], max(DRestrk2Pt[typesize], max(DRestrk3Pt[typesize], DRestrk4Pt[typesize])))))));
			DMinTkPt[typesize] = max(1/Dtrk1Pt[typesize], max(1/Dtrk2Pt[typesize], max(1/Dtrk3Pt[typesize], max(1/Dtrk4Pt[typesize], max(1/DRestrk1Pt[typesize], max(1/DRestrk2Pt[typesize], max(1/DRestrk3Pt[typesize], 1/DRestrk4Pt[typesize])))))));
			DMinTkPt[typesize] = 1/DMinTkPt[typesize];

			int DpdgId=0,RpdgId=0;
			int dGenIdxRes = -1;
			if(DInfo->type[j]==1||DInfo->type[j]==2||DInfo->type[j]==5||DInfo->type[j]==6) DpdgId=DZERO_PDGID;
			else if(DInfo->type[j]==3||DInfo->type[j]==4) DpdgId=DPLUS_PDGID;
			else if(DInfo->type[j]==7||DInfo->type[j]==8) DpdgId=DSUBS_PDGID;
			else if(DInfo->type[j]==9||DInfo->type[j]==10||DInfo->type[j]==11||DInfo->type[j]==12) DpdgId=DSTAR_PDGID;
			else if(DInfo->type[j]==13||DInfo->type[j]==14) DpdgId=BPLUS_PDGID;
			if(DInfo->type[j]==7||DInfo->type[j]==8) RpdgId=PHI_PDGID;
			else if(DInfo->type[j]==9||DInfo->type[j]==10||DInfo->type[j]==11||DInfo->type[j]==12||DInfo->type[j]==13||DInfo->type[j]==14) RpdgId=DZERO_PDGID;
			Dgen[typesize] = 0;//gen init
			DgenIndex[typesize] = -1;
			DgennDa[typesize] = -1;
			Dgenpt[typesize] = -1;
			Dgeneta[typesize] = -20;
			Dgenphi[typesize] = -20;
			Dgeny[typesize] = -1;
			DgenBAncestorpt[typesize] = -99;
			DgenBAncestorpdgId[typesize] = 0;
			DgencollisionId[typesize] = -99;
			DgenprodvtxX[typesize] = -999;
			DgenprodvtxY[typesize] = -999;
			DgenprodvtxZ[typesize] = -999;
			DgendecayvtxX[typesize] = -999;
			DgendecayvtxY[typesize] = -999;
			DgendecayvtxZ[typesize] = -999;
			DgenfromgenPV[typesize] = -999;
			if(!REAL)
			{
				if(DInfo->type[j]==1||DInfo->type[j]==2)
				{
					if(DInfo->rftk1_index[j]>-1 && DInfo->rftk2_index[j]>-1)
					{
						if(TrackInfo->geninfo_index[DInfo->rftk1_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->rftk2_index[j]]>-1)
						{
							if(GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]>-1 && 
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]>-1)
							{
								if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]])==DpdgId && 
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])
								{
									if(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) && 
											TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]))
									{
										Dgen[typesize] = 23333;
										dGenIdxRes = GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]];
									}
									else if(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) && 
											TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]))
									{
										Dgen[typesize] = 23344;
										dGenIdxRes = GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]];
									}
								}
							}
						}
					}
				}
				else if(DInfo->type[j]==3||DInfo->type[j]==4)
				{
					if(DInfo->rftk1_index[j]>-1 && DInfo->rftk2_index[j]>-1 && DInfo->rftk3_index[j]>-1)
					{
						if(TrackInfo->geninfo_index[DInfo->rftk1_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->rftk2_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->rftk3_index[j]]>-1)
						{
							if(GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]>-1 && 
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]>-1 && 
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]]>-1)
							{
								if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]])==DpdgId && 
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]] &&
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])
								{
									if(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) && 
											TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]) &&
											TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j]))
									{
										Dgen[typesize] = 23333;
										dGenIdxRes = GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]];
									}
									else if((TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j])&&
												TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j])&&
												TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j])&&
												TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==PION_PDGID) ||
											(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j])&&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j])&&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j])&&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==PION_PDGID) ||
											(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j])&&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j])&&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j])&&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==PION_PDGID))
									{
										Dgen[typesize] = 23344;
										dGenIdxRes = GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]];
									}
								}
							}
						}
					}
				}
				else if(DInfo->type[j]==5||DInfo->type[j]==6)
				{
					if(DInfo->rftk1_index[j]>-1 && DInfo->rftk2_index[j]>-1 && DInfo->rftk3_index[j]>-1 && DInfo->rftk4_index[j]>-1)
					{
						if(TrackInfo->geninfo_index[DInfo->rftk1_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->rftk2_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->rftk3_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->rftk4_index[j]]>-1)
						{
							if(GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]>-1 && 
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]>-1 && 
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]]>-1 && 
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]]>-1)
							{
								if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]])==DpdgId && 
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]] &&
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]] &&
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])
								{
									if(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) && 
											TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]) &&
											TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j]) &&
											TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==findPdgid(DInfo->rftk4_MassHypo[j]))
									{
										Dgen[typesize] = 23333;
										dGenIdxRes = GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]];
									}
									else if((TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]) &&
												TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) &&
												TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j]) &&
												TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==findPdgid(DInfo->rftk4_MassHypo[j]) &&
												TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==PION_PDGID &&
												TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==PION_PDGID) ||
											(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==findPdgid(DInfo->rftk4_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==PION_PDGID &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==PION_PDGID) ||
											(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk4_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==PION_PDGID &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==PION_PDGID) ||
											(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==findPdgid(DInfo->rftk4_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==PION_PDGID &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==PION_PDGID) ||
											(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk4_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==PION_PDGID &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==PION_PDGID) ||
											(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk3_index[j]]])==findPdgid(DInfo->rftk4_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk4_index[j]]])==findPdgid(DInfo->rftk3_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==findPdgid(DInfo->rftk1_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==findPdgid(DInfo->rftk2_MassHypo[j]) &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]])==PION_PDGID &&
											 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==PION_PDGID))
											 {
												 Dgen[typesize] = 23344;
												 dGenIdxRes = GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk1_index[j]]];
											 }
								}
							}
						}
					}
				}
				else if(DInfo->type[j]==7||DInfo->type[j]==8||DInfo->type[j]==9||DInfo->type[j]==10||DInfo->type[j]==13||DInfo->type[j]==14)
				{
					if(DInfo->tktkRes_rftk1_index[j]>-1 && DInfo->tktkRes_rftk2_index[j]>-1)
					{
						if(TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]>-1)
						{
							if(GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]>-1 && 
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]]>-1)
							{
								if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]])==RpdgId && 
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])
								{
									if(GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]]>-1 &&
											GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]]]>-1)
									{
										if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]]])==DpdgId)
										{
											if(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) && 
													TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]))
											{
												Dgen[typesize] = 3333;
												dGenIdxRes = GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]];
											}
											if((DInfo->type[j]==9||DInfo->type[j]==10||DInfo->type[j]==3||DInfo->type[j]==14) &&
													TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) && 
													TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]))
											{
												Dgen[typesize] = 3344;
												dGenIdxRes = GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]];
											}
										}
									}
								}
							}
						}
					}
					if(DInfo->rftk2_index[j]>-1)
					{
						if(TrackInfo->geninfo_index[DInfo->rftk2_index[j]]>-1)
						{
							if(GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]>-1)
							{
								if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]])==DpdgId &&
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]==dGenIdxRes)
								{
									if(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==PION_PDGID)
									{
										Dgen[typesize]+=20000;
									}
								}
							}
						}
					}
				}
				else if(DInfo->type[j]==11||DInfo->type[j]==12)
				{
					if(DInfo->tktkRes_rftk1_index[j]>-1 && DInfo->tktkRes_rftk2_index[j]>-1 && DInfo->tktkRes_rftk3_index[j]>-1 && DInfo->tktkRes_rftk4_index[j]>-1)
					{
						if(TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]>-1 && 
								TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]>-1)
						{
							if(GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]>-1 && 
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]]>-1 &&
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]]>-1 &&
									GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]]>-1)
							{
								if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]])==RpdgId && 
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]] &&
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]] &&
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]==GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])
								{
									if(GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]]>-1)
									{
										if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]]])==DpdgId)
										{
											if(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) && 
													TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]) &&
													TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==findPdgid(DInfo->tktkRes_rftk3_MassHypo[j]) &&
													TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==findPdgid(DInfo->tktkRes_rftk4_MassHypo[j]))
											{
												Dgen[typesize] = 3333;
												dGenIdxRes = GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]];
											}
											else if((TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]) && 
														TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) &&
														TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==findPdgid(DInfo->tktkRes_rftk3_MassHypo[j]) &&
														TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==findPdgid(DInfo->tktkRes_rftk4_MassHypo[j]) &&
														TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==PION_PDGID &&
														TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==PION_PDGID) ||
													(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk3_MassHypo[j]) && 
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==findPdgid(DInfo->tktkRes_rftk4_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==PION_PDGID &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==PION_PDGID) ||
													(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk4_MassHypo[j]) && 
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==findPdgid(DInfo->tktkRes_rftk3_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==PION_PDGID &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==PION_PDGID) ||
													(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk3_MassHypo[j]) && 
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==findPdgid(DInfo->tktkRes_rftk4_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==PION_PDGID &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==PION_PDGID) ||
													(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk4_MassHypo[j]) && 
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==findPdgid(DInfo->tktkRes_rftk3_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==PION_PDGID &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==PION_PDGID) ||
													(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk3_index[j]]])==findPdgid(DInfo->tktkRes_rftk4_MassHypo[j]) && 
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk4_index[j]]])==findPdgid(DInfo->tktkRes_rftk3_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==findPdgid(DInfo->tktkRes_rftk1_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==findPdgid(DInfo->tktkRes_rftk2_MassHypo[j]) &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]])==PION_PDGID &&
													 TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->tktkRes_rftk2_index[j]]])==PION_PDGID))
													 {
														 Dgen[typesize] = 3344;
														 dGenIdxRes = GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->tktkRes_rftk1_index[j]]]];
													 }
										}
									}
								}
							}
						}
					}
					if(DInfo->rftk2_index[j]>-1)
					{
						if(TrackInfo->geninfo_index[DInfo->rftk2_index[j]]>-1)
						{
							if(GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]>-1)
							{
								if(TMath::Abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]])==DpdgId &&
										GenInfo->mo1[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]]==dGenIdxRes)
								{
									if(TMath::Abs(GenInfo->pdgId[TrackInfo->geninfo_index[DInfo->rftk2_index[j]]])==PION_PDGID)
									{
										Dgen[typesize]+=20000;
									}
								}
							}
						}
					}
				}

				if(Dgen[typesize]==23333||Dgen[typesize]==23344)
				{
					if(dGenIdxRes<0) cout<<"ERROR: Gen-Matched D index is -1"<<endl;
					else
					{
						DgenIndex[typesize] = dGenIdxRes;
						if((DInfo->type[j]==1||DInfo->type[j]==2)&&GenInfo->nDa[DgenIndex[typesize]]>2) Dgen[typesize]=41000;
						DgennDa[typesize] = GenInfo->nDa[DgenIndex[typesize]];
						Dgenpt[typesize] = GenInfo->pt[DgenIndex[typesize]];
						Dgeneta[typesize] = GenInfo->eta[DgenIndex[typesize]];
						Dgenphi[typesize] = GenInfo->phi[DgenIndex[typesize]];
						DgencollisionId[typesize] = GenInfo->collisionId[DgenIndex[typesize]];
						b4P->SetXYZM(GenInfo->pt[DgenIndex[typesize]]*cos(GenInfo->phi[DgenIndex[typesize]]),
								GenInfo->pt[DgenIndex[typesize]]*sin(GenInfo->phi[DgenIndex[typesize]]),
								GenInfo->pt[DgenIndex[typesize]]*sinh(GenInfo->eta[DgenIndex[typesize]]),
								GenInfo->mass[DgenIndex[typesize]]);
						Dgeny[typesize] = b4P->Rapidity();
						DgenprodvtxX[typesize] = GenInfo->vtxX[DgenIndex[typesize]];
						DgenprodvtxY[typesize] = GenInfo->vtxY[DgenIndex[typesize]];
						DgenprodvtxZ[typesize] = GenInfo->vtxZ[DgenIndex[typesize]];
						DgendecayvtxX[typesize] = GenInfo->vtxX[GenInfo->da1[DgenIndex[typesize]]]; //production vertex of first daughter
						DgendecayvtxY[typesize] = GenInfo->vtxY[GenInfo->da1[DgenIndex[typesize]]];
						DgendecayvtxZ[typesize] = GenInfo->vtxZ[GenInfo->da1[DgenIndex[typesize]]];
						//decide if from gen PV or not
						if( fabs(DgenprodvtxX[typesize] - GenInfo->genPVx) < 0.001 && fabs(DgenprodvtxY[typesize] - GenInfo->genPVy) < 0.001 && fabs(DgenprodvtxZ[typesize] - GenInfo->genPVz) < 0.001 )
							DgenfromgenPV[typesize] = 1;
						else
							DgenfromgenPV[typesize] = -1;
						int DgenBAncestorindex = findBAncestor(DgenIndex[typesize], GenInfo);
						if( DgenBAncestorindex >= 0 )
						{
							DgenBAncestorpt[typesize] = GenInfo->pt[DgenBAncestorindex];
							DgenBAncestorpdgId[typesize] = GenInfo->pdgId[DgenBAncestorindex];
						}
					}
				}
			}//if(!real)
		}//fillDtree

		int findBAncestor(int j, GenInfoBranches *GenInfo)
		{
			int BAncestorindex = -999;
			if( GenInfo->nMo[j] == 0 ) return BAncestorindex;

			int motherindex = -999;
			int daughterindex = j;
			int igeneration = 0;//to control how many generations loop up, 50 is big enough. To avoid infinite loop
			//just work for 1 mom case yet, but more than 99.9% particle just have one mom
			//and in B->D decay chain, all particles should just have one mom (they are not from collision). Should be checked
			while( GenInfo->nMo[daughterindex] == 1 && BAncestorindex < 0 && igeneration < 50 )
			{
				motherindex = GenInfo->mo1[daughterindex];
				if( motherindex < 0 ) break;
				if( ( TMath::Abs( GenInfo->pdgId[motherindex] ) > 500  && TMath::Abs( GenInfo->pdgId[motherindex] ) < 600 ) || ( TMath::Abs( GenInfo->pdgId[motherindex] ) > 5000  && TMath::Abs( GenInfo->pdgId[motherindex] ) < 6000 ) )
					BAncestorindex = motherindex;
				igeneration++;
				daughterindex = motherindex;
			}

			return BAncestorindex;
		}

		bool isDsignalGen(int dmesontype, int j, GenInfoBranches *GenInfo)
		{
			bool flag=false;
			if(dmesontype==1||dmesontype==2)
			{
				if(TMath::Abs(GenInfo->pdgId[j])==DZERO_PDGID&&GenInfo->nDa[j]==2&&GenInfo->da1[j]!=-1&&GenInfo->da2[j]!=-1)
				{
					if((((GenInfo->pdgId[GenInfo->da1[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID)||
									(GenInfo->pdgId[GenInfo->da2[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID))&&dmesontype==1) ||
							(((GenInfo->pdgId[GenInfo->da1[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID)||
							  (GenInfo->pdgId[GenInfo->da2[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID))&&dmesontype==2))
					{
						flag=true;
					}
				}
			}
			if(dmesontype==3||dmesontype==4)
			{
				if(TMath::Abs(GenInfo->pdgId[j])==DPLUS_PDGID&&GenInfo->nDa[j]==3&&GenInfo->da1[j]!=-1&&GenInfo->da2[j]!=-1&&GenInfo->da3[j]!=-1)
				{
					if((((GenInfo->pdgId[GenInfo->da1[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID)||
									(GenInfo->pdgId[GenInfo->da2[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID)||
									(GenInfo->pdgId[GenInfo->da3[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID))&&dmesontype==4) ||
							(((GenInfo->pdgId[GenInfo->da1[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID)||
							  (GenInfo->pdgId[GenInfo->da2[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID)||
							  (GenInfo->pdgId[GenInfo->da3[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID))&&dmesontype==3))
					{
						flag=true;
					}
				}
			}
			if(dmesontype==5||dmesontype==6)
			{
				if(TMath::Abs(GenInfo->pdgId[j])==DZERO_PDGID&&GenInfo->nDa[j]==4&&GenInfo->da1[j]!=-1&&GenInfo->da2[j]!=-1&&GenInfo->da3[j]!=-1&&GenInfo->da4[j]!=-1)
				{
					if((((GenInfo->pdgId[GenInfo->da1[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[j]])==PION_PDGID)||
									(GenInfo->pdgId[GenInfo->da2[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[j]])==PION_PDGID)||
									(GenInfo->pdgId[GenInfo->da3[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[j]])==PION_PDGID)||
									(GenInfo->pdgId[GenInfo->da4[j]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID))&&dmesontype==6) ||
							(((GenInfo->pdgId[GenInfo->da1[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[j]])==PION_PDGID)||
							  (GenInfo->pdgId[GenInfo->da2[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[j]])==PION_PDGID)||
							  (GenInfo->pdgId[GenInfo->da3[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[j]])==PION_PDGID)||
							  (GenInfo->pdgId[GenInfo->da4[j]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[j]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[j]])==PION_PDGID))&&dmesontype==5))
					{
						flag=true;
					}
				}
			}
			if(dmesontype==7||dmesontype==8)
			{
				if(TMath::Abs(GenInfo->pdgId[j])==DSUBS_PDGID&&GenInfo->nDa[j]==2&&GenInfo->da1[j]!=-1&&GenInfo->da2[j]!=-1)
				{
					if(TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==PHI_PDGID)
					{
						if(GenInfo->nDa[GenInfo->da1[j]]==2&&GenInfo->da1[GenInfo->da1[j]]!=-1&&GenInfo->da2[GenInfo->da1[j]]!=-1)
						{
							if(TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==KAON_PDGID)
							{
								if((GenInfo->pdgId[GenInfo->da2[j]]==PION_PDGID&&dmesontype==7) ||
										(GenInfo->pdgId[GenInfo->da2[j]]==(0-PION_PDGID)&&dmesontype==8))
									flag=true;                      
							}
						}
					}
				}
			}
			if(dmesontype==9||dmesontype==10)
			{
				if(TMath::Abs(GenInfo->pdgId[j])==DSTAR_PDGID&&GenInfo->nDa[j]==2&&GenInfo->da1[j]!=-1&&GenInfo->da2[j]!=-1)
				{
					if(TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==DZERO_PDGID)
					{
						if(GenInfo->nDa[GenInfo->da1[j]]==2&&GenInfo->da1[GenInfo->da1[j]]!=-1&&GenInfo->da2[GenInfo->da1[j]]!=-1)
						{
							if((((GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID)||
											(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID))&&GenInfo->pdgId[GenInfo->da2[j]]==(0-PION_PDGID)&&dmesontype==10) ||
									(((GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID)||
									  (GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID))&&GenInfo->pdgId[GenInfo->da2[j]]==PION_PDGID&&dmesontype==9))
							{
								flag=true;                      
							}
						}
					}
				}
			}
			if(dmesontype==11||dmesontype==12)
			{
				if(TMath::Abs(GenInfo->pdgId[j])==DSTAR_PDGID&&GenInfo->nDa[j]==2&&GenInfo->da1[j]!=-1&&GenInfo->da2[j]!=-1)
				{
					if(TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==DZERO_PDGID)
					{
						if(GenInfo->nDa[GenInfo->da1[j]]==4&&GenInfo->da1[GenInfo->da1[j]]!=-1&&GenInfo->da2[GenInfo->da1[j]]!=-1&&GenInfo->da3[GenInfo->da1[j]]!=-1&&GenInfo->da4[GenInfo->da1[j]]!=-1)
						{
							if((((GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[GenInfo->da1[j]]])==PION_PDGID)||
											(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[GenInfo->da1[j]]])==PION_PDGID)||
											(GenInfo->pdgId[GenInfo->da3[GenInfo->da1[j]]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[GenInfo->da1[j]]])==PION_PDGID)||
											(GenInfo->pdgId[GenInfo->da4[GenInfo->da1[j]]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[GenInfo->da1[j]]])==PION_PDGID))&&GenInfo->pdgId[GenInfo->da2[j]]==(0-PION_PDGID)&&dmesontype==12) ||
									(((GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[GenInfo->da1[j]]])==PION_PDGID)||
									  (GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[GenInfo->da1[j]]])==PION_PDGID)||
									  (GenInfo->pdgId[GenInfo->da3[GenInfo->da1[j]]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da4[GenInfo->da1[j]]])==PION_PDGID)||
									  (GenInfo->pdgId[GenInfo->da4[GenInfo->da1[j]]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da3[GenInfo->da1[j]]])==PION_PDGID))&&GenInfo->pdgId[GenInfo->da2[j]]==PION_PDGID&&dmesontype==11))
							{
								flag=true;                      
							}
						}
					}
				}
			}
			if(dmesontype==13||dmesontype==14)
			{
				if(TMath::Abs(GenInfo->pdgId[j])==BPLUS_PDGID&&GenInfo->nDa[j]==2&&GenInfo->da1[j]!=-1&&GenInfo->da2[j]!=-1)
				{
					if(TMath::Abs(GenInfo->pdgId[GenInfo->da1[j]])==DZERO_PDGID)
					{
						if(GenInfo->nDa[GenInfo->da1[j]]==2&&GenInfo->da1[GenInfo->da1[j]]!=-1&&GenInfo->da2[GenInfo->da1[j]]!=-1)
						{
							if((((GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID)||
											(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]]==KAON_PDGID&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID))&&GenInfo->pdgId[GenInfo->da2[j]]==PION_PDGID&&dmesontype==13) ||
									(((GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]])==PION_PDGID)||
									  (GenInfo->pdgId[GenInfo->da1[GenInfo->da1[j]]]==(0-KAON_PDGID)&&TMath::Abs(GenInfo->pdgId[GenInfo->da2[GenInfo->da1[j]]])==PION_PDGID))&&GenInfo->pdgId[GenInfo->da2[j]]==(0-PION_PDGID)&&dmesontype==14))
							{
								flag=true;                      
							}
						}
					}
				}
			}

			return flag;
		}

};

#endif
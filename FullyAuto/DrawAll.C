#include <cmath>
#include <TFile.h>
#include <TString.h>
#include <TLine.h>
#include <TTree.h>
#include <TLatex.h>
#include <TGraphErrors.h>
#include <cassert>
#include <iostream>
#include <fstream>
//#include "parameters.h"
using namespace std;



using std::cout;
using std::endl;
#endif

void DrawAll()
{
	int DrawMode = 0;

	//gROOT->LoadMacro("sPhenixStyle.C");
	//SetsPhenixStyle();


	TFile *fin1;
	TFile *fin2;
	TFile *fin3;
	TFile *fin4;

if(DrawMode=1){
	fin1 = new TFile("ROOTFiles/2017/Projection2nd.root");
	fin2 = new TFile("ROOTFiles/2017/Projection3rd.root");
	fin3 = new TFile("ROOTFiles/2018/Projection3rd.root");
	fin4 = new TFile("ROOTFiles/2018/Projection4th.root");
	}


if(DrawMode=0){
	fin1 = new TFile("ROOTFiles/2017/Projection2nd.root");
	fin2 = new TFile("ROOTFiles/2017/Projection3rd.root");
	fin3 = new TFile("ROOTFiles/2018/Projection5th.root");
	fin4 = new TFile("ROOTFiles/2018/Projection7th.root");
	}

	TH1D * h1 = (TH1D *) fin1->Get("MEHisRe");
	TH1D * h2 = (TH1D *) fin2->Get("MEHisRe");
	TH1D * h3 = (TH1D *) fin3->Get("MEHisRe");
	TH1D * h4 = (TH1D *) fin4->Get("MEHisRe");
/*
	h1->Rebin(2);
	h2->Rebin(2);
	h3->Rebin(2);
	h4->Rebin(2);
*/
	TCanvas  * c = new TCanvas("c","c",1200,1200);
	c->cd();
	h3->SetTitle("2018 and 2018 Position Scan Rescaled Mean Energy Distribution Comparison Plot");
	h3->GetXaxis()->SetTitle("Rescaled Mean Energy");
	h3->GetYaxis()->SetTitle("Probability/Bin");

	h3->SetMaximum(0.45);
	h3->SetLineColor(kBlue);
	h3->SetLineWidth(4.5);
	h3->Draw();
	h1->SetLineColor(kRed);
	h1->SetLineWidth(4.5);
	h1->Draw("SAME");
	h2->SetLineColor(kPink-1);
	h2->SetLineWidth(9);
	h2->SetLineStyle(2);
	h2->Draw("SAME");
	h4->SetLineColor(kCyan+3);
	h4->SetLineWidth(9);
	h4->SetLineStyle(2);
	h4->Draw("SAME");

	TLegend * l = new TLegend(0.25,0.72,0.95,0.93);
	l->AddEntry(h1,"2018 sPHENIX Rotation Scan - RMS/Mean = 0.0767","l");
	l->AddEntry(h2,"2018 Dual Channeling Scan - RMS/Mean = 0.0824","l");
	l->AddEntry(h3,"2017 10 Degree Tilted Scan - RMS/Mean = 0.0663","l");
	l->AddEntry(h4,"2017 0 Degree Tilted Scan - RMS/Mean = 0.0962","l");
	l->Draw("SAME");

	c->SaveAs("AllComparison.png");
	TFile *fout = new TFile("AllComparison.root","RECREATE");
	fout->cd();
	h1->Write();
	h2->Write();
	h3->Write();
	h4->Write();
	fout->Close();
}


#include <cmath>
#include <TFile.h>
#include <TString.h>
#include <TLine.h>
#include <TTree.h>
#include <TLatex.h>
#include <TGraphErrors.h>
#include <cassert>
#include "SaveCanvas.C"
#include "SetOKStyle.C"
#include <iostream>
#include <fstream>
using namespace std;



using std::cout;
using std::endl;
#endif


void PlotEnergy()
{

  gSystem->Load("libg4eval.so");
  gSystem->Load("libqa_modules.so");
  gSystem->Load("libPrototype3.so");
 gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);


int Ini = 3543;
int Final = 3579;
 int step = 1;

int num = (Final - Ini)/step;

const int N = num;

double x[N];
	double y[N];
double X[N];
	double Y[N];

double Horizontal[N];
double Vertical[N];
double Energy[N];

char inputfile[512];

int j;

double xmax = 0;
double ymax = 0;

char outfilehis[512];

for(int i =0; i < N; i ++)
{




cout << " i = " << i << endl; 

j = i * step + Ini;

cout << " j = " << j << endl; 


//if(i != 11 && i != 13 && i != 15 && i != 16 && i != 22 && i != 21)
//{

if(j != 3416 && j != 3418 && j != 3420 && j != 3421 && j != 3427 && j != 3426)
{

//sprintf(inputfile,"/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2017/Production_0128_WithHCalCalib/beam_0000%d-0000_DSTReader.root",j);
//sprintf(inputfile,"/data/data/phnxsa/beam/beam_0000%d-0000.root",j);

sprintf(outfilehis,"Plotfiles/ACX%d.root",j);

//sprintf(inputfile,"/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2017/Production_0128_WithHCalCalib/beam_0000%d-0000_DSTReader.root",j);

sprintf(inputfile,"/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2017/Production_0130_WithEMCalCalib/beam_0000%d-0000_DSTReader.root",j);

ifstream ifile(inputfile);



if(ifile){

TFile *fin = new TFile(inputfile);



TTree *t = (TTree *)fin->Get("T");

t->SetAlias("Average_column", "Sum$(TOWER_CALIB_CEMC.get_column() * TOWER_CALIB_CEMC.get_energy())/Sum$(TOWER_CALIB_CEMC.get_energy())");
t->SetAlias("Average_HODO_HORIZONTAL", "Sum$(TOWER_CALIB_HODO_HORIZONTAL.towerid * (abs(TOWER_CALIB_HODO_HORIZONTAL.energy)>30) * abs(TOWER_CALIB_HODO_HORIZONTAL.energy))/Sum$((abs(TOWER_CALIB_HODO_HORIZONTAL.energy)>30) * abs(TOWER_CALIB_HODO_HORIZONTAL.energy))");
t->SetAlias("Average_row","Sum$(TOWER_CALIB_CEMC.get_row() * TOWER_CALIB_CEMC.get_energy())/Sum$(TOWER_CALIB_CEMC.get_energy())");
t->SetAlias("Valid_HODO_HORIZONTAL", "Sum$(abs(TOWER_CALIB_HODO_HORIZONTAL.energy)>30) > 0");
t->SetAlias("No_Triger_VETO", "Sum$(abs(TOWER_RAW_TRIGGER_VETO.energy)>15)==0");
t->SetAlias("Valid_HODO_VERTICAL", "Sum$(abs(TOWER_CALIB_HODO_VERTICAL.energy)>30) > 0");
 //Cherenkov Counter //
t->SetAlias("C2_Inner_e", "1*abs(TOWER_RAW_C2[2].energy)");
t->SetAlias("C2_Outer_e", "1*abs(TOWER_RAW_C2[3].energy)");
t->SetAlias("C2_Sum_e", "C2_Inner_e + C2_Outer_e");
  t->SetAlias("Average_HODO_VERTICAL","Sum$(TOWER_CALIB_HODO_VERTICAL.towerid * (abs(TOWER_CALIB_HODO_VERTICAL.energy)>30) * abs(TOWER_CALIB_HODO_VERTICAL.energy))/Sum$((abs(TOWER_CALIB_HODO_VERTICAL.energy)>30) * abs(TOWER_CALIB_HODO_VERTICAL.energy))");


  t->SetAlias("XPos", "beam_2CH_mm + 5* int( Average_HODO_HORIZONTAL + 0.5)");
  t->SetAlias("YPos", "beam_2CV_mm + 5* int(Average_HODO_VERTICAL + 0.5)");

//return;

//TCut event_sel = "Valid_HODO_HORIZONTAL && Valid_HODO_VERTICAL && No_Triger_VETO";


 TCut event_sel = "Valid_HODO_HORIZONTAL && Valid_HODO_VERTICAL && No_Triger_VETO && C2_Sum_e>200";

  t->Draw(">>EventList", event_sel);
 
  TEventList * elist = gDirectory->GetObjectChecked("EventList", "TEventList");
 
//cout << "Cut is " << event_sel.data() << endl;

  cout << elist->GetN() << " / " << t->GetEntriesFast() << " events selected" << endl;
 
  t->SetEventList(elist);

// t->Draw("beam_2CH_mm >> h1");
 t->Draw("XPos >> h1");



TH1D *h2= new TH1D("h2","",200,0,7);

t->Draw("Average_column >> h2");

  t->Draw("beam_2CV_mm >> h3");

t->Draw("YPos >> h3");



TH1D *h4= new TH1D("h4","",200,0,7);

t->Draw("Average_row >> h4");



x[i] = h1->GetMean();
y[i] = h2->GetMean();


X[i] = h3->GetMean();
Y[i] = h4->GetMean();


//t->Draw("beam_2CV_mm >> h2");

//t->Draw("TOWER_CALIB_CEMC.energy >> h3");

TFile *fout = new TFile(outfilehis,"RECREATE");


TH2D *h7= new TH2D("h7","",200,170,310,200,0,10);
TH2D *h8= new TH2D("h8","",200,60,250,200,0,10);


t->Draw("Average_column:XPos >> h7");



//TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);

h7->GetXaxis()->SetTitle("2CH - 5*Hodo (mm)");
h7->GetYaxis()->SetTitle("Average Column (mm) ");
h7->SetTitle("Average Column vs X Position");

  h7->Draw("colz");
h7->Write();


t->Draw("Average_row:YPos >> h8");

h8->GetXaxis()->SetTitle("2CV + 5*Hodo (mm)");
h8->GetYaxis()->SetTitle("Average Row (mm)");
h8->SetTitle("Average Row vs Y Position");

  h8->Draw("colz");
h8->Write();

//c1->Update();

 //c1->SaveAs("ACX.png");


//y[i] = h3->GetMean();

//E[i] = h3->GetMean();



cout << "x = " <<  x[i] << endl;

cout << "y = " <<  y[i] << endl;


if (xmax < x[i]) xmax = x[i];
if (xmax > x[i]) xmax = xmax;

if (xmax < y[i]) ymax = y[i];
if (xmax > y[i]) ymax = ymax;


}

if (!ifile) { 

	i = i + 1;

cout << "File  " << i << "does not exist" << endl; 

}



}

}

TCanvas *c11 = new TCanvas("c11", "c11",0,0,800,600);
c11->cd();

 gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);
   gStyle->SetEndErrorSize(0.01);
   c11->SetFillColor(10);
   c11->SetBorderMode(0);
   c11->SetBorderSize(2);
   c11->SetFrameFillColor(0);
   c11->SetFrameBorderMode(0);

   c11->SetGridx();
   c11->SetGridy();

   c11->SetLeftMargin(0.13);
   c11->SetBottomMargin(0.13);
   c11->SetTopMargin(0.02);
   c11->SetRightMargin(0.06);

   double x1 = 210;
   double x2 = 310;
   double y1 = 0;
   double y2 = 10;

   TH1D *d1 = new TH1D("d1","",100,x1,x2);
   d1->SetMinimum(y1);
   d1->SetMaximum(y2);
   d1->GetXaxis()->SetNdivisions(208);
   d1->GetXaxis()->SetTitle("x (mm)");
   d1->GetXaxis()->SetTitleOffset(0.9);
   d1->GetXaxis()->SetTitleSize(0.06);
   d1->GetXaxis()->SetLabelOffset(0.01);
   d1->GetXaxis()->SetLabelSize(0.045);
   d1->GetXaxis()->SetLabelFont(42);
   d1->GetXaxis()->SetTitleFont(42);
   d1->GetYaxis()->SetNdivisions(205);
   d1->GetYaxis()->SetTitle("Average Column (mm)");
   d1->GetYaxis()->SetTitleOffset(1.0);
   d1->GetYaxis()->SetTitleSize(0.06);
   d1->GetYaxis()->SetLabelOffset(0.005);
   d1->GetYaxis()->SetLabelSize(0.045);
   d1->GetYaxis()->SetLabelFont(42);
   d1->GetYaxis()->SetTitleFont(42);
   d1->SetLineWidth(2);
   d1->Draw();

   TLine *l1 = new TLine(x1,y1,x2,y1);
   l1->SetLineWidth(3);
   l1->Draw("same");
   TLine *l2 = new TLine(x1,y2,x2,y2);
   l2->SetLineWidth(3);
   l2->Draw("same");
   TLine *l3 = new TLine(x1,y1,x1,y2);
   l3->SetLineWidth(3);
   l3->Draw("same");
   TLine *l4 = new TLine(x2,y1,x2,y2);
   l4->SetLineWidth(3);
   l4->Draw("same");

TGraph *gr = new TGraphErrors(N, x, y);




    gr->SetMarkerSize(1.1);
   gr->SetMarkerStyle(20);
   gr->SetLineWidth(2);
    gr->SetName("Average Column vs x");

	gr->Draw("p");
	
	c11->Update();

  c11->SaveAs("ACVH.png");



TCanvas *c12 = new TCanvas("c11", "c11",0,0,800,600);
c12->cd();

 gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);
   gStyle->SetEndErrorSize(0.01);
   c12->SetFillColor(10);
   c12->SetBorderMode(0);
   c12->SetBorderSize(2);
   c12->SetFrameFillColor(0);
   c12->SetFrameBorderMode(0);

   c12->SetGridx();
   c12->SetGridy();

   c12->SetLeftMargin(0.13);
   c12->SetBottomMargin(0.13);
   c12->SetTopMargin(0.02);
   c12->SetRightMargin(0.06);

    x1 = 40;
    x2 = 200;
    y1 = 0;
    y2 = 10;

   TH1D *d0 = new TH1D("d0","",100,x1,x2);
   d0->SetMinimum(y1);
   d0->SetMaximum(y2);
   d0->GetXaxis()->SetNdivisions(208);
   d0->GetXaxis()->SetTitle("y (mm)");
   d0->GetXaxis()->SetTitleOffset(0.9);
   d0->GetXaxis()->SetTitleSize(0.06);
   d0->GetXaxis()->SetLabelOffset(0.01);
   d0->GetXaxis()->SetLabelSize(0.045);
   d0->GetXaxis()->SetLabelFont(42);
   d0->GetXaxis()->SetTitleFont(42);
   d0->GetYaxis()->SetNdivisions(205);
   d0->GetYaxis()->SetTitle("Average Row (mm)");
   d0->GetYaxis()->SetTitleOffset(1.0);
   d0->GetYaxis()->SetTitleSize(0.06);
   d0->GetYaxis()->SetLabelOffset(0.005);
   d0->GetYaxis()->SetLabelSize(0.045);
   d0->GetYaxis()->SetLabelFont(42);
   d0->GetYaxis()->SetTitleFont(42);
   d0->SetLineWidth(2);
   d0->Draw();

   TLine *l1 = new TLine(x1,y1,x2,y1);
   l1->SetLineWidth(3);
   l1->Draw("same");
   TLine *l2 = new TLine(x1,y2,x2,y2);
   l2->SetLineWidth(3);
   l2->Draw("same");
   TLine *l3 = new TLine(x1,y1,x1,y2);
   l3->SetLineWidth(3);
   l3->Draw("same");
   TLine *l4 = new TLine(x2,y1,x2,y2);
   l4->SetLineWidth(3);
   l4->Draw("same");

TGraph *gr2 = new TGraphErrors(N, X, Y);




    gr2->SetMarkerSize(1.1);
   gr2->SetMarkerStyle(20);
   gr2->SetLineWidth(2);
    gr2->SetName("Average Column vs y");

	gr2->Draw("p");
	
	c12->Update();

  c12->SaveAs("ARVV.png");



}

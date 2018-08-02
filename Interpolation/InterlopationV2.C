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
using namespace std;



using std::cout;
using std::endl;
#endif

void InterlopationV2()
{
TFile *fin = new TFile("EnergyPosition.root");


int binx;


int biny;
double step = 1;

double Xmin = 170;
double Xmax = 310.0;

double Ymin = 20;
double Ymax = 205.0;

int NumX = (Xmax - Xmin)/step;
int NumY = (Ymax - Ymin)/step;

const int XBins = NumX;

const int YBins = NumY;


cout << "XBins = " << XBins << endl;
cout << "YBins = " << YBins << endl;


//double value[XBins][YBins];

TH2D *Inter = new TH2D("Inter","",XBins,Xmin,Xmax,YBins,Ymin,Ymax);

/*
double ylower = 35;
double yhigher = 188;
double xlower = 178;
double xhigher = 301; 
*/

//int n;

const int AllBins = XBins * YBins;


double x[AllBins];
double y[AllBins];
double z[AllBins];
//double X[AllBins];

int index = 0;

for(int i = 0; i < XBins; i++)
{

	for(int j = 0; j < YBins; j++)
	{


		x[index] = Xmin + step * i;
	//cout << x[index] << endl;

	index = index + 1;

		y[index] = Ymin + step *j;



	}


}






index = 0;


for(int i = 0; i < XBins; i++)
{

	for(int j = 0; j < YBins; j++)
	{


z[index] = EnPo->GetBinContent(i,j);
index = index + 1;

	}
}

//Horizontal Interpolation Begins//


//for(int i =0; i < XBins; i++)



/*

   for(int j = 1; j < YBins; j++)
{

Inter->SetBinContent(i,j,value[i][j]);

}


}

Inter->GetXaxis()->SetTitle("Horizontal Axis (mm)");
Inter->GetYaxis()->SetTitle("Vertical Axis (mm)");
Inter->SetTitle("Energy vs Horizontal and Vertical");

*/

/*
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

   double x1 = Xmin;
   double x2 = Xmax;
   double y1 = Ymin;
   double y2 = Ymax;
   double z1 = 0;
   double z2 = 10;

   TH2D *d1 = new TH2D("d1","",100,x1,x2,200,Ymin,Ymax);
   d1->SetMinimum(z1);
   d1->SetMaximum(z2);
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




TFile *fout = new TFile("InterpolatedV2.root","RECREATE");

  
  //Inter->Write();

TGraph2D *g = new TGraph2D(AllBins, x, y, z);
g->Write();


    g->SetMarkerSize(0.8);
   g->SetMarkerStyle(20);
   g->SetLineWidth(2);
    g->SetName("Energy vs x and y");

	g->Draw("p");
	
	c11->Update();

  c11->SaveAs("Plot.png");
*/
  int newBins = (XBins - 1)(YBins -1);

char function[512];

int nx1;
int nx2;
int ny1;
int ny2;

int n11;
int n12;
int n21;
int n22;

for(int l = 0; l < XBins - 2; l++)
{

for(int k = 0; k < YBins - 2; k++)
{

nx1 = k+l*YBins;
nx2 = k+l*YBins+YBins;
ny1 = k+l*YBins;
ny2 = k+1+l*YBins;

n11 = ny1;
n21 = ny1 + YBins;
n12 = ny1+1;
n22 = ny1 + 1 + YBins;

sprintf(function,"(z[%d](x[%d]-x)*(y[%d]-y)+z[%d](x[%d]-x)*(y[%d]-y)+z[%d](x[%d]-x)*(y[%d]-y)+z[%d](x[%d]-x)*(y[%d]-y))/((x[%d]-x[%d])*(y[%d]-y[%d]))",n11,nx2,ny2,n21,nx1,ny2,n12,nx2,ny1,n22,nx1,ny1,nx2,nx1,ny2,ny1);


cout << function << endl;
TF2 *func = new TF2("func",function,x[k+l*YBins],x[k+l*YBins+YBins],y[k+l*YBins],y[k+1+l*YBins]);

func->Draw("SAME");

}
}
}

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

void InterlopationV4()
{

	 gStyle->SetOptFit(0);
   gStyle->SetOptStat(0);
	
	TFile *fin = new TFile("EnergyPosition2.root");

//Set Tower Horizontal Lines//
double y1 = 90;
double y2 = 113;
double y3 = 141;
double y4 = 166;
double y5 = 190;

//Set Tower Vertical Lines//

double x1 = 204;
double x2 = 227.5;
double x3 = 248;
double x4 = 265;
double x5 = 283;



int binx;

int forward = 2;
int backward = 2;


int biny;
double step = 1;

double Xmin = 170;
double Xmax = 310.0;

double Ymin = 60;
double Ymax = 245.0;




cout << Ymax << endl;

int NumX = (Xmax - Xmin)/step;
int NumY = (Ymax - Ymin)/step;

const int XBins = NumX;

const int YBins = NumY;
double x;
double y;

cout << "XBins = " << XBins << endl;
cout << "YBins = " << YBins << endl;


double value[XBins][YBins];

double finalvalue[XBins][YBins];

TH2D *Inter = new TH2D("Inter","",XBins,Xmin,Xmax,YBins,Ymin,Ymax);

/*
double ylower = 35;
double yhigher = 188;
double xlower = 178;
double xhigher = 301; 
*/
int k;

int NumberofValue;
double Sum;
for(int i = 0; i < XBins; i++)
{

//x = Xmin + step*i;


for(int j = 0; j < YBins; j++)
{

//	TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
//	y = Ymin + step*j;




value[i][j] = EnPo->GetBinContent(i,j);


}
}

//Horizontal Interpolation Begins//

for(int i = backward; i < XBins - backward; i++)
{

	for(int j = backward; j < YBins - backward; j++)
{

//cout << "OK" << endl;

NumberofValue = 0;
Sum = 0;
for(int k = i - backward; k < i + forward +1; k++)
{

	for(int m = j - backward; m < j+backward+1; m++)
	{
	
		if(value[k][m] > 0) NumberofValue = NumberofValue + 1;
		
		Sum = Sum + value[k][m];
	
			}

}

cout << "Number of Value = " << NumberofValue << endl;

cout << "Sum = " << Sum << endl;

if(NumberofValue > 0) finalvalue[i][j] = Sum/NumberofValue;

cout << " i = " << i <<  "  j = " << j << endl;

cout << "Final Value is " << finalvalue[i][j]  << endl;


Inter->SetBinContent(i,j,finalvalue[i][j]);


}


}

/*
cout << "Horizontal Done" << endl;


//Vertical Interpolation Begins//

cout << "DONE Value" << endl;

for(int i = 1; i < XBins; i++)
{

	for(int j = 1; j < YBins; j++)
{

	cout << "Before Updating: Binx =  " << i << "   " << "Bin y = " << j << " Value =  " << value[i][j] << endl;


if (value[i][j] < 6.8 && value[i][j-1] >0 && i < XBins && j < YBins)
{


k = j;
do {
	k = k + 1;
	
//	cout << "k value is = " << k << endl;
}
while(value[i][k] == 0 && k < YBins); 

//cout << "neW k " << k  << endl;
		
value[i][j] =value[i][j-1] + (value[i][k] - value[i][j-1])/(k+1-j);

	cout << "After Updating: Binx =  " << i << "   " << "  Bin y = " << j << "  Value =  " <<value[i][j] << endl;

}


}


}

cout << "Vk =" << k << endl;

//Vertical Interpolation Ends//

cout << "VERTICAL DONE" << endl;

*/
/*
for(int i =0; i < XBins; i++)
{



	for(int j = 1; j < YBins; j++)
{


}


}
*/
Inter->GetXaxis()->SetTitle("Horizontal Axis (mm)");
Inter->GetYaxis()->SetTitle("Vertical Axis (mm)");
Inter->SetTitle("Energy vs Horizontal and Vertical");

  TFile *fout = new TFile("Interpolated2.root","RECREATE");
Inter->Write();


TCanvas *c22 = new TCanvas("c22", "c22",0,0,800,600);

c22->cd();





Inter->Draw("colz");

// Horizontal line Tower 1 //
   TLine *l1 = new TLine(Xmin,y1,Xmax,y1);
   l1->SetLineWidth(1);
   l1->Draw("same");


 TLatex* texCol;
texCol= new TLatex(Xmin,y1,"Tower 1");
  texCol->SetTextAlign(31);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();


// Horizontal line Tower 2 //


   TLine *l2 = new TLine(Xmin,y2,Xmax,y2);
   l2->SetLineWidth(1);
   l2->Draw("same");



texCol= new TLatex(Xmin,y2,"Tower 2");
  texCol->SetTextAlign(31);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();

// Horizontal line Tower 3//


   TLine *l3 = new TLine(Xmin,y3,Xmax,y3);
   l3->SetLineWidth(1);
   l3->Draw("same");



texCol= new TLatex(Xmin,y3,"Tower 3");
  texCol->SetTextAlign(31);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();



// Horizontal line Tower 4 //


   TLine *l4 = new TLine(Xmin,y4,Xmax,y4);
   l4->SetLineWidth(1);
   l4->Draw("same");



texCol= new TLatex(Xmin,y4,"Tower 4");
  texCol->SetTextAlign(31);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();

  // Horizontal line Tower 5 //


   TLine *l4 = new TLine(Xmin,y5,Xmax,y5);
   l4->SetLineWidth(1);
   l4->Draw("same");




texCol= new TLatex(Xmin,y5,"Tower 5");
  texCol->SetTextAlign(31);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();




// Vertical line Tower 1 //
   TLine *l6 = new TLine(x1,Ymin,x1,Ymax);
   l6->SetLineWidth(1);
   l6->Draw("same");


 TLatex* texCol;
texCol= new TLatex(x1,Ymax,"Tower 1");
  texCol->SetTextAlign(23);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();


// Horizontal line Tower 2 //


   TLine *l7 = new TLine(x2,Ymin,x2,Ymax);
   l7->SetLineWidth(1);
   l7->Draw("same");


 TLatex* texCol;
texCol= new TLatex(x2,Ymax,"Tower 2");
  texCol->SetTextAlign(23);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();

// Horizontal line Tower 3//


   TLine *l8 = new TLine(x3,Ymin,x3,Ymax);
   l8->SetLineWidth(1);
   l8->Draw("same");


 TLatex* texCol;
texCol= new TLatex(x3,Ymax,"Tower 3");
  texCol->SetTextAlign(23);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();


// Horizontal line Tower 4 //

   TLine *l9 = new TLine(x4,Ymin,x4,Ymax);
   l9->SetLineWidth(1);
   l9->Draw("same");


 TLatex* texCol;
texCol= new TLatex(x4,Ymax,"Tower 4");
  texCol->SetTextAlign(23);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();


  // Horizontal line Tower 5 //


   TLine *l10 = new TLine(x5,Ymin,x5,Ymax);
   l10->SetLineWidth(1);
   l10->Draw("same");


 TLatex* texCol;
texCol= new TLatex(x5,Ymax,"Tower 5");
  texCol->SetTextAlign(23);
  texCol->SetTextSize(0.03);
 texCol->SetTextFont(42);
  texCol->Draw();



c22->Update();

c22->SaveAs("Interpolation.png");

}

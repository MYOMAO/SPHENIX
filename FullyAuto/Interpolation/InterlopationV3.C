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

void InterlopationV3()
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
double x;
double y;

cout << "XBins = " << XBins << endl;
cout << "YBins = " << YBins << endl;


double value[XBins][YBins];

TH2D *Inter = new TH2D("Inter","",XBins,Xmin,Xmax,YBins,Ymin,Ymax);

/*
double ylower = 35;
double yhigher = 188;
double xlower = 178;
double xhigher = 301; 
*/
int k;

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

for(int j = 1; j < YBins; j++)
{

	for(int i = 1; i < XBins; i++)
{

//cout << "OK" << endl;

	cout << "Before Horizontal Updating: Binx =  " << i << "   " << "Bin y = " << j << " Value =  " << value[i][j] << endl;
if (value[i][j] < 3.5 && value[i-1][j] > 0)
{



k = i;
cout << k << endl;

if( k < XBins-1)
{
do {
	k = k + 1;
	
	cout << "k IS " << k << endl;
}
while(value[k][j] == 0 && k < XBins-1); 
	
value[i][j] =value[i-1][j] + (value[k][j] - value[i-1][j])/(k-i+1);
}
//	cout << "After Updating: Binx =  " << i << "   " << "Bin y = " << j <<  value[i][j] << endl;
	cout << "After Horizontal Updating: Binx =  " << i << "   " << "  Bin y = " << j << "  Value =  " <<value[i][j] << endl;
}



}


}
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


for(int i =0; i < XBins; i++)
{



	for(int j = 1; j < YBins; j++)
{

Inter->SetBinContent(i,j,value[i][j]);

}


}

Inter->GetXaxis()->SetTitle("Horizontal Axis (mm)");
Inter->GetYaxis()->SetTitle("Vertical Axis (mm)");
Inter->SetTitle("Energy vs Horizontal and Vertical");

  TFile *fout = new TFile("Interpolated.root","RECREATE");
Inter->Write();


}

void Interlopation()
{
TFile *fin = new TFile("EnergyPosition.root");


int binx;


int biny;
double step;

double Xmin = 170;
double Xmax = 310.0;

double Ymin = 20;
double Ymax = 205.0;

const int XBins = (Xmax - Xmin)/step+1;
const int YBins = (Ymax - Ymin)/step+1;

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

for(int i = 0; i < XBins; i++)
{

x = Xmin + step*i;


for(int j = 0; j < YBins; j++)
{

//	TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
	y = Ymin + step*j;



binx = Energyhis->GetZaxis()->FindBin(x);
biny = Energyhis->GetYaxis()->FindBin(y);


value[i][j] = EnPo->GetBinContent(binx,biny);


}
}
//Vertical Interpolation Begins//

for(int i = 1; i < XBins; i++)
{

	for(int j = 1; j < YBins; j++)
{


if (value[i][j] == 0 && value[i][j-1] >0)
{

	cout << "Before Updating: Binx =  " << i << "   " << "Bin y = " << j <<  value[i][j] << endl;

k = j;
do k = k + 1 while(value[i][k] == 0); 
		
value[i][j] =value[i][j-1] + 1/(k-j+1)*(value[i][k] - value[i][j-1]);

	cout << "After Updating: Binx =  " << i << "   " << "Bin y = " << j <<  value[i][j] << endl;

}


}


}



//Vertical Interpolation Ends//


//Horizontal Interpolation Begins//

for(int j = 1; j < YBins; j++)
{

	for(int i = 1; i < XBins; i++)
{


if (value[i][j] == 0 && value[i-1][j] >0)
{

	cout << "Before Updating: Binx =  " << i << "   " << "Bin y = " << j <<  value[i][j] << endl;

k = i;
do k = k + 1 while(value[k][j] == 0); 
		
value[i][j] =value[i-1][j] + 1/(k-j+1)*(value[k][j] - value[i-1][j]);

	cout << "After Updating: Binx =  " << i << "   " << "Bin y = " << j <<  value[i][j] << endl;

}


}


}


for(int i =0; i < XBins; i++)
{

	for(int j = 1; j < YBins; j++)
{

Inter->Fill(Value[i][j]);

}


}

  TFile *fout = new TFile("Interpolated.root","RECREATE");
Inter->Write();


}

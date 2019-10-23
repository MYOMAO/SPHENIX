int Year=2018;
TString Ordertag = "Simulations-10Degree";




TFile * finData = new TFile("ROOTFiles/20186thRMS.root");
//TFile * finMC = new TFile("ROOTFiles/2018SimulationsRMS.root");
TFile * finMC = new TFile(Form("ROOTFiles/%d%sRMS.root",Year,Ordertag.Data()));
int sizeX = 1;
int stepX = 25;
int NBlockX = 4;
int MaxBinX = stepX * (NBlockX - 0);
int NBinX = MaxBinX/sizeX;

int sizeY = 1;
int stepY = 27;
int NBlockY = 4;
int MaxBinY = stepY *(NBlockY - 0);
int NBinY = MaxBinY/sizeY;
double EMinBoth = 5.5;
double EMaxBoth = 9.5;

double EMinNBoth = 0.65;
double EMaxNBoth = 1.30;



TString DataMCPlotX = Form("DataMCComp%d%s/DataMCX.png",Year,Ordertag.Data());
TString DataMCPlotY = Form("DataMCComp%d%s/DataMCY.png",Year,Ordertag.Data());



TString DataPlotX = Form("DataMCComp%d%s/DataX.png",Year,Ordertag.Data());
TString DataPlotY = Form("DataMCComp%d%s/DataY.png",Year,Ordertag.Data());


TString MCPlotX = Form("DataMCComp%d%s/MCX.png",Year,Ordertag.Data());
TString MCPlotY = Form("DataMCComp%d%s/MCY.png",Year,Ordertag.Data());



TString DataMCPlotXNormalized = Form("DataMCComp%d%s/DataMCXNormalized.png",Year,Ordertag.Data());
TString DataMCPlotYNormalized = Form("DataMCComp%d%s/DataMCYNormalized.png",Year,Ordertag.Data());



TString DataMCPlotXRatio = Form("DataMCComp%d%s/DataMCXRatio.png",Year,Ordertag.Data());
TString DataMCPlotYRatio = Form("DataMCComp%d%s/DataMCYRatio.png",Year,Ordertag.Data());






int MinDataY = 427;
//int MaxDataY = MinDataY + MaxBinY;
int MinDataX = 70;
//int MaxDataX = MinDataX + MaxBinX;

int MinMCY = 90;
//int MaxMCY = MinMCY + MaxBinY;
int MinMCX = 59;
//int MaxMCX = MinMCX + MaxBinX;






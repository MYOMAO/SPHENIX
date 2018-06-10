int year = 2017;
int inputfile =1;
int debug = 1;
int Method = 1;
int reverse =1;
int PosFix =0;
int recab = 1;
int doNormalize=1;
int runinfo =1;
int dointer = 0;
//TString InputFile = "/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2018/ShowerCalib_tilted/dst.lst_EMCalCalib.root";
//TString InputFile = "/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2018/ShowerCalib/dst.lst_EMCalCalib.root";
//TString InputFile ="/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2018/ShowerCalib_tilted/dst.lst_EMCalCalib.root";
//TString InputFile = "/gpfs/mnt/gpfs04/sphenix/user/jinhuang/Prototype_2018/ShowerCalib/dst.lst_EMCalCalib.root";

//TString InputFile ="/sphenix/user/zshi/sPHENIX/2018TestBeam/MyCode/EnergyScan/Codes/analysis/Prototype4/EMCal/macros/ScanList.list_EMCalCalib.root";

TString InputFile = "/gpfs/mnt/gpfs04/sphenix/user/zshi/sPHENIX/MyCode/2nd_positionscan.lst_EMCalCalib.root";


//TString InputFile ="/sphenix/user/zshi/sPHENIX/2018TestBeam/MyCode/EnergyScan/Codes/analysis/Prototype4/EMCal/macros/ScanListsPHENIX.list_EMCalCalib.root";

//TString InputFile ="/sphenix/user/zshi/sPHENIX/2018TestBeam/MyCode/EnergyScan/Codes/analysis/Prototype4/EMCal/macros/ScanListDual.list_EMCalCalib.root";

//TString InputFile="/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2018/4thPositionScan/dst.lst_EMCalCalib.root";

//TString InputFile = "/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2018/3rdPositionScan/dst.lst_EMCalCalib.root";

TString scale = "1.0";
TString scalerecab= "1.0";
TString PositionFile = "DatFiles/XYPosition4.dat";
TString MakePlotInf="HisFiles/HisAll.root";
TString PosFixOut="ROOTFiles/PosFix.root";
TString OutFileMakeFile = "ROOTFiles/His3.root";
TString OutFileReadHis2 = "ROOTFiles/EnergyPosition.root";
TString OutFileInter = "ROOTFiles/Interpolated.root";
TString HodoScope = "ROOTFiles/AVHS.root";
TString InterpolatedFile =Form("ROOTFiles/%d/Interpolated2Reversed.root",year);
TString ProjectionFile =Form("ROOTFiles/%d/Projection.root",year);
TString RMSFile =Form("ROOTFiles/%d/DualChannelRMS.root",year);

const int Xmin = 170;  
const int Xmax = 310;
const int Ymin = 60;
const int Ymax = 220;
const int Emin = 0;
const int Emax = 12.0;

/*
const int Xmin = 400;  
const int Xmax = 505;
const int Ymin = 150;
const int Ymax = 270;
//const int Emin = 3.8;
//const int Emax = 5.0;

const int Emin = 1.5;
const int Emax = 8.0;
*/
const double EminHis = 4.5;
const double EmaxHis = 9.0;


const double Xstep =5.0;
const double Ystep =5.0;
const double Estep = 0.06;
const double Runstep = 1;
/*
double LowEThres = 2;
double HighEThres = 10;

const double FitEmin = 3.0;
const double FitEmax = 11.0;

const int HisEmin = 2.0;
const int HisEmax = 12.0;
*/

double LowEThres = 2.0;
double HighEThres = 10.0;

const double FitEmin = 2.0;
const double FitEmax = 8.0;

const int HisEmin = 0.0;
const int HisEmax = 12.0;



//For the 0 Degree Scan//
/*
   int Nearest=15; 
   int ThresX = 20;
   int ThresY= 8;
   double yshift = 11;
   double xshift =11;

*/
//Fot the 10 Degree Scan//
//	int Nearest=15; 


double XProjstep = 5.0;
double YProjstep = 5.0;

int ThresX = 20;
int ThresY= 50;
int ThresYH = 20;


double yshift = 21;
double xshift =8;


//const int Runmin = 901;  
//const int Runmax= 995;
//const int Runmin =380;  
//const int Runmax=420;

const int Runmin = 878;  
const int Runmax= 899;

const int XBinsCal = (Xmax - Xmin)/Xstep;
const int YBinsCal =  (Ymax - Ymin)/Ystep;
const int EBinsCal = (Emax - Emin)/Estep;
const int RunBinCal = (Runmax - Runmin)/Runstep;

const int XBins = XBinsCal;
const int YBins = YBinsCal;
const int EBins = EBinsCal;
const int RunBins = RunBinCal;
//

//Set Tower Horizontal Lines//
double y1 = 82 + yshift;
double y2 = 107 + yshift;
double y3 = 132 + yshift;
double y4 = 157 + yshift;
double y5 = 182 + yshift;
double y6 = 207 + yshift;
double y7 = 232 + yshift;

double x1 = 417 + xshift;
double x2 = 442 + xshift;
double x3 = 467 + xshift;
double x4 = 492 + xshift;
double x5 = 517 + xshift;
double x6 = 542 + xshift;



//Set Tower Vertical Lines//


const int iFile = 878;
const int fFile = 899;

//const int nFiles = fFile-iFile+1;
const int nFiles = 16;

double ProjectionXmin = x1;
double ProjectionYmin = y1;

double ProjectionstepX = (x2 - x1)/2;
double ProjectionstepY = (y2 - y1)/2;
const int Binwidth = 10;

const int NTowerX = 6;
const int NTowerY = 7;

//HisFiles//
//


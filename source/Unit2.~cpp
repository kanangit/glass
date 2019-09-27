//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
        lBegin = 200;
        lEnd = 5000;
        deltaX = 1;
        flag_FindFirstUFS = false;
        FindFirstFS = false;
        flag_FindFirstSS = false;
        flag_FindFirstSZS = false;
        flag_FindFirstZS = false;
        flag_FindFirstZHZS = false;
        flag_FindFirstZHS = false;
        flag_FindFirstOS = false;
        flag_FindFirstKS = false;
        flag_FindFirstIKS = false;
        flag_FindFirstPS = false;
        flag_FindFirstNS = false;
        flag_FindFirstTS = false;
        flag_FindFirstBS = false;
        flag_ShowUFS = false;
        flag_ShowFS = false;
        flag_ShowSS = false;
        flag_ShowSZS = false;
        flag_ShowZS = false;
        flag_ShowZHZS = false;
        flag_ShowZHS = false;
        flag_ShowOS = false;
        flag_ShowKS = false;
        flag_ShowIKS = false;
        flag_ShowPS = false;
        flag_ShowNS = false;
        flag_ShowTS = false;
        flag_ShowBS = false;
        maskUFS = "ufs*";
        maskFS = "fs*";
        maskSS = "ss*";
        maskSZS = "szs*";
        maskZS = "zs*";
        maskZHZS = "zhzs*";
        maskZHS = "zhs*";
        maskOS = "os*";
        maskKS = "ks*";
        maskIKS = "iks*";
        maskPS = "ps*";
        maskNS = "ns*";
        maskTS = "ts*";
        maskBS = "bs*";
}
//---------------------------------------------------------------------------


AnsiString TForm2::FindFilterFile(AnsiString mask)
{
        // the function finds a file of a certain mask and returns its name
        // (the name serves as path)
        AnsiString name;
        if(flag_FindFirstUFS == true && mask == maskUFS)
                {

                     if (FindNext(srec_UFS) == 0)
                        name = srec_UFS.Name;
                     else
                        FindClose(srec_UFS);

                 }
        if (flag_FindFirstUFS == false && mask == maskUFS)
        {
                FindFirst(mask, faAnyFile, srec_UFS);
                name = srec_UFS.Name;
                flag_FindFirstUFS = true;
        }
        // FS filters:
        if(FindFirstFS == true && mask == maskFS)
                {
                if (FindNext(srec_FS) == 0)
                        name = srec_FS.Name;
                else
                        FindClose(srec_FS);
                
                 }
        if (FindFirstFS == false && mask == maskFS)
        {

                FindFirst(mask, faAnyFile, srec_FS);
                name = srec_FS.Name;
                FindFirstFS = true;
        }
        //SS filters:
        if(flag_FindFirstSS == true && mask == maskSS)
                {

                     if (FindNext(srec_SS) == 0)
                        name = srec_SS.Name;
                     else
                        FindClose(srec_SS);

                 }
        if (flag_FindFirstSS == false && mask == maskSS)
        {
                FindFirst(mask, faAnyFile, srec_SS);
                name = srec_SS.Name;
                flag_FindFirstSS = true;
        }
        //SZS filters:
        if(flag_FindFirstSZS == true && mask == maskSZS)
                {

                     if (FindNext(srec_SZS) == 0)
                        name = srec_SZS.Name;
                     else
                        FindClose(srec_SZS);

                 }
        if (flag_FindFirstSZS == false && mask == maskSZS)
        {
                FindFirst(mask, faAnyFile, srec_SZS);
                name = srec_SZS.Name;
                flag_FindFirstSZS = true;
        }
        //ZS filters:
        if(flag_FindFirstZS == true && mask == maskZS)
                {

                     if (FindNext(srec_ZS) == 0)
                        name = srec_ZS.Name;
                     else
                        FindClose(srec_ZS);

                 }
        if (flag_FindFirstZS == false && mask == maskZS)
        {
                FindFirst(mask, faAnyFile, srec_ZS);
                name = srec_ZS.Name;
                flag_FindFirstZS = true;
        }
        //ZHZS filters:
        if(flag_FindFirstZHZS == true && mask == maskZHZS)
                {

                     if (FindNext(srec_ZHZS) == 0)
                        name = srec_ZHZS.Name;
                     else
                        FindClose(srec_ZHZS);

                 }
        if (flag_FindFirstZHZS == false && mask == maskZHZS)
        {
                FindFirst(mask, faAnyFile, srec_ZHZS);
                name = srec_ZHZS.Name;
                flag_FindFirstZHZS = true;
        }
        //ZHS filters:
        if(flag_FindFirstZHS == true && mask == maskZHS)
                {

                     if (FindNext(srec_ZHS) == 0)
                        name = srec_ZHS.Name;
                     else
                        FindClose(srec_ZHS);

                 }
        if (flag_FindFirstZHS == false && mask == maskZHS)
        {
                FindFirst(mask, faAnyFile, srec_ZHS);
                name = srec_ZHS.Name;
                flag_FindFirstZHS = true;
        }
        //OS filters:
        if(flag_FindFirstOS == true && mask == maskOS)
                {

                     if (FindNext(srec_OS) == 0)
                        name = srec_OS.Name;
                     else
                        FindClose(srec_OS);

                 }
        if (flag_FindFirstOS == false && mask == maskOS)
        {
                FindFirst(mask, faAnyFile, srec_OS);
                name = srec_OS.Name;
                flag_FindFirstOS = true;
        }
        //KS filters:
        if(flag_FindFirstKS == true && mask == maskKS)
                {

                     if (FindNext(srec_KS) == 0)
                        name = srec_KS.Name;
                     else
                        FindClose(srec_KS);

                 }
        if (flag_FindFirstKS == false && mask == maskKS)
        {
                FindFirst(mask, faAnyFile, srec_KS);
                name = srec_KS.Name;
                flag_FindFirstKS = true;
        }
        //IKS filters:
        if(flag_FindFirstIKS == true && mask == maskIKS)
                {

                     if (FindNext(srec_IKS) == 0)
                        name = srec_IKS.Name;
                     else
                        FindClose(srec_IKS);

                 }
        if (flag_FindFirstIKS == false && mask == maskIKS)
        {
                FindFirst(mask, faAnyFile, srec_IKS);
                name = srec_IKS.Name;
                flag_FindFirstIKS = true;
        }
        //PS filters:
        if(flag_FindFirstPS == true && mask == maskPS)
                {

                     if (FindNext(srec_PS) == 0)
                        name = srec_PS.Name;
                     else
                        FindClose(srec_PS);

                 }
        if (flag_FindFirstPS == false && mask == maskPS)
        {
                FindFirst(mask, faAnyFile, srec_PS);
                name = srec_PS.Name;
                flag_FindFirstPS = true;
        }
        //NS filters:
        if(flag_FindFirstNS == true && mask == maskNS)
                {

                     if (FindNext(srec_NS) == 0)
                        name = srec_NS.Name;
                     else
                        FindClose(srec_NS);

                 }
        if (flag_FindFirstNS == false && mask == maskNS)
        {
                FindFirst(mask, faAnyFile, srec_NS);
                name = srec_NS.Name;
                flag_FindFirstNS = true;
        }
        //TS filters:
        if(flag_FindFirstTS == true && mask == maskTS)
                {

                     if (FindNext(srec_TS) == 0)
                        name = srec_TS.Name;
                     else
                        FindClose(srec_TS);

                 }
        if (flag_FindFirstTS == false && mask == maskTS)
        {
                FindFirst(mask, faAnyFile, srec_TS);
                name = srec_TS.Name;
                flag_FindFirstTS = true;
        }
        //BS filters:
        if(flag_FindFirstBS == true && mask == maskBS)
                {

                     if (FindNext(srec_BS) == 0)
                        name = srec_BS.Name;
                     else
                        FindClose(srec_BS);

                 }
        if (flag_FindFirstBS == false && mask == maskBS)
        {
                FindFirst(mask, faAnyFile, srec_BS);
                name = srec_BS.Name;
                flag_FindFirstBS = true;
        }
        return name;
}

filter TForm2::LoadData(AnsiString name)
        //The function Loads data (wavelength and optical density (OD)) from file into special structure filter
{
        double firstPoint, lastPoint, maxDen;
        // lBegin and LEnd -- borders of the future plot. firstPoint and
        // lastPoint -- borders of the available data in the file

        maxDen = 6;  // optical density of the missing points (very large absorbtion supposed)
        double noDataPoints = 2; //set to larger number if nonlinear approximation
        //used afterwards;
        double noDataDeltaBelow, noDataDeltaAbove; // step of our artifictual points with OD maxDen
        dot dotty;
        vector <dot> dots; // vector to store obtained data
        filter fil;  // the structure the function returns
        fil.name = name;    // name of the filter specified
        TStringList* coordsFromFile = new TStringList;
        coordsFromFile->Clear();
        coordsFromFile->LoadFromFile(name); // loading data to list of strings
        firstPoint = split(coordsFromFile->Strings[0]).x;  // obtaining last and firs points of the available data
        lastPoint = split(coordsFromFile->Strings[coordsFromFile->Count-1]).x;
        // filling missing points with maxDen values:
        if(lBegin < firstPoint - 1)
                {
                     dotty.x = lBegin;
                     dotty.y = maxDen;
                     dots.push_back(dotty);
                     noDataDeltaBelow = (firstPoint - 1 - lBegin) / noDataPoints;
                     while(dotty.x < firstPoint - 1)
                        {
                                dotty.x = dotty.x + noDataDeltaBelow;
                                dotty.y = maxDen;
                                dots.push_back(dotty);
                        }
                }
         for (int i = 0; i < coordsFromFile->Count; i++)
            {
                dotty = split(coordsFromFile->Strings[i]);
                dots.push_back(dotty);
            }
         //filling missing points above available with maxDen values   
        if(lEnd > lastPoint - 1)
                {
                        noDataDeltaAbove = (lEnd + 1 - dotty.x)/noDataPoints;
                        dotty.x = dotty.x + 1;
                        dotty.y = maxDen;
                        dots.push_back(dotty);
                        while(dotty.x < lEnd)
                                {
                                        dotty.x =  dotty.x + noDataDeltaAbove;
                                        dotty.y = maxDen;
                                        dots.push_back(dotty);
                                }
                }
        fil.dots = dots;
        return fil;
}
void __fastcall TForm2::TabUFSShow(TObject *Sender)
{
        if (flag_ShowUFS == false)
        {
                showUFS();
                flag_ShowUFS = true;
         }

}
//---------------------------------------------------------------------------

filter TForm2::CalcTransmn(filter filOD, double thkn, double n)
{
        //the function calculates transmission of a filter from the
        // index of absorbtion of the filter
        filter filTransmn;
        filTransmn.name = filOD.name;
        double ro, DRo;
        vector <dot> DL;
        double x = lBegin;
        unsigned int i = 0;
        // variable for calculating reflection correction
        DRo = 0;
        if(n !=0)
        {
                ro = pow((n-1)/(n+1),2);
                DRo = -2*log10(1-ro);
        }
        // calculating optical density
        while(x <= lEnd)
            {
                DL.push_back(InterpLinear(filOD, x));
                DL[i].y = DL[i].y * thkn + DRo;
                x = x+deltaX;
                i++;
            }
        // finally calculating transmission:
        x = lBegin;
        i = 0;
        while(x <= lEnd)
            {
                dot dotty;
                dotty.x = x;
                dotty.y = pow(10, -(DL[i].y));
                filTransmn.dots.push_back(dotty);
                x = x+deltaX;
                i++;
            }
        return filTransmn;
}

dot TForm2::InterpLinear(filter fil, double x)
{
        // linear interpolation of data, returns interpolation result for
        // x
        dot punkt;
        punkt.x = x;
        double N;
        N = fil.dots.size();
        unsigned int i = 0;
        if (x <= fil.dots[i].x)
                {double y0 = fil.dots[i].y;
                double y1 = fil.dots[i+1].y;
                double x0 = fil.dots[i].x;
                double x1 = fil.dots[i+1].x;
                punkt.y = (x*(y0-y1)+x0*y1-x1*y0)/(x0-x1);
                }
        else
        {
                while ( x > fil.dots[i].x && i< N )
                {
                        i++;
                }
                double y0 = fil.dots[i-1].y;
                double y1 = fil.dots[i].y;
                double x0 = fil.dots[i-1].x;
                double x1 = fil.dots[i].x;
                punkt.y = (x*(y0-y1)+x0*y1-x1*y0)/(x0-x1);
        }
        return punkt;
}

void TForm2::PlotData(filter data, TLineSeries * Series, TChart * Chart)
{
        // Adds dots into a certain Series of a certain Chart
        Series->ParentChart = Chart;
        Chart->Title->Text->Add(data.name);
        unsigned int i;
        for (i = 0; i < data.dots.size(); i++)
            {
                 Series->AddXY(data.dots[i].x, data.dots[i].y, data.dots[i].x);
            }
         //the next line is to make oy axis to end with 1
         Series->AddXY(data.dots[i-1].x+0.1, 1, data.dots[i-1].x+0.1);
         
}

void TForm2::showUFS()
{
         PlotData(CalcTransmn(LoadData(FindFilterFile(maskUFS)),1,1), Series1, Chart1);
         PlotData(CalcTransmn(LoadData(FindFilterFile(maskUFS)),1,1), LineSeries1, Chart2);
         PlotData(CalcTransmn(LoadData(FindFilterFile(maskUFS)),1,1), LineSeries2, Chart3);
         PlotData(CalcTransmn(LoadData(FindFilterFile(maskUFS)),1,1), LineSeries3, Chart4);
         PlotData(CalcTransmn(LoadData(FindFilterFile(maskUFS)),1,1), LineSeries4, Chart5);

}

void __fastcall TForm2::Chart1DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart1->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart2DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart2->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart3DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart3->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart4DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart4->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart5DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart5->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabFSShow(TObject *Sender)
{
         if (flag_ShowFS == false)
        {
                showFS();
                flag_ShowFS = true;
         }
}
//---------------------------------------------------------------------------


void TForm2::showFS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskFS)),1,1), LineSeries5, Chart6);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskFS)),1,1), LineSeries6, Chart7);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskFS)),1,1), LineSeries7, Chart8);
}
void __fastcall TForm2::Chart6DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart6->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart7DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart7->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart8DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart8->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabSSShow(TObject *Sender)
{
        if (flag_ShowSS == false)
        {
                showSS();
                flag_ShowSS = true;
         }
}
//---------------------------------------------------------------------------


void TForm2::showSS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries8, Chart9);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries9, Chart10);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries10, Chart11);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries11, Chart12);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries12, Chart13);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries13, Chart14);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries14, Chart15);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries15, Chart16);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries16, Chart17);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries17, Chart18);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSS)),1,1), LineSeries18, Chart19);
}
void __fastcall TForm2::Chart9DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart9->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart10DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart10->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart11DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart11->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart12DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart12->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart13DblClick(TObject *Sender)
{
Form1->IfFilterEmpty();
        Form1->PlotSep(Chart13->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart14DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart14->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart15DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart15->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart16DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart16->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart17DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart17->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart18DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart18->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart19DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart19->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::TabSZSShow(TObject *Sender)
{
        if (flag_ShowSZS == false)
        {
                showSZS();
                flag_ShowSZS = true;
         }
}
//---------------------------------------------------------------------------


void TForm2::showSZS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries19, Chart20);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries20, Chart21);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries21, Chart22);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries22, Chart23);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries23, Chart24);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries24, Chart25);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries25, Chart26);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries26, Chart27);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries27, Chart28);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries28, Chart29);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries29, Chart30);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries30, Chart31);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries31, Chart32);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries32, Chart33);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskSZS)),1,1), LineSeries33, Chart34);

}
void __fastcall TForm2::Chart20DblClick(TObject *Sender)
{
         Form1->IfFilterEmpty();
        Form1->PlotSep(Chart20->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart21DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart21->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart22DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart22->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart23DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart23->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart24DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart24->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart25DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart25->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart26DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart26->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart27DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart27->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart28DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart28->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart29DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart29->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart30DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart30->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart31DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart31->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart32DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart32->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart33DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart33->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart34DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart34->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::TabZSShow(TObject *Sender)
{
        if (flag_ShowZS == false)
        {
                showZS();
                flag_ShowZS = true;
         }
}
//---------------------------------------------------------------------------


void TForm2::showZS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZS)),1,1), LineSeries34, Chart35);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZS)),1,1), LineSeries35, Chart36);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZS)),1,1), LineSeries36, Chart37);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZS)),1,1), LineSeries37, Chart38);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZS)),1,1), LineSeries38, Chart39);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZS)),1,1), LineSeries39, Chart40);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZS)),1,1), LineSeries40, Chart41);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZS)),1,1), LineSeries41, Chart42);
}
void __fastcall TForm2::Chart35DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart35->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart36DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart36->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart37DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart37->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart38DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart38->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart39DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart39->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart40DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart40->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart41DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart41->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart42DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart42->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabZHZSShow(TObject *Sender)
{
        if (flag_ShowZHZS == false)
        {
                showZHZS();
                flag_ShowZHZS = true;
         }        
}
//---------------------------------------------------------------------------


void TForm2::showZHZS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries42, Chart43);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries43, Chart44);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries44, Chart45);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries45, Chart46);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries46, Chart47);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries47, Chart48);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries48, Chart49);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries49, Chart50);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries50, Chart51);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHZS)),1,1), LineSeries51, Chart52);
}
void __fastcall TForm2::Chart43DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart43->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart44DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart44->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart45DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart45->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart46DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart46->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart47DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart47->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart48DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart48->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart49DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart49->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart50DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart50->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart51DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart51->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart52DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart52->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabZHSShow(TObject *Sender)
{
        if (flag_ShowZHS == false)
        {
                showZHS();
                flag_ShowZHS = true;
         }        
}
//---------------------------------------------------------------------------


void TForm2::showZHS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries52, Chart53);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries53, Chart54);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries54, Chart55);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries55, Chart56);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries56, Chart57);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries57, Chart58);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries58, Chart59);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries59, Chart60);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries60, Chart61);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskZHS)),1,1), LineSeries61, Chart62);
}
void __fastcall TForm2::Chart53DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart53->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart54ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart54->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart55DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart55->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart56DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart56->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart57DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart57->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart58DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart58->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart59DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart59->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart60DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart60->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart61DblClick(TObject *Sender)
{
        Form1->IfFilterEmpty();
        Form1->PlotSep(Chart61->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart62DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart62->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart54DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart54->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabOSShow(TObject *Sender)
{
        if (flag_ShowOS == false)
        {
                showOS();
                flag_ShowOS = true;
         }
}
//---------------------------------------------------------------------------


void TForm2::showOS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskOS)),1,1), LineSeries62, Chart63);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskOS)),1,1), LineSeries63, Chart64);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskOS)),1,1), LineSeries64, Chart65);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskOS)),1,1), LineSeries65, Chart66);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskOS)),1,1), LineSeries66, Chart67);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskOS)),1,1), LineSeries67, Chart68);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskOS)),1,1), LineSeries68, Chart69);
}
void __fastcall TForm2::Chart63DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart63->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart64DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart64->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart65DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart65->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart66DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart66->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart67DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart67->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart68DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart68->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart69DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart69->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabKSShow(TObject *Sender)
{
        if (flag_ShowKS == false)
        {
                showKS();
                flag_ShowKS = true;
         }
}
//---------------------------------------------------------------------------


void TForm2::showKS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskKS)),1,1), LineSeries69, Chart70);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskKS)),1,1), LineSeries70, Chart71);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskKS)),1,1), LineSeries71, Chart72);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskKS)),1,1), LineSeries72, Chart73);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskKS)),1,1), LineSeries73, Chart74);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskKS)),1,1), LineSeries74, Chart75);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskKS)),1,1), LineSeries75, Chart76);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskKS)),1,1), LineSeries76, Chart77);
}
void __fastcall TForm2::Chart70DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart70->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart71DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart71->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart72DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart72->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart73DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart73->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart74DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart74->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart75DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart75->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart76DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart76->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart77DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart77->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabIKSShow(TObject *Sender)
{
        if (flag_ShowIKS == false)
        {
                showIKS();
                flag_ShowIKS = true;
         }        
}
//---------------------------------------------------------------------------


void TForm2::showIKS()
{
       	PlotData(CalcTransmn(LoadData(FindFilterFile(maskIKS)),1,1), LineSeries77, Chart78);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskIKS)),1,1), LineSeries78, Chart79);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskIKS)),1,1), LineSeries79, Chart80);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskIKS)),1,1), LineSeries80, Chart81);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskIKS)),1,1), LineSeries81, Chart82);
}
void __fastcall TForm2::Chart78DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart78->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart79DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart79->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart80DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart80->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart81DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart81->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart82DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart82->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabPSShow(TObject *Sender)
{
        if (flag_ShowPS == false)
        {
                showPS();
                flag_ShowPS = true;
         }        
}
//---------------------------------------------------------------------------


void TForm2::showPS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskPS)),1,1), LineSeries82, Chart83);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskPS)),1,1), LineSeries83, Chart84);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskPS)),1,1), LineSeries84, Chart85);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskPS)),1,1), LineSeries85, Chart86);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskPS)),1,1), LineSeries86, Chart87);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskPS)),1,1), LineSeries87, Chart88);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskPS)),1,1), LineSeries88, Chart89);
}
void __fastcall TForm2::Chart83DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart83->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart84DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart84->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart85DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart85->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart86DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart86->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart87DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart87->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart88DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart88->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart89DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart89->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabNSShow(TObject *Sender)
{
        if (flag_ShowNS == false)
        {
                showNS();
                flag_ShowNS = true;
         }        
}
//---------------------------------------------------------------------------


void TForm2::showNS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries89, Chart90);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries90, Chart91);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries91, Chart92);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries92, Chart93);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries93, Chart94);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries94, Chart95);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries95, Chart96);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries96, Chart97);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries97, Chart98);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries98, Chart99);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskNS)),1,1), LineSeries99, Chart100);
}
void __fastcall TForm2::Chart90DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart90->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart91DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart91->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart92DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart92->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart93DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart93->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart94DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart94->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart95DblClick(TObject *Sender)
{
       	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart95->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart96DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart96->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart97DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart97->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart98DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart98->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart99DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart99->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart100DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart100->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabTSShow(TObject *Sender)
{
        if (flag_ShowTS == false)
        {
                showTS();
                flag_ShowTS = true;
         }        
}
//---------------------------------------------------------------------------


void TForm2::showTS()
{
       	PlotData(CalcTransmn(LoadData(FindFilterFile(maskTS)),1,1), LineSeries100, Chart101);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskTS)),1,1), LineSeries101, Chart102);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskTS)),1,1), LineSeries102, Chart103);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskTS)),1,1), LineSeries103, Chart104);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskTS)),1,1), LineSeries104, Chart105);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskTS)),1,1), LineSeries105, Chart106);
}
void __fastcall TForm2::Chart101DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart101->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart102DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart102->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart103DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart103->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart104DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart104->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart105DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart105->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart106DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart106->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TabBSShow(TObject *Sender)
{
        if (flag_ShowBS == false)
        {
                showBS();
                flag_ShowBS = true;
         }        
}
//---------------------------------------------------------------------------


void TForm2::showBS()
{
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries106, Chart107);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries107, Chart108);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries108, Chart109);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries109, Chart110);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries110, Chart111);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries111, Chart112);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries112, Chart113);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries113, Chart114);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries114, Chart115);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries115, Chart116);
        PlotData(CalcTransmn(LoadData(FindFilterFile(maskBS)),1,1), LineSeries116, Chart117);
}
void __fastcall TForm2::Chart107DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart107->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart108DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart108->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart109DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart109->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart110DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart110->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart111DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart111->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart112DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart112->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart113DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart113->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart114DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart114->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart115DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart115->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart116DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart116->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Chart117DblClick(TObject *Sender)
{
	Form1->IfFilterEmpty();
        Form1->PlotSep(Chart117->Title->Text->Strings[1]);
        Form1->PlotSum();
        Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        flag_filterEmpty1 = true;
        flag_filterEmpty2 = true;
        flag_filterEmpty3 = true;
        flag_filterEmpty4 = true;
        flag_plotSepRunning  = false;
        flag_OnThicknsNChange = false;
}
//---------------------------------------------------------------------------


void TForm1::IfFilterEmpty()
{
        //checks if a user have chosen every each vector. If no, the glass is
        //filled with 1.0 valuse for each wavelength
        if(filter1.dots.size() == 0)
                {
                        for(unsigned int i = 0; i < (Form2->lEnd - Form2->lBegin)/Form2->deltaX + 1; i++)
                        {
                                filter1.dots.push_back();
                                filter1.dots[i].x = Form2->lBegin + i*Form2->deltaX;
                                filter1.dots[i].y = 1;         
                        }
                        //the filter is considered "empty"
                        //though it is filled by unit values
                        flag_filterEmpty1 = true;
                }
        if(filter2.dots.size() == 0)
                {
                        for(unsigned int i = 0; i < (Form2->lEnd - Form2->lBegin)/Form2->deltaX + 1; i++)
                        {
                                filter2.dots.push_back();
                                filter2.dots[i].x = Form2->lBegin + i*Form2->deltaX;
                                filter2.dots[i].y = 1;
                        }
                        //the filter is considered "empty"
                        //though it is filled by unit values
                        flag_filterEmpty2 = true;
                }
         if(filter3.dots.size() == 0)
                {
                        for(unsigned int i = 0; i < (Form2->lEnd - Form2->lBegin)/Form2->deltaX + 1; i++)
                        {
                                filter3.dots.push_back();
                                filter3.dots[i].x = Form2->lBegin + i*Form2->deltaX;
                                filter3.dots[i].y = 1;
                        }
                        //the filter is considered "empty"
                        //though it is filled by unit values
                        flag_filterEmpty3 = true;
                }
         if(filter4.dots.size() == 0)
                {
                        for(unsigned int i = 0; i < (Form2->lEnd - Form2->lBegin)/Form2->deltaX + 1; i++)
                        {
                                filter4.dots.push_back();
                                filter4.dots[i].x = Form2->lBegin + i*Form2->deltaX;
                                filter4.dots[i].y = 1;
                        }
                        //the filter is considered "empty"
                        //though it is filled by unit values
                        flag_filterEmpty4 = true;
                }

}
void __fastcall TForm1::ButtonFile1Click(TObject *Sender)
{
        filterNo = 1;
        Form2->Show();
        Hide();
}
//---------------------------------------------------------------------------


void TForm1::PlotSep(AnsiString name)
{
        //plots a separate filter into line series
        flag_plotSepRunning  = true; // indicates that function is running
        if(filterNo == 1)
        {
                filter1.dots.resize(0);
                ButtonFile1->Caption = name;
                double l, n;
                // cactching the exaption for the case if user tries to enter
                // any ugly stuff
                try
                {
                        l = EditThick1->Text.ToDouble();
                        n = EditRefr1->Text.ToDouble();
                }
                catch (Exception &E)
                {
                        l = 1;
                        n = 1;
                }
                filter1 = Form2->CalcTransmn(Form2->LoadData(name),l, n);
                flag_filterEmpty1 = false;
                Series2->Clear();
                Form2->PlotData(Form1->filter1, Form1->Series2, Form1->Chart1);
        }
        //repeat everything for the other filters
        if(filterNo == 2)
        {
                filter2.dots.resize(0);
                ButtonFile2->Caption = name;
                double l, n;
                try
                {
                        l = EditThick2->Text.ToDouble();
                        n = EditRefr2->Text.ToDouble();
                }
                catch (Exception &E)
                {
                        l = 1;
                        n = 1;
                }
                filter2 = Form2->CalcTransmn(Form2->LoadData(name),l, n);
                flag_filterEmpty2 = false;
                Series3->Clear();
                Form2->PlotData(Form1->filter2, Form1->Series3, Form1->Chart1);
        }
        if(filterNo == 3)
        {
                filter3.dots.resize(0);
                ButtonFile3->Caption = name;
                double l, n;
                try
                {
                        l = EditThick3->Text.ToDouble();
                        n = EditRefr3->Text.ToDouble();
                }
                catch (Exception &E)
                {
                        l = 1;
                        n = 1;
                }
                filter3 = Form2->CalcTransmn(Form2->LoadData(name),l, n);
                flag_filterEmpty3 = false;
                Series4->Clear();
                Form2->PlotData(Form1->filter3, Form1->Series4, Form1->Chart1);
        }
        if(filterNo == 4)
        {
                filter4.dots.resize(0);
                ButtonFile4->Caption = name;
                double l, n;
                try
                {
                        l = EditThick4->Text.ToDouble();
                        n = EditRefr4->Text.ToDouble();
                }
                catch (Exception &E)
                {
                        l = 1;
                        n = 1;
                }
                filter4 = Form2->CalcTransmn(Form2->LoadData(name),l, n);
                flag_filterEmpty4 = false;
                Series5->Clear();
                Form2->PlotData(Form1->filter4, Form1->Series5, Form1->Chart1);
        }
        flag_plotSepRunning  = false;        
}
void __fastcall TForm1::ButtonFile2Click(TObject *Sender)
{
      filterNo = 2;
      Form2->Show();
      Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonFile3Click(TObject *Sender)
{
        filterNo = 3;
        Form2->Show();
        Hide();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonFile4Click(TObject *Sender)
{
        filterNo = 4;
        Form2->Show();
        Hide();
}
//---------------------------------------------------------------------------


void TForm1::PlotSum()
{
        //Plots the resulting curve
        Series1->Clear();
        filterSum.dots.resize(0);
        Form1->IfFilterEmpty();
        for(unsigned int i = 0; i < (Form2->lEnd - Form2->lBegin)/Form2->deltaX - 1 ; i++)
        {
                Form1->filterSum.dots.push_back();
                Form1->filterSum.dots[i].x = Form2->lBegin + i*Form2->deltaX;
                Form1->filterSum.dots[i].y = Form1->filter1.dots[i].y * Form1->filter2.dots[i].y * Form1->filter3.dots[i].y * Form1->filter4.dots[i].y;
        }
        Form2->PlotData(Form1->filterSum, Form1->Series1, Form1->Chart1);
        watchW();
}

void TForm1::OnThicknsNChange()
{
        //replots all if thickness of refraction index
        // of a filter is changed
        flag_OnThicknsNChange = true;
        if(filterNo == 1)
        {
                if(filter1.dots.size() !=0 && flag_filterEmpty1 == false)
                {
                        PlotSep(ButtonFile1->Caption);
                        PlotSum();
                }
        }
        if(filterNo == 2)
        {
                if(filter2.dots.size() !=0 && flag_filterEmpty2 == false)
                {
                        PlotSep(ButtonFile2->Caption);
                        PlotSum();
                }
        }
        if(filterNo == 3)
        {
                if(filter3.dots.size() !=0 && flag_filterEmpty3 == false)
                {
                        PlotSep(ButtonFile3->Caption);
                        PlotSum();
                }
        }
        if(filterNo == 4)
        {
                if(filter4.dots.size() !=0 && flag_filterEmpty4 == false)
                {
                        PlotSep(ButtonFile4->Caption);
                        PlotSum();
                }
        }
flag_OnThicknsNChange = false;
}
void __fastcall TForm1::EditThick1Change(TObject *Sender)
{

        if(flag_plotSepRunning  == false && flag_OnThicknsNChange == false)
        {
                filterNo = 1;
                OnThicknsNChange();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditRefr1Change(TObject *Sender)
{
        if(flag_plotSepRunning  == false && flag_OnThicknsNChange == false)
        {
                filterNo = 1;
                OnThicknsNChange();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditThick2Change(TObject *Sender)
{
        if(flag_plotSepRunning  == false && flag_OnThicknsNChange == false)
        {
                filterNo = 2;
                OnThicknsNChange();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditRefr2Change(TObject *Sender)
{
        if(flag_plotSepRunning  == false && flag_OnThicknsNChange == false)
        {
                filterNo = 2;
                OnThicknsNChange();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditThick3Change(TObject *Sender)
{
        if(flag_plotSepRunning  == false && flag_OnThicknsNChange == false)
        {
                filterNo = 3;
                OnThicknsNChange();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditRefr3Change(TObject *Sender)
{
        if(flag_plotSepRunning  == false && flag_OnThicknsNChange == false)
        {
                filterNo = 3;
                OnThicknsNChange();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditThick4Change(TObject *Sender)
{
        if(flag_plotSepRunning  == false && flag_OnThicknsNChange == false)
        {
                filterNo = 4;
                OnThicknsNChange();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditRefr4Change(TObject *Sender)
{
        if(flag_plotSepRunning  == false && flag_OnThicknsNChange == false)
        {
                filterNo = 4;
                OnThicknsNChange();
        }
}
//---------------------------------------------------------------------------


void TForm1::ClearFilter()
{
        //Clears a separate filter
        if (filterNo == 1)
        {
                filter1.dots.resize(0);
                ButtonFile1->Caption = "Choose";
                EditThick1->Text = 1;
                EditRefr1->Text = 1;
                flag_filterEmpty1 = true;
                Series2->Clear();
                PlotSum();

        }
        if (filterNo == 2)
        {
                filter2.dots.resize(0);
                ButtonFile2->Caption = "Choose";
                EditThick2->Text = 1;
                EditRefr2->Text = 1;
                flag_filterEmpty2 = true;
                Series3->Clear();
                PlotSum();

        }
        if (filterNo == 3)
        {
                filter3.dots.resize(0);
                ButtonFile3->Caption = "Choose";
                EditThick3->Text = 1;
                EditRefr3->Text = 1;
                flag_filterEmpty3 = true;
                Series4->Clear();
                PlotSum();

        }
        if (filterNo == 4)
        {
                filter4.dots.resize(0);
                ButtonFile4->Caption = "Choose";
                EditThick4->Text = 1;
                EditRefr4->Text = 1;
                flag_filterEmpty4 = true;
                Series5->Clear();
                PlotSum();
        }
        if(filter1.dots.size() ==0 && filter2.dots.size() == 0 && filter3.dots.size() ==0 && filter4.dots.size() ==0)
                {
                        Series1->Clear();
                }

}
void __fastcall TForm1::ButtonFileClear1Click(TObject *Sender)
{
        filterNo = 1;
        ClearFilter();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonFileClear2Click(TObject *Sender)
{
        filterNo = 2;
        ClearFilter();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonFileClear3Click(TObject *Sender)
{
        filterNo = 3;
        ClearFilter();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonFileClear4Click(TObject *Sender)
{
        filterNo = 4;
        ClearFilter();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ButtonClearAllClick(TObject *Sender)
{
        for(unsigned int i = 1; i<5; i++)
        {
                filterNo = i;
                ClearFilter();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonUnZoomClick(TObject *Sender)
{
        Chart1->UndoZoom();        
}
//---------------------------------------------------------------------------



dot TForm1::CalcTSepFilter(double x, filter filOD, double thkn, double n)
{
        //Calculates transmission of a separate filter
        //of given thickness and n in a given wavelength
        //x
        dot retDot;
        if(x <=Form2->lEnd && x >=Form2->lBegin)
        {
                retDot.x = x;
                double ro, DRo;
                dot DL;
                DL.x = x;
        // variable for calculating reflection correction
                DRo = 0;
                if(n !=0)
                {
                        ro = pow((n-1)/(n+1),2);
                        DRo = -2*log10(1-ro);
                }
                DL = Form2->InterpLinear(filOD, x);
                DL.y = DL.y * thkn + DRo;
                retDot.y = pow(10, -(DL.y));
        }
        return retDot;
}

dot TForm1::CalcTAllFilters(double x)
{
        //Calculates transmission of all loaded
        // filters on a given wavelength x
        dot retDot;
        retDot.x = x;
        dot T1, T2, T3, T4;
        double l, n;
        bool ln1Ok, ln2Ok, ln3Ok, ln4Ok;
        ln1Ok = false;
        ln2Ok = false;
        ln3Ok = false;
        ln4Ok = false;
        T1.y = 1;
        T2.y = 1;
        T3.y = 1;
        T4.y = 1;
        // for filter1:
        // trying to read l and n parameters of a glass:
        try
        {
                l = EditThick1->Text.ToDouble();
                n = EditRefr1->Text.ToDouble();
                ln1Ok = true;
        }
        catch (Exception &E)
        {
                ln1Ok = false;
        }
        //calculating transmission of the filter1
        if(filter1.dots.size() !=0 && flag_filterEmpty1 == false && ln1Ok == true)
        {
                T1 = CalcTSepFilter(x, Form2->LoadData(ButtonFile1->Caption), l, n);
        }
        // for filter2:
        // trying to read l and n parameters of a glass:
        try
        {
                l = EditThick2->Text.ToDouble();
                n = EditRefr2->Text.ToDouble();
                ln2Ok = true;
        }
        catch (Exception &E)
        {
                ln2Ok = false;
        }
        //calculating transmission of the filter2
        if(filter2.dots.size() !=0 && flag_filterEmpty2 == false && ln2Ok == true)
        {
                T2 = CalcTSepFilter(x, Form2->LoadData(ButtonFile2->Caption), l, n);
        }
        // for filter3:
        // trying to read l and n parameters of a glass:
        try
        {
                l = EditThick3->Text.ToDouble();
                n = EditRefr3->Text.ToDouble();
                ln3Ok = true;
        }
        catch (Exception &E)
        {
                ln3Ok = false;
        }
        //calculating transmission of the filter3
        if(filter3.dots.size() !=0 && flag_filterEmpty3 == false && ln3Ok == true)
        {
                T3 = CalcTSepFilter(x, Form2->LoadData(ButtonFile3->Caption), l, n);
        }
        // for filter4:
        // trying to read l and n parameters of a glass:
        try
        {
                l = EditThick4->Text.ToDouble();
                n = EditRefr4->Text.ToDouble();
                ln4Ok = true;
        }
        catch (Exception &E)
        {
                ln4Ok = false;
        }
        //calculating transmission of the filter4
        if(filter4.dots.size() !=0 && flag_filterEmpty4 == false && ln4Ok == true)
        {
                T4 = CalcTSepFilter(x, Form2->LoadData(ButtonFile4->Caption), l, n);
        }
        retDot.y = T1.y*T2.y*T3.y*T4.y;
        if(T1.y == 1 && T2.y == 1 && T3.y == 1 && T4.y == 1)
        // this value is for us to indicate error:
                retDot.x = 0;
        return retDot;

}
void __fastcall TForm1::EditL1Change(TObject *Sender)
{
        watchW();
}
//---------------------------------------------------------------------------


void TForm1::watchW()
{
        // watches transmission on given wavelengths
        double x;
        dot dotLT;
        // watch wavelength L1:
        try
        {
                x = EditL1->Text.ToDouble();
                dotLT = CalcTAllFilters(x);
                if (dotLT.x != x || x < Form2->lBegin || x > Form2->lEnd)
                        EditT1->Text = "Nd";
                        else EditT1->Text = dotLT.y;
        }
        catch (Exception &E)
        {
                EditT1->Text = "Nd";
        }
        // watch wavelength L2:
        try
        {
                x = EditL2->Text.ToDouble();
                dotLT = CalcTAllFilters(x);
                if (dotLT.x != x || x < Form2->lBegin || x > Form2->lEnd)
                        EditT2->Text = "Nd";
                        else EditT2->Text = dotLT.y;
        }
        catch (Exception &E)
        {
                EditT2->Text = "Nd";
        }
        // watch wavelength L3:
        try
        {
                x = EditL3->Text.ToDouble();
                dotLT = CalcTAllFilters(x);
                if (dotLT.x != x || x < Form2->lBegin || x > Form2->lEnd)
                        EditT3->Text = "Nd";
                        else EditT3->Text = dotLT.y;
        }
        catch (Exception &E)
        {
                EditT3->Text = "Nd";
        }

}
void __fastcall TForm1::EditL2Change(TObject *Sender)
{
        watchW();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditL3Change(TObject *Sender)
{
        watchW();        
}
//---------------------------------------------------------------------------


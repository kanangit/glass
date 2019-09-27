//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "structures.h"
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *LabelThickness;
        TLabel *LabelRefractonIndex;
        TLabel *LabelFile;
        TLabel *LabelIfNeeded;
        TLabel *LabelFilter;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *LabelInmm;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TChart *Chart1;
        TLineSeries *Series1;
        TLineSeries *Series2;
        TLineSeries *Series3;
        TLineSeries *Series4;
        TLineSeries *Series5;
        TEdit *EditThick1;
        TEdit *EditThick2;
        TEdit *EditThick3;
        TEdit *EditThick4;
        TEdit *EditRefr1;
        TEdit *EditRefr2;
        TEdit *EditRefr3;
        TEdit *EditRefr4;
        TButton *ButtonFile1;
        TButton *ButtonFile2;
        TButton *ButtonFile3;
        TButton *ButtonFile4;
        TButton *ButtonFileClear3;
        TButton *ButtonFileClear4;
        TButton *ButtonFileClear2;
        TButton *ButtonFileClear1;
        TButton *ButtonClearAll;
        TButton *ButtonUnZoom;
        TGroupBox *GroupBoxWatch;
        TEdit *EditL1;
        TEdit *EditT1;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *EditT2;
        TEdit *EditL2;
        TEdit *EditT3;
        TEdit *EditL3;
        void __fastcall ButtonFile1Click(TObject *Sender);
        void __fastcall ButtonFile2Click(TObject *Sender);
        void __fastcall ButtonFile3Click(TObject *Sender);
        void __fastcall ButtonFile4Click(TObject *Sender);
        void __fastcall EditThick1Change(TObject *Sender);
        void __fastcall EditRefr1Change(TObject *Sender);
        void __fastcall EditThick2Change(TObject *Sender);
        void __fastcall EditRefr2Change(TObject *Sender);
        void __fastcall EditThick3Change(TObject *Sender);
        void __fastcall EditRefr3Change(TObject *Sender);
        void __fastcall EditThick4Change(TObject *Sender);
        void __fastcall EditRefr4Change(TObject *Sender);
        void __fastcall ButtonFileClear1Click(TObject *Sender);
        void __fastcall ButtonFileClear2Click(TObject *Sender);
        void __fastcall ButtonFileClear3Click(TObject *Sender);
        void __fastcall ButtonFileClear4Click(TObject *Sender);
        void __fastcall ButtonClearAllClick(TObject *Sender);
        void __fastcall ButtonUnZoomClick(TObject *Sender);
        void __fastcall EditL1Change(TObject *Sender);
        void __fastcall EditL2Change(TObject *Sender);
        void __fastcall EditL3Change(TObject *Sender);
private:	// User declarations
public:
        filter filter1;
        filter filter2;
        filter filter3;
        filter filter4;
        filter filterSum;
        // if the user have chosen a filter for each slot:
        bool flag_filterEmpty1;
        bool flag_filterEmpty2;
        bool flag_filterEmpty3;
        bool flag_filterEmpty4;
        filter filterExchange;
        // this variable is used to show functions which filter is under evaluation:
        unsigned int filterNo;
        bool flag_plotSepRunning;
        bool flag_OnThicknsNChange;		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void IfFilterEmpty();
        void PlotSep(AnsiString name);
        void PlotSum();
        void OnThicknsNChange();
        void ClearFilter();
        dot CalcTSepFilter(double x, filter filOD, double thkn, double n);
        dot CalcTAllFilters(double x);
        void watchW();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 
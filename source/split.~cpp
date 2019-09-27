//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "split.h"
dot split(AnsiString iS)
{ 
  dot returnDot;
  int i = 1;
  int k = 1;
  AnsiString xString, yString;
  while (iS[i] == '+'||iS[i] == '-'||iS[i] == '0'||iS[i] == '1'||iS[i] == '2'||iS[i] == '3'||iS[i] == '4'||iS[i] == '5'||iS[i] == '6'||iS[i] == '7'||iS[i] == '8'||iS[i] == '9'||iS[i] == '.'||iS[i] == 'E'||iS[i] == 'e')
             {
                char chur = iS[i];
                xString.Insert(chur, i);
                i++;
             }
  i++;
  for(i; i <=iS.Length(); i++)
  {
    char chur = iS[i];
    yString.Insert(chur, k);
    k++;
  }
  returnDot.x = xString.ToDouble();
  returnDot.y = yString.ToDouble();
  return returnDot;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

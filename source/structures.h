//---------------------------------------------------------------------------
#ifndef structuresH
#define structuresH
#include <vector.h>
typedef struct dot {
        double x, y;
} dotSample;
typedef struct filter {
        AnsiString name;
        vector <dot> dots;
} filterSample;
//---------------------------------------------------------------------------
#endif

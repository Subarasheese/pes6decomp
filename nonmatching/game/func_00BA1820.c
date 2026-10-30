/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCEC0[];
extern char D_00CBCEC4[];

void func_00BA1820(s32 arg0) {
    (*(s32 *)D_00CBCEC0) = arg0;
    (*(s32 *)D_00CBCEC4) = 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCAB8[];
extern char D_00CBCABC[];
extern char D_00CBCAC0[];

void func_00B2A4C0(s32 arg0, s32 arg1, s32 arg2) {
    (*(s32 *)D_00CBCAB8) = arg0;
    (*(s32 *)D_00CBCABC) = arg1;
    (*(s32 *)D_00CBCAC0) = arg2;
}

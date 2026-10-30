/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00181290(s32);
extern void func_00153FA0(void *);
extern void *D_0051FEA0;
extern char D_0051FEA4[];
extern void *D_0051FEA8;
extern char D_0051FEAC[];

s32 func_001808A0(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    if ((*(u8 *)D_0051FEAC) != 3) {
        return 1;
    }
    var_s1 = 0;
    if (func_00181290((*(s32 *)D_0051FEA4)) == 3) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        func_00153FA0(D_0051FEA8);
        func_00153FA0(D_0051FEA0);
        D_0051FEA8 = NULL;
        var_s0 = 1;
        D_0051FEA0 = NULL;
        (*(u8 *)D_0051FEAC) = 0;
    }
    return var_s0;
}

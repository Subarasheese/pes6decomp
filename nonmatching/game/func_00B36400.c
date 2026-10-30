/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCB10[];

void func_00B36400(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_a0;

    temp_a2 = 1 << arg0;
    if (arg1 != 0) {
        var_a0 = (*(s32 *)D_00CBCB10) | temp_a2;
    } else {
        var_a0 = (*(s32 *)D_00CBCB10) & ~temp_a2;
    }
    (*(s32 *)D_00CBCB10) = var_a0;
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065EC94[];
extern char D_0065EDC4[];
extern char D_0065EE78[];

void func_00656160(s32 arg0) {
    s32 var_a1;
    s32 var_v1;

    if (arg0 & 0xFF) {
        var_a1 = 1;
        var_v1 = 1;
    } else {
        var_a1 = 0;
        var_v1 = 0;
    }
    (*(s32 *)D_0065EDC4) = 0;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0) = var_a1;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 8) = var_v1;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 4) = 0;
    (*(s8 *)D_0065EE78) = 1;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0xC) = 0;
}

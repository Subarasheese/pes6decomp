/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065EC94[];
extern char D_0065EDC8[];
extern char D_0065EE78[];

void func_00656080(s32 arg0) {
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0x18) = arg0;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0x10) = 2;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0x14) = 0;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0x1C) = 1;
    (*(s8 *)D_0065EE78) = 1;
    (*(s32 *)D_0065EDC8) = 0;
}

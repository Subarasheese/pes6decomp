/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019B6E8(s32, s32, s32);                   /* extern */
extern char D_00602664[];

s32 func_001B6DF0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    (*(s32 *)D_00602664) = 0;
    temp_v0 = func_0019B6E8(arg1, arg2, arg3);
    if ((temp_v0 == -1) && ((*(s32 *)D_00602664) != 0)) {
        *arg0 = (*(s32 *)D_00602664);
    }
    return temp_v0;
}

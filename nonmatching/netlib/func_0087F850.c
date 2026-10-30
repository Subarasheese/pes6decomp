/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_008472D0();                               /* extern */
s32 func_0085E4C0(s64);                             /* extern */
s32 func_0087F760();                                /* extern */
extern char D_0058D804[];

s32 func_0087F850(s64 arg0) {
    s32 temp_v0;
    s64 temp_s0;

    temp_s0 = (s64) (arg0 << 0x30) >> 0x30;
    if (temp_s0 != *func_008472D0()) {
        return func_0085E4C0(arg0);
    }
    if (temp_s0 != 1) {
        return func_0085E4C0(arg0);
    }
    temp_v0 = func_0087F760();
    switch ((*(s8 *)D_0058D804)) {                           /* irregular */
    case 2:
        return 0;
    case 1:
        return 3;
    default:
        return temp_v0;
    }
}

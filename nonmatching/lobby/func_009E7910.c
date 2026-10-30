/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E84C0(s32);                         /* extern */
s32 func_009E8540(s32);                             /* extern */
extern char D_00A7DF60[];

s32 func_009E7910(s32 arg0) {
    s32 temp_s0;

    temp_s0 = (*(s32 *)D_00A7DF60);
    if (temp_s0 == 0) {
        return 1;
    }
    if (arg0 != 0) {
        func_009E84C0(temp_s0);
    }
    return func_009E8540(temp_s0);
}

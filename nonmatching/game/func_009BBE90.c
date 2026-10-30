/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBAB0(u8);                              /* extern */
extern char D_00591E57[];

s32 func_009BBE90(void *arg0) {
    s32 var_v0;
    u8 temp_s0;

    var_v0 = 0;
    if (((s32) (*(u8 *)D_00591E57) > 0) && ((s32) (*(u8 *)D_00591E57) < 0x17)) {
        var_v0 = 1;
    }
    if ((var_v0 != 0) && (M2C_FIELD(arg0, u8 *, 0x4C) != 0)) {
        temp_s0 = M2C_FIELD(arg0, u8 *, 0);
        if (temp_s0 == (func_00AFBAB0((*(u8 *)D_00591E57)) & 0xFF)) {
            return 1;
        }
    }
    return 0;
}

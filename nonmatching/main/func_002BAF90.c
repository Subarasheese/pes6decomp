/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_005E2FA8[];

s32 func_002BAF90(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f0;
    s32 temp_s0;
    s32 var_a0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 4);
    temp_f1 = (f32) temp_s0 + ((f32) ((M2C_FIELD(arg0, s32 *, 8) - temp_s0) * func_00BBB8C0(0x3E8)) / 1000.0f);
    if ((*(s32 *)D_005E2FA8) >= 0) {
        var_f0 = (f32) (*(s32 *)D_005E2FA8);
    } else {
        var_f0 = 2.0f * (f32) (((u32) (*(s32 *)D_005E2FA8) >> 1) | ((*(s32 *)D_005E2FA8) & 1));
    }
    temp_f1_2 = var_f0 + temp_f1;
    if (temp_f1_2 >= 2.1474836e9f) {
        var_a0 = (s32) (temp_f1_2 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a0 = (s32) temp_f1_2;
    }
    (*(s32 *)D_005E2FA8) = var_a0;
    return 0;
}

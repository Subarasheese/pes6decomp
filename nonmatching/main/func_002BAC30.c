/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_005E2FA4[];
extern char D_005E3274[];

s32 func_002BAC30(void *arg0) {
    f32 temp_f1;
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 4);
    temp_f1 = 0.001f * ((f32) temp_s0 + ((f32) ((M2C_FIELD(arg0, s32 *, 8) - temp_s0) * func_00BBB8C0(0x3E8)) / 1000.0f));
    (*(f32 *)D_005E2FA4) = temp_f1;
    if (!(temp_f1 <= (*(f32 *)D_005E3274))) {
        (*(f32 *)D_005E2FA4) = (*(f32 *)D_005E3274);
    }
    return 0;
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, s32);                        /* extern */
s32 func_009F4AC0(s32);                             /* extern */
s16 func_00A97C10(s32, s32);                        /* extern */
extern s32 D_003E74CC;

void func_00B046A0(void *arg0, s32 arg1) {
    s32 var_s2;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    var_s2 = func_009F4AC0((M2C_FIELD(((M2C_FIELD(temp_a1, u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2) - (s32) M2C_FIELD(temp_a1, f32 *, 0x38));
    if (var_s2 < 2) {
        var_s2 = 2;
    }
    M2C_FIELD(arg0, s16 *, 0x38) = func_00A97C10(func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF, var_s2);
}

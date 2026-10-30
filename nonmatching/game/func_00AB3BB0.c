/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E74CC;

void func_00AB3BB0(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f0;
    u8 temp_a1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 4);
    temp_f2 = M2C_FIELD(temp_a2, f32 *, 0x38);
    temp_a1 = M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), u8 *, 2);
    temp_f0 = (f32) (temp_a1 * 2);
    if (temp_f0 <= temp_f2) {
        M2C_FIELD(arg0, f32 *, 0xF4) = (f32) (M2C_FIELD(arg0, f32 *, 0xE4) / 2.0f);
        return;
    }
    if (temp_a1 != 0) {
        var_f0 = M2C_FIELD(arg0, f32 *, 0xE4) / (temp_f0 - temp_f2);
    } else {
        var_f0 = M2C_FIELD(arg0, f32 *, 0xE4) / ((f32) (M2C_FIELD(((M2C_FIELD(temp_a2, u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2) - temp_f2);
    }
    M2C_FIELD(arg0, f32 *, 0xF4) = var_f0;
}

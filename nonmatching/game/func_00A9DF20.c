/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, s32);                        /* extern */
s32 func_009F4DC0(s32, f32);                        /* extern */
extern s32 D_003E74CC;

s32 func_00A9DF20(void *arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (func_009F4DC0(M2C_FIELD(((M2C_FIELD(temp_a0, u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - (s32) M2C_FIELD(temp_a0, f32 *, 0x38), M2C_FIELD(temp_a0, f32 *, 0x28)) == 0) {
        return func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF;
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 4);
    temp_s0 = func_009F4DC0(M2C_FIELD(((M2C_FIELD(temp_a0_2, u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - (s32) M2C_FIELD(temp_a0_2, f32 *, 0x38), M2C_FIELD(temp_a0_2, f32 *, 0x28));
    return (s32) (func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) / temp_s0;
}

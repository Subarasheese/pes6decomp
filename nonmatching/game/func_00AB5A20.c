/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern u32 func_00288670(u32, u32);
s32 func_00BBB8C0(s32);                             /* extern */
extern f32 *D_003E74CC;
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_00AB5A20(void *arg0, f32 fparg0) {
    f32 var_f0;
    s32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1;

    temp_v0 = (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x71) & 0x7F) + func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U);
    if (temp_v0 < 0x65) {
        var_f0 = *D_003E74CC;
    } else {
        var_f0 = (*D_003E74CC * (f32) (temp_v0 + 0x400)) / 1024.0f;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = var_f0;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if ((func_00207D80(temp_a0, M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 1) * 2) + 4) != 0) {
        temp_v1 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_v1, f32 *, 0x28) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x28) + (f32) func_00BBB8C0((s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) / 6.0f)));
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a0_2, f32 *, 0x28) < fparg0) {
        M2C_FIELD(temp_a0_2, f32 *, 0x28) = fparg0;
    }
}

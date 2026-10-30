/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209A00(void *, s32, s32, u16);       /* extern */
extern s32 D_003E74CC;

void func_009D7E00(void *arg0) {
    s32 temp_f0;
    s32 var_a1;
    u16 temp_a1;
    u16 temp_a3;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_a1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_a1) {                              /* irregular */
    case 0x3C3:
        var_a1 = 0x3D8;
block_16:
        temp_a3 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 8);
        temp_f0 = (s32) (M2C_FIELD(temp_a0, f32 *, 0x38) - (f32) (temp_a3 * 2));
        if (M2C_FIELD((((var_a1 & 0xFFFF) * 4) + D_003E74CC), s32 *, 0x2FD8) >= temp_f0) {
            func_00209A00(temp_a0, var_a1, temp_f0 & 0xFFFF, temp_a3);
        }
        return;
    case 0x3C5:
        var_a1 = 0x3DA;
        goto block_16;
    case 0x3CF:
        var_a1 = 0x3E3;
        goto block_16;
    case 0x3CB:
        var_a1 = 0x3DF;
        goto block_16;
    case 0x3C9:
        var_a1 = 0x3DD;
        goto block_16;
    }
}

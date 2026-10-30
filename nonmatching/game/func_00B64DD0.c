/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
s32 func_001C02F0(s32);                             /* extern */
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
extern char D_00591F24[];

void func_00B64DD0(void **arg0) {
    s32 temp_s1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a0_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v1;
    void *temp_v1_3;

    temp_s1 = M2C_FIELD(*arg0, s32 *, 0x1C);
    func_00B2ACF0();
    temp_v1 = *arg0;
    var_v0 = temp_s1 + 0x200;
    temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 0x1C);
    if (var_v0 >= temp_v1_2) {
        var_v0 = temp_s1 - 0x200;
        if (temp_v1_2 < var_v0) {
            goto block_2;
        }
    } else {
block_2:
        M2C_FIELD(temp_v1, s32 *, 0x1C) = var_v0;
    }
    temp_v1_3 = *arg0;
    if (((s32) M2C_FIELD(temp_v1_3, u8 *, 0x4E) > 0) && (temp_a0 = M2C_FIELD(temp_v1_3, void **, 4), (func_00207D80(temp_a0, M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2) != 0))) {
        temp_a1 = M2C_FIELD(*arg0, void **, 4);
        M2C_FIELD(temp_a1, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 1) * 2);
        temp_a0_2 = *arg0;
        temp_a0_3 = M2C_FIELD(temp_a0_2, u8 *, 0x4E);
        if ((temp_a0_3 != 0xFF) && (temp_a0_3 != 0)) {
            M2C_FIELD(temp_a0_2, u8 *, 0x4E) = (u8) (temp_a0_3 - 1);
        }
    } else if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        temp_a1_2 = *arg0;
        if (M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 4), u16 *, 0x30) != 0x447) {

        } else {
            var_v1 = 1;
            if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_a1_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
                var_v1 = 0;
            }
            if (var_v1 != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x449, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x448, 0, 8);
            }
        }
        if (((*(u8 *)D_00591F24) != 5) && ((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 6) && ((*(u8 *)D_00591F24) != 2)) {
            temp_a0_4 = *arg0;
            M2C_FIELD(temp_a0_4, u16 *, 0x18) = (u16) (M2C_FIELD(temp_a0_4, u16 *, 0x18) + 1);
        } else {
            M2C_FIELD(*arg0, u16 *, 0x18) = 0x15U;
        }
    }
}

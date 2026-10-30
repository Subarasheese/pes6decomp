/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B707D0(void *);                      /* extern */

void func_00B71870(void *arg0) {
    s32 temp_a0_2;
    s32 temp_s1;
    s32 var_v1;
    u8 temp_a0_6;
    u8 temp_a0_7;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a1;

    temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C);
    func_00B2ACF0();
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    var_v1 = temp_s1 + 0x200;
    temp_a0_2 = M2C_FIELD(temp_a0, s32 *, 0x1C);
    if (var_v1 >= temp_a0_2) {
        var_v1 = temp_s1 - 0x200;
        if (temp_a0_2 < var_v1) {
            goto block_2;
        }
    } else {
block_2:
        M2C_FIELD(temp_a0, s32 *, 0x1C) = var_v1;
    }
    temp_a0_3 = M2C_FIELD(arg0, void **, 0);
    if ((s32) M2C_FIELD(temp_a0_3, u8 *, 0x4E) <= 0) {
        goto block_4;
    }
    temp_a0_4 = M2C_FIELD(temp_a0_3, void **, 4);
    if (func_00207D80(temp_a0_4, (M2C_FIELD(M2C_FIELD(temp_a0_4, void **, 4), u8 *, 2) * 2) - 1) != 0) {
        temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        M2C_FIELD(temp_a1, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 1) * 2);
        temp_a0_5 = M2C_FIELD(arg0, void **, 0);
        temp_a0_6 = M2C_FIELD(temp_a0_5, u8 *, 0x4E);
        if ((temp_a0_6 != 0xFF) && (temp_a0_6 != 0)) {
            M2C_FIELD(temp_a0_5, u8 *, 0x4E) = (u8) (temp_a0_6 - 1);
        }
    } else {
block_4:
        temp_a0_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        if ((temp_a0_7 != 0x19) && (temp_a0_7 != 0x1A) && (temp_a0_7 != 0x1B) && (temp_a0_7 != 0x1D) && (temp_a0_7 != 0x25) && (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0)) {
            func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
            func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 8);
            func_00B707D0(arg0);
        }
    }
}

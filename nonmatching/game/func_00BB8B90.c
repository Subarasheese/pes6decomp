/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
s32 func_00B67DA0(void **);                         /* extern */

void func_00BB8B90(void **arg0) {
    s32 temp_s1;
    s32 temp_v1_2;
    s32 var_v0;
    u16 temp_a0_4;
    u8 temp_a0_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
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
    if (((s32) M2C_FIELD(temp_v1_3, u8 *, 0x4E) > 0) && (temp_a0 = M2C_FIELD(temp_v1_3, void **, 4), (func_00207D80(temp_a0, (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2) - 1) != 0))) {
        temp_a1 = M2C_FIELD(*arg0, void **, 4);
        M2C_FIELD(temp_a1, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 1) * 2);
        temp_a0_2 = *arg0;
        temp_a0_3 = M2C_FIELD(temp_a0_2, u8 *, 0x4E);
        if ((temp_a0_3 != 0xFF) && (temp_a0_3 != 0)) {
            M2C_FIELD(temp_a0_2, u8 *, 0x4E) = (u8) (temp_a0_3 - 1);
        }
    } else if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        temp_a0_4 = M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30);
        switch (temp_a0_4) {                        /* irregular */
        case 0x417:
            if (func_00B67DA0(arg0) != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x41A, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x419, 0, 8);
            }
            break;
        case 0x418:
            if (func_00B67DA0(arg0) != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x46A, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x46B, 0, 8);
            }
            break;
        case 0x41E:
            if (func_00B67DA0(arg0) != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x422, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x421, 0, 8);
            }
            break;
        case 0x42E:
            if (func_00B67DA0(arg0) != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x431, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x430, 0, 8);
            }
            break;
        case 0x439:
            if (func_00B67DA0(arg0) != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x43C, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x43B, 0, 8);
            }
            break;
        case 0x440:
            if (func_00B67DA0(arg0) != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x444, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x443, 0, 8);
            }
            break;
        }
        M2C_FIELD(*arg0, s16 *, 0x18) = 0x72;
    }
}

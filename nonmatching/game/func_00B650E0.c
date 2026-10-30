/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001C02F0(s32);                             /* extern */
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00207D10(void *);                          /* extern */
s32 func_00207D80(void *, s32);                     /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
extern char D_00591F24[];

void func_00B650E0(void **arg0) {
    s32 temp_s1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    u16 temp_a0_4;
    u8 temp_a0_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_5;
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
        temp_a0_4 = M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 4), u16 *, 0x30);
        switch (temp_a0_4) {                        /* irregular */
        case 0x417:
            var_v1 = 1;
            if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_a1_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
                var_v1 = 0;
            }
            if (var_v1 != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x41A, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x419, 0, 8);
            }
            break;
        case 0x418:
            var_v1_2 = 1;
            if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_a1_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
                var_v1_2 = 0;
            }
            if (var_v1_2 != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x46A, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x46B, 0, 8);
            }
            break;
        case 0x41E:
            var_v1_3 = 1;
            if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_a1_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
                var_v1_3 = 0;
            }
            if (var_v1_3 != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x422, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x421, 0, 8);
            }
            break;
        case 0x42E:
            var_v1_4 = 1;
            if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_a1_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
                var_v1_4 = 0;
            }
            if (var_v1_4 != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x431, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x430, 0, 8);
            }
            break;
        case 0x439:
            var_v1_5 = 1;
            if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_a1_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
                var_v1_5 = 0;
            }
            if (var_v1_5 != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x43C, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x43B, 0, 8);
            }
            break;
        case 0x440:
            var_v1_6 = 1;
            if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_a1_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
                var_v1_6 = 0;
            }
            if (var_v1_6 != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x444, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x443, 0, 8);
            }
            break;
        case 0x40F:
            var_v1_7 = 1;
            if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_a1_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
                var_v1_7 = 0;
            }
            if (var_v1_7 != 0) {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x411, 0, 8);
            } else {
                func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x410, 0, 8);
            }
            break;
        }
        if (((*(u8 *)D_00591F24) != 5) && ((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 6) && ((*(u8 *)D_00591F24) != 2)) {
            temp_a0_5 = *arg0;
            M2C_FIELD(temp_a0_5, u16 *, 0x18) = (u16) (M2C_FIELD(temp_a0_5, u16 *, 0x18) + 1);
        } else {
            M2C_FIELD(*arg0, u16 *, 0x18) = 0x12U;
        }
    }
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00207D80(void *, M2C_UNK);                 /* extern */
M2C_UNK func_00273B90(void *);                      /* extern */
extern char D_005927B8[];
extern char D_005927B9[];
extern char D_005927BA[];
extern char D_005927BB[];

s32 func_00273EC0(void *arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u16 temp_v1;
    void *temp_a0;

    var_s2 = 0;
    var_s1 = 0;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    var_s0 = 0;
    switch (temp_v1) {                              /* irregular */
    case 0x16D:
        if (func_00207D80(temp_a0, 0x38) == 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) < 56.0f) {
block_61:
                var_s0 = 1;
            }
        } else {
            var_s1 = 1;
        }
        break;
    case 0x254:
        if (func_00207D80(temp_a0, 0x2C) == 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) < 44.0f) {
                goto block_61;
            }
        } else {
            var_s1 = 1;
        }
        break;
    case 0x253:
        if (func_00207D80(temp_a0, 0xC) == 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) < 12.0f) {
                goto block_61;
            }
        } else {
            var_s1 = 1;
        }
        break;
    case 0x184:
        if (func_00207D80(temp_a0, 0x14) == 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) < 20.0f) {
                goto block_61;
            }
        } else {
            var_s1 = 1;
        }
        break;
    case 0x385:
        if (func_00207D80(temp_a0, 0) == 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) < 0.0f) {
                goto block_61;
            }
        } else {
            var_s1 = 1;
        }
        break;
    case 0x29E:
        if (func_00207D80(temp_a0, 2) == 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) < 2.0f) {
                goto block_61;
            }
        } else {
            var_s1 = 1;
        }
        break;
    case 0x12A:
        if (func_00207D80(temp_a0, 0x3E) == 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) < 62.0f) {
                goto block_61;
            }
        } else {
            var_s1 = 1;
        }
        break;
    }
    if (var_s0 == 0) {
        if ((var_s1 != 0) && (M2C_FIELD(arg0, u8 *, 0x16) != 0x46)) {
            var_s2 = 1;
            if (((*(u8 *)D_005927B8) != 0) && ((*(u8 *)D_005927B9) == M2C_FIELD(arg0, u8 *, 0)) && ((*(u8 *)D_005927BA) == M2C_FIELD(arg0, u8 *, 0x12)) && ((*(u8 *)D_005927BB) == M2C_FIELD(arg0, u8 *, 0x11))) {
                M2C_FIELD(arg0, u8 *, 0x16) = 0x46U;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            } else {
                M2C_FIELD(arg0, u8 *, 0x16) = 0x4FU;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            }
        } else {
            func_00273B90(arg0);
        }
    }
    return var_s2;
}

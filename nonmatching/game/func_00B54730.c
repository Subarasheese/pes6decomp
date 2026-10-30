/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002075B0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00B67DA0(void *, s32, void *);             /* extern */

void func_00B54730(void *arg0) {
    s16 var_a0;
    s32 var_a1;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0);
    var_a1 = M2C_FIELD(temp_a2, u16 *, 0x26) - M2C_FIELD(temp_a2, u16 *, 0x2C);
    if (var_a1 != 0) {
        var_a1 = (var_a1 + 0x10000) & 0xFFFF;
        M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = (s8) (var_a1 < 0x8001);
    }
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_a0) {                              /* irregular */
    case 0x3A:
        if (func_00B67DA0(arg0, var_a1, temp_a2) == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x461, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x45F, 0, 8);
        }
        break;
    case 0x39:
        if (func_00B67DA0(arg0, var_a1, temp_a2) == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x460, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x45E, 0, 8);
        }
        break;
    case 0x30:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x40F, 0, 8);
        break;
    case 0x12:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x440, 0, 8);
        break;
    case 0x7:
        if (func_00B67DA0(arg0, var_a1, temp_a2) == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x41F, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x420, 0, 8);
        }
        break;
    case 0x5:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x418, 0, 8);
        break;
    case 0x4:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x417, 0, 8);
        break;
    }
    temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    if ((temp_a0_2 != 7) && (temp_a0_2 != 0x3A) && (temp_a0_2 != 0x39)) {
        var_a0 = 0x12;
    } else {
        var_a0 = 0x13;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
}

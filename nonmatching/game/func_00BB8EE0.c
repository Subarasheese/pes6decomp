/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002075B0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00B67DA0(void *, s32, void *);             /* extern */

void func_00BB8EE0(void *arg0) {
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
    case 49:
        if (func_00B67DA0(arg0, var_a1, temp_a2) == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x461, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x45F, 0, 8);
        }
        break;
    case 48:
        if (func_00B67DA0(arg0, var_a1, temp_a2) == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x460, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x45E, 0, 8);
        }
        break;
    case 30:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x440, 0, 8);
        break;
    case 23:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x439, 0, 8);
        break;
    case 19:
        if (func_00B67DA0(arg0, var_a1, temp_a2) == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x497, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x496, 0, 8);
        }
        break;
    case 16:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x42E, 0, 8);
        break;
    case 6:
        if (func_00B67DA0(arg0, var_a1, temp_a2) == 0) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x41F, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x420, 0, 8);
        }
        break;
    case 5:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x41E, 0, 8);
        break;
    case 1:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x418, 0, 8);
        break;
    case 0:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x417, 0, 8);
        break;
    }
    temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    if ((temp_a0_2 != 0x31) && (temp_a0_2 != 0x30) && (temp_a0_2 != 0x13) && (temp_a0_2 != 6)) {
        var_a0 = 0x71;
    } else {
        var_a0 = 0x72;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
}

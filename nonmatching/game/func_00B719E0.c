/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002075B0(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00209A00(void *, s32, M2C_UNK);        /* extern */
s32 func_00BB1310(M2C_UNK, s32, void *);            /* extern */

void func_00B719E0(void *arg0) {
    s32 var_a1;
    u8 temp_a0;
    u8 temp_v1;
    void *temp_a2;
    void *temp_v0;

    temp_a2 = M2C_FIELD(arg0, void **, 0);
    var_a1 = M2C_FIELD(temp_a2, u16 *, 0x26) - M2C_FIELD(temp_a2, u16 *, 0x2C);
    if (var_a1 != 0) {
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        if ((temp_a0 != 0x32) && (temp_a0 != 0x19) && (temp_a0 != 0x1A) && (temp_a0 != 0x1B) && (temp_a0 != 0x1D) && (temp_a0 != 0x25)) {
            var_a1 = (var_a1 + 0x10000) & 0xFFFF;
            M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = (s8) (var_a1 < 0x8001);
        }
    }
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_v1) {                              /* irregular */
    case 0x33:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xF6, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x32:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xF5, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x31:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xF4, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x30:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xF3, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x25:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0xFF;
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0x1C3, var_a1, temp_a2) & 0xFFFF, 0);
        break;
    case 0x24:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4FB, 0, 8);
        break;
    case 0x23:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x412, 0, 8);
        break;
    case 0x22:
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) {
            M2C_FIELD(temp_v0, u8 *, 0x2D) = 0U;
        } else {
            M2C_FIELD(temp_v0, u8 *, 0x2D) = 1U;
        }
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4F4, 0, 8);
        break;
    case 0x21:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x58D, 0, 8);
        break;
    case 0x20:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x57F, 0, 8);
        break;
    case 0x1F:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x57E, 0, 8);
        break;
    case 0x1E:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x535, 0, 8);
        break;
    case 0x1D:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0xFF;
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0x197, var_a1, temp_a2) & 0xFFFF, 0);
        break;
    case 0x1C:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4EA, 0, 8);
        break;
    case 0x1B:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0xFF;
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0x91, var_a1, temp_a2) & 0xFFFF, 0);
        break;
    case 0x1A:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0xFF;
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0x90, var_a1, temp_a2) & 0xFFFF, 0);
        break;
    case 0x19:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0xFF;
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0x8F, var_a1, temp_a2) & 0xFFFF, 0);
        break;
    case 0x18:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F8, 0, 8);
        break;
    case 0x17:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F9, 0, 8);
        break;
    case 0x16:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4DB, 0, 8);
        break;
    case 0x15:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4D8, 0, 8);
        break;
    case 0x14:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x54C, 0, 8);
        break;
    case 0x13:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0x4B, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x12:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F5, 0, 8);
        break;
    case 0xD:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x441, 0, 8);
        break;
    case 0xB:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4AA, 0, 8);
        break;
    case 0xA:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x43F, 0, 8);
        break;
    case 0xE:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x43E, 0, 8);
        break;
    case 0x7:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x426, 0, 8);
        break;
    case 0x6:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x425, 0, 8);
        break;
    case 0x5:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x424, 0, 8);
        break;
    case 0x2:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x41C, 0, 8);
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xD;
}

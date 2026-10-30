/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002075B0(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BA90E0(void *, u16, void *, M2C_UNK); /* extern */
s32 func_00BB1310(M2C_UNK, s32, void *);            /* extern */
extern char D_00CBCB37[];

void func_00B4B8F0(void *arg0) {
    f32 temp_f1;
    f32 var_f2;
    s32 temp_a0;
    s32 var_a1;
    s32 var_v1;
    u16 temp_v0;
    u8 temp_v1;
    void *temp_a1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0);
    var_a1 = M2C_FIELD(temp_a2, u16 *, 0x26) - M2C_FIELD(temp_a2, u16 *, 0x2C);
    if (var_a1 != 0) {
        var_a1 = (var_a1 + 0x10000) & 0xFFFF;
        M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = (s8) (var_a1 < 0x8001);
    }
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_v1) {                              /* irregular */
    case 0x55:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x45A, 0, 8);
        break;
    case 0x54:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x454, 0, 8);
        break;
    case 0x53:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x453, 0, 8);
        break;
    case 0x50:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x475, 0, 8);
        break;
    case 0x4F:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x462, 0, 8);
        break;
    case 0x4E:
        func_00BA90E0(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C), temp_a2, 0x41C00000);
        temp_a1 = M2C_FIELD(arg0, void **, 0);
        temp_v0 = M2C_FIELD(temp_a1, u16 *, 0x38);
        if ((s32) temp_v0 >= 0) {
            var_f2 = (f32) temp_v0;
        } else {
            var_f2 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
        }
        temp_f1 = var_f2 * M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), f32 *, 0x28);
        if (temp_f1 >= 2.1474836e9f) {
            var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_v1 = (s32) temp_f1;
        }
        M2C_FIELD(temp_a1, u16 *, 0x38) = (u16) (var_v1 & 0xFFFF);
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x452, 0, 8);
        break;
    case 0x38:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x45D, 0, 8);
        break;
    case 0x2F:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x494, 0, 8);
        break;
    case 0x2E:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x474, 0, 8);
        break;
    case 0x29:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3FD, 0, 8);
        break;
    case 0x28:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3FC, 0, 8);
        break;
    case 0x27:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xDA, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x26:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xDB, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x25:
        temp_a0 = func_00BB1310(0xD5, var_a1, temp_a2) & 0xFFFF;
        if ((*(u8 *)D_00CBCB37) != 6) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), temp_a0 & 0xFFFF, 0, 8);
        } else {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), temp_a0 & 0xFFFF, 0xA, 8);
        }
        break;
    case 0x24:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xD4, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x23:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xCE, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x22:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xCD, var_a1, temp_a2) & 0xFFFF, 0, 8);
        break;
    case 0x1B:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F9, 0, 8);
        break;
    case 0x1A:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x458, 0, 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0xFF;
        break;
    case 0x19:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F5, 0, 8);
        break;
    case 0x17:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x40E, 0, 8);
        break;
    case 0x1D:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3FB, 0, 8);
        break;
    case 0x15:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x44E, 0, 8);
        break;
    case 0x14:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4B2, 0, 8);
        break;
    case 0x11:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4AF, 0, 8);
        break;
    case 0x10:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x43E, 0, 8);
        break;
    case 0xF:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x43D, 0, 8);
        break;
    case 0xE:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x42F, 0, 8);
        break;
    case 0xC:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x478, 0, 8);
        break;
    case 0xB:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x4A7, 0, 8);
        break;
    case 0xA:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x427, 0, 8);
        break;
    case 0x9:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x425, 0, 8);
        break;
    case 0x8:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x424, 0, 8);
        break;
    case 0x6:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x41D, 0, 8);
        break;
    case 0x3:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x41B, 0, 8);
        break;
    case 0x2:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x45B, 0, 8);
        break;
    case 0x1:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x416, 0, 8);
        break;
    case 0x0:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x415, 0, 8);
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x10;
}

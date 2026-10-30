/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002075B0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00B44AC0(void *arg0) {
    s32 temp_a1;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x26) - M2C_FIELD(temp_a2, u16 *, 0x2C);
    if (temp_a1 != 0) {
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        if ((temp_a0 != 0x3D) && (temp_a0 != 0x40)) {
            M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = (s8) (((temp_a1 + 0x10000) & 0xFFFF) < 0x8001);
        }
    }
    temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_a0_2) {                            /* irregular */
    case 0x38:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x45D, 0, 8);
        break;
    case 0x4D:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x48B, 0, 8);
        break;
    case 0x40:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x3F1, 0, 8);
        break;
    case 0x3F:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x3EF, 0, 8);
        break;
    case 0x3E:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x3F0, 0, 8);
        break;
    case 0x3D:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x3F4, 0, 8);
        break;
    case 0x3C:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x3F3, 0, 8);
        break;
    case 0x3B:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x3F2, 0, 8);
        break;
    case 0x30:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x40F, 0, 8);
        break;
    case 0x19:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x3F5, 0, 8);
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x11;
}

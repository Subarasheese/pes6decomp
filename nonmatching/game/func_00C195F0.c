/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002075B0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00C195F0(void *arg0) {
    s32 temp_a1;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x26) - M2C_FIELD(temp_a2, u16 *, 0x2C);
    if (temp_a1 != 0) {
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        if ((temp_a0 != 0x20) && (temp_a0 != 0x1F) && (temp_a0 != 0x21)) {
            M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = (s8) (((temp_a1 + 0x10000) & 0xFFFF) < 0x8001);
        }
    }
    temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_a0_2) {                            /* irregular */
    case 0x58:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x2A4, 0, 8);
        break;
    case 0x57:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x385, 0, 8);
        break;
    case 0x37:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x495, 0, 8);
        break;
    case 0x36:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x4A9, 0, 8);
        break;
    case 0x35:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x47B, 0, 8);
        break;
    case 0x34:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x47A, 0, 8);
        break;
    case 0x33:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x479, 0, 8);
        break;
    case 0x32:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x476, 0, 8);
        break;
    case 0x21:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x467, 0, 8);
        break;
    case 0x20:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x42B, 0, 8);
        break;
    case 0x1F:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x450, 0, 8);
        break;
    case 0x16:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x40D, 0, 8);
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 3;
}

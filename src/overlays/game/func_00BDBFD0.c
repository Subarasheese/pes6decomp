/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_002075B0(void *, s32, s32, s32);

void func_00BDBFD0(void **arg0, u16 arg1) {
    s32 temp_a1;
    u8 temp_a0;
    u8 temp_v1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x26) - M2C_FIELD(temp_a2, u16 *, 0x2C);
    if (temp_a1 != 0) {
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        if ((temp_a0 != 2) && (temp_a0 != 5)) {
            M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = (s8) (((temp_a1 + 0x10000) & 0xFFFF) < 0x8001);
        }
    }
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_v1) {
    case 0:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F2, 0, 8);
        break;
    case 1:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F3, 0, 8);
        break;
    case 2:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F4, 0, 8);
        break;
    case 3:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F0, 0, 8);
        break;
    case 4:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3EF, 0, 8);
        break;
    case 5:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x3F1, 0, 8);
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 2;
}

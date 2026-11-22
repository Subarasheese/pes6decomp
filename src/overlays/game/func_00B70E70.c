/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002075B0(void *, s32, s32, s32);

void func_00B70E70(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_v1) {
    case 39:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x433, 0, 8);
        break;
    case 40:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x434, 0, 8);
        break;
    case 43:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x436, 0, 8);
        break;
    case 41:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x437, 0, 8);
        break;
    case 42:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x471, 0, 8);
        break;
    case 44:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x587, 0, 8);
        break;
    case 45:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x588, 0, 8);
        break;
    case 46:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x589, 0, 8);
        break;
    case 47:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x58A, 0, 8);
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x16;
}

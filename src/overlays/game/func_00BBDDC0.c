/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002075B0(void *, s32, s32, s32);

void func_00BBDDC0(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_v1) {
    case 0x32:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x433, 0, 8);
        break;
    case 0x33:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x434, 0, 8);
        break;
    case 0x34:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x435, 0, 8);
        break;
    case 0x35:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x436, 0, 8);
        break;
    case 0x36:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x437, 0, 8);
        break;
    case 0x37:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x471, 0, 8);
        break;
    case 0x38:
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x477, 0, 8);
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x78;
}

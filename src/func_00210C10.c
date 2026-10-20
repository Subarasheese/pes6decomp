/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00181F20(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00181FE0(M2C_UNK, M2C_UNK);            /* extern */

void func_00210C10(s32 arg0) {
    if (arg0 & 1) {
        func_00181FE0(9, 0);
        func_00181FE0(0x18, 0);
        func_00181F20(0x15, 4, 0);
        func_00181F20(0x15, 5, 0);
        func_00181F20(7, 1, 0);
    }
    if (arg0 & 2) {
        func_00181F20(1, 2, 0);
    }
    if (arg0 & 4) {
        func_00181FE0(8, 0);
        func_00181FE0(0x17, 0);
        func_00181F20(0x15, 1, 0);
        func_00181F20(0x15, 2, 0);
        func_00181F20(7, 0, 0);
    }
    if (arg0 & 8) {
        func_00181F20(1, 1, 0);
    }
    if (arg0 & 0x10) {
        func_00181FE0(0xB, 0);
        func_00181FE0(0x1A, 0);
        func_00181F20(0x15, 8, 0);
        func_00181F20(0x15, 9, 0);
        func_00181F20(7, 3, 0);
    }
    if (arg0 & 0x20) {
        func_00181F20(1, 4, 0);
    }
    if (arg0 & 0x40) {
        func_00181FE0(0xA, 0);
        func_00181FE0(0x19, 0);
        func_00181F20(0x15, 6, 0);
        func_00181F20(0x15, 7, 0);
        func_00181F20(7, 2, 0);
    }
    if (arg0 & 0x80) {
        func_00181F20(1, 3, 0);
    }
}

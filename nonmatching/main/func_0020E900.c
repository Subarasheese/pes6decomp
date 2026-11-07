/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00181BC0(M2C_UNK);                     /* extern */
M2C_UNK func_00181F20(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00181FA0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00181FE0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001864B0(M2C_UNK);                     /* extern */
s32 func_001888A0();                                /* extern */
M2C_UNK func_0018D450(M2C_UNK);                     /* extern */
s32 func_00272250();                                /* extern */

void func_0020E900(void) {
    s32 temp_s0;
    s32 var_s0;

    temp_s0 = func_00272250() & 0xFF;
    if (temp_s0 & 1) {
        func_00181FE0(0xB, 0);
        func_00181F20(0x1A, 1, 0);
    }
    if (temp_s0 & 2) {
        func_00181FE0(0xA, 0);
        func_00181F20(0x19, 1, 0);
    }
    if (temp_s0 & 4) {
        func_00181FE0(9, 0);
        func_00181FE0(0x18, 0);
    }
    if (temp_s0 & 8) {
        func_00181FE0(8, 0);
        func_00181FE0(0x17, 0);
    }
    if (temp_s0 & 0x10) {
        func_00181FE0(0, 0);
        if (func_001888A0() < 3) {
            func_00181FE0(0xC, 0);
        }
        func_00181FA0(0xD, 1, 0);
        var_s0 = 0xE;
        do {
            func_00181F20(var_s0, 1, 0);
            var_s0 += 1;
        } while (var_s0 < 0x12);
        func_00181FE0(0x16, 0);
        func_001864B0(0x40);
    }
    func_0018D450(0);
    func_00181BC0(8);
    func_00181BC0(9);
    func_00181BC0(0xA);
    func_00181BC0(0xB);
    func_00181BC0(0xC);
    func_00181BC0(0xE);
    func_00181BC0(0xF);
    func_00181BC0(0x10);
    func_00181BC0(0x11);
    func_00181BC0(0x17);
    func_00181BC0(0x18);
    func_00181BC0(0x19);
    func_00181BC0(0x1A);
}

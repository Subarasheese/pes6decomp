/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00181BC0(M2C_UNK);                     /* extern */
M2C_UNK func_00181F20(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00181FA0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00181FE0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001864B0(M2C_UNK);                     /* extern */
s32 func_001888A0();                                /* extern */
f32 func_001A4F00();                                /* extern */
f32 func_001A5000();                                /* extern */
f32 func_001A5100();                                /* extern */
f32 func_001A5590();                                /* extern */
f32 func_001A55A0();                                /* extern */
f32 func_001A55B0();                                /* extern */

void func_0020FFE0(void) {
    s32 var_s0;

    if ((func_001A55A0() < -2000.0f) && !(func_001A5000() <= 0.0f)) {
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
    if (!(func_001A5590() <= 10500.0f) || (func_001A4F00() < -0.5f)) {
        func_00181FE0(0xB, 0);
    }
    if ((func_001A5590() < -8800.0f) || !(func_001A4F00() <= 0.5f)) {
        func_00181FE0(0xA, 0);
    }
    if ((func_001A55B0() < -14500.0f) || !(func_001A5100() <= 0.5f)) {
        func_00181FE0(9, 0);
    }
    if (!(func_001A55B0() <= 14500.0f) || (func_001A5100() < -0.5f)) {
        func_00181FE0(8, 0);
    }
    if (!(func_001A5590() <= 8800.0f) || (func_001A4F00() < -0.5f)) {
        if ((func_001A55A0() < -1500.0f) && !(func_001A5590() <= 8800.0f)) {
            func_00181F20(0x1A, 1, 0);
        } else {
            func_00181FE0(0x1A, 0);
        }
    }
    if ((func_001A5590() < -8800.0f) || !(func_001A4F00() <= 0.5f)) {
        func_00181FE0(0x19, 0);
    }
    if ((func_001A55B0() < -14500.0f) || !(func_001A5100() <= 0.5f)) {
        func_00181FE0(0x18, 0);
    }
    if (!(func_001A55B0() <= 14500.0f) || (func_001A5100() < -0.5f)) {
        func_00181FE0(0x17, 0);
    }
    func_00181FE0(2, 0);
    func_00181BC0(8);
    func_00181BC0(9);
    func_00181BC0(0xA);
    func_00181BC0(0xB);
    func_00181BC0(0xC);
    func_00181BC0(0xE);
    func_00181BC0(0xF);
    func_00181BC0(0x10);
    func_00181BC0(0x11);
}

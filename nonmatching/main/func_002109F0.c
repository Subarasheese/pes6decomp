/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00181C70(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00181F20(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00181FE0(M2C_UNK, M2C_UNK);            /* extern */
f32 func_001A4AF0();                                /* extern */
f32 func_001A5100();                                /* extern */
f32 func_001A54C0();                                /* extern */

void func_002109F0(void) {
    func_00181C70(4, 0);
    func_00181FE0(0xB, 0);
    func_00181F20(0x1A, 1, 0);
    func_00181F20(0x15, 8, 0);
    if (func_001A54C0() < 3000.0f) {
        func_00181FE0(0x1A, 0);
        func_00181F20(1, 4, 0);
        func_00181F20(0x15, 9, 0);
        func_00181F20(7, 3, 0);
    }
    if (func_001A4AF0() < -0.25f) {
        func_00181FE0(0xA, 0);
        func_00181FE0(0x19, 0);
        func_00181F20(1, 3, 0);
        func_00181F20(0x15, 6, 0);
        func_00181F20(0x15, 7, 0);
        func_00181F20(7, 2, 0);
    }
    if (!(func_001A5100() < 0.0f)) {
        func_00181FE0(9, 0);
        func_00181FE0(0x18, 0);
        func_00181F20(1, 2, 0);
        func_00181F20(0x15, 4, 0);
        func_00181F20(0x15, 5, 0);
        func_00181F20(0x15, 3, 0);
        func_00181F20(7, 1, 0);
        return;
    }
    func_00181FE0(8, 0);
    func_00181FE0(0x17, 0);
    func_00181F20(1, 1, 0);
    func_00181F20(0x15, 1, 0);
    func_00181F20(0x15, 2, 0);
    func_00181F20(0x15, 0, 0);
    func_00181F20(7, 0, 0);
}

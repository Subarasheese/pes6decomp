/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00181F20(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00181FA0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00181FE0(M2C_UNK, M2C_UNK);            /* extern */
f32 func_001A5100();                                /* extern */

void func_0020F080(void) {
    func_00181FE0(2, 0);
    func_00181FA0(3, 1, 0);
    func_00181F20(6, 1, 0);
    if (func_001A5100() <= 0.0f) {
        func_00181FE0(8, 0);
        func_00181FE0(0x17, 0);
        func_00181F20(1, 1, 0);
        func_00181F20(0x15, 1, 0);
        func_00181F20(0x15, 2, 0);
        func_00181F20(0x15, 5, 0);
        return;
    }
    func_00181FE0(9, 0);
    func_00181FE0(0x18, 0);
    func_00181F20(1, 2, 0);
    func_00181F20(0x15, 4, 0);
    func_00181F20(0x15, 5, 0);
    func_00181F20(0x15, 2, 0);
}

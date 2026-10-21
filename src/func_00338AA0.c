/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, s32);                /* extern */

s32 func_00338AA0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    func_001C4730(arg0 + 0x3C, arg1, 0x20);
    return 1;
}

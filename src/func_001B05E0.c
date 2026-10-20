/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001A6420(s32, s32);                    /* extern */
M2C_UNK func_001A6EF0(s32, s32);                    /* extern */
M2C_UNK func_001A93C0(s32, s32);                    /* extern */
M2C_UNK func_001B0C30();                            /* extern */

void func_001B05E0(s32 arg0, s32 arg1) {
    func_001B0C30();
    func_001A6420(arg0, arg1);
    func_001A6EF0(arg0, arg1);
    func_001A93C0(arg0, arg1);
}

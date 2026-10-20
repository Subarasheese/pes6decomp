/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C8590(s32, s32, M2C_UNK);           /* extern */

void func_002EC450(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = arg0 + (arg1 << 0xA);
    func_001C8590(temp_s0 + 0xFC, arg2, 0x400);
    func_001C8590(temp_s0 + 0xCFC, arg2, 0x400);
}

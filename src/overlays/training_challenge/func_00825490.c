/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, s32, s32);            /* extern */

void func_00825490(void *arg0) {
    func_001C48E8(arg0, 0, 0x14);
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    M2C_FIELD(arg0, u8 *, 0x28) = (u8) (M2C_FIELD(arg0, u8 *, 0x28) + 1);
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK memclr(s8 *, M2C_UNK);
M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);

void func_008744F0(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_001C48E8(arg0 + 0xC, 0, 0x18);
    memclr(arg0 + 0x40, 0x400);
    M2C_FIELD(arg0, s32 *, 0x450) = 0;
    M2C_FIELD(arg0, s32 *, 0x454) = 0;
    M2C_FIELD(arg0, s16 *, 0x458) = 0;
}

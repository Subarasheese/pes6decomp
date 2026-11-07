/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_00165778(s32, s32, s32);               /* extern */

void func_001881D0(void *arg0) {
    func_00165778(M2C_FIELD(arg0, s32 *, 0x910), M2C_FIELD(arg0, s32 *, 0x92C), M2C_FIELD(arg0, s32 *, 0x5B0));
    func_00165778(M2C_FIELD(arg0, s32 *, 0x914), M2C_FIELD(arg0, s32 *, 0x5AC) - M2C_FIELD(arg0, s32 *, 0x92C), M2C_FIELD(arg0, s32 *, 0x5B0));
    func_00165778(M2C_FIELD(arg0, s32 *, 0x918), M2C_FIELD(arg0, s32 *, 0x930), M2C_FIELD(arg0, s32 *, 0x934));
}

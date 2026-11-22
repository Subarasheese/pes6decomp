/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_001EC390(s32, u8, s32, f32);

void func_001F3BB0(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 5) != 0) {
        return;
    }
    func_001EC390(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, u8 *, 4),
                  M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x18));
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001EC390(s32, u8, M2C_UNK, void *, f32); /* extern */

void func_001E5990(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x3D) != 0) {
        func_001EC390(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, u8 *, 0x3E), 0x90, arg0, M2C_FIELD(arg0, f32 *, 0x38));
    }
}

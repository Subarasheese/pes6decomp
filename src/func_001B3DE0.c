/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001CDAD0(s32);                         /* extern */
extern s32 D_003E98F4;

void func_001B3DE0(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x44);
    func_001CDAD0(temp_s0 + 0x20);
    D_003E98F4 = temp_s0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_00256140();                              /* extern */
M2C_UNK func_0026E560(s32);                         /* extern */

void func_002D4B20(void) {
    void *temp_v0;

    temp_v0 = func_00256140();
    if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
        func_0026E560(M2C_FIELD(temp_v0, s32 *, 0x568));
        func_0026E560(M2C_FIELD(temp_v0, s32 *, 0x56C));
    }
}

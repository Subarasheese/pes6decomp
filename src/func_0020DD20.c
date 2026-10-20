/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0020DF20();                            /* extern */

void func_0020DD20(void *arg0) {
    if (arg0 != NULL) {
        func_0020DF20();
        M2C_FIELD(arg0, u8 *, 0) = (u8) ((M2C_FIELD(arg0, u8 *, 0) / 3) + ((u8) M2C_FIELD(arg0, u8 *, 0) >> 0x1F) + 0xA0);
        M2C_FIELD(arg0, u8 *, 1) = (u8) ((M2C_FIELD(arg0, u8 *, 1) / 3) + ((u8) M2C_FIELD(arg0, u8 *, 1) >> 0x1F) + 0xA0);
        M2C_FIELD(arg0, u8 *, 2) = (u8) ((M2C_FIELD(arg0, u8 *, 2) / 3) + ((u8) M2C_FIELD(arg0, u8 *, 2) >> 0x1F) + 0xA0);
    }
}

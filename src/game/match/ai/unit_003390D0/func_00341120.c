/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00341120(void *arg0) {
    u8 value;

    if (arg0 == NULL) {
        return 0;
    } else {
        if (!(M2C_FIELD(arg0, s32 *, 0) == 1)) {
            return 0;
        }
        value = M2C_FIELD(arg0, u8 *, 0x21);
        if ((value != 0xD) && (value != 0xB) && (value != 0xC) && (value != 6) && (value != 0x10)) {
            return 0;
        }
        return 1;
    }
}

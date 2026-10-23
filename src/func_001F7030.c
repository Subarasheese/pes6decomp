/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_001F7830(s32);

void func_001F7030(void *object, s32 value) {
    s32 result;

    if (object != NULL) {
        result = func_001F7830(M2C_FIELD(object, s32 *, 0x18));
        if (result != 0) {
            M2C_FIELD(object, s32 *, 0x10) = value;
            M2C_FIELD(object, s32 *, 0x14) = result;
        }
    }
}

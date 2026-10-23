/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001E5E70(s32);

void func_001F1390(void *object) {
    if (object != NULL) {
        func_001E5E70(M2C_FIELD(object, s32 *, 0x48));
        M2C_FIELD(object, u8 *, 0x55) = (u8) (M2C_FIELD(object, u8 *, 0x55) | 2);
    }
}

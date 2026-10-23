/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_001DED80(s32);                             /* extern */

void func_001F1910(void *object) {
    if ((object != NULL) && (func_001DED80(M2C_FIELD(object, s32 *, 0x54)) != 0)) {
        M2C_FIELD(object, u8 *, 1) = 0xFF;
    }
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001DF820(s32);

void func_001F1950(void *object, s32 enabled) {
    if ((object != NULL) && (enabled != 0)) {
        func_001DF820(M2C_FIELD(object, s32 *, 0x54));
        M2C_FIELD(object, u8 *, 1) = 0xFF;
    }
}

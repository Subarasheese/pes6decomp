/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E77AC;
s32 func_00309420(void);

static inline s32 is_busy(void) {
    return func_00309420() != 0;
}

void *func_0022F150(void) {
    if (is_busy() == 1) {
        return NULL;
    }
    return D_003E77AC + 0xC;
}

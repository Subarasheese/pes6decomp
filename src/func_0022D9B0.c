/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_53A850[];
s32 func_00309420(void);

static inline s32 is_busy(void) {
    return func_00309420() != 0;
}

u8 *func_0022D9B0(void) {
    if (is_busy() == 1) {
        return NULL;
    }
    return D_53A850;
}

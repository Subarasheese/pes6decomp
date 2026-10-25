/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s16 D_003E9A14;
s32 func_00309420(void);

static inline s32 is_busy(void) {
    return func_00309420() != 0;
}

void func_0022D8F0(s32 v) {
    if (is_busy() == 1) {
        return;
    }
    D_003E9A14 = v;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00309420(void);
s32 func_00226710(void);

static inline s32 is_busy(void) {
    return func_00309420() != 0;
}

s32 func_002308F0(void) {
    if (is_busy() == 1) {
        return 0;
    }
    return func_00226710();
}

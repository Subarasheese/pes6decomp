/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 func_00290B60(s32);

s32 func_00311340(u8 *out, s32 id) {
    *out = func_00290B60(id);
    if (*out == 0xFF) {
        *out = 0xFF;
        return 0;
    }
    return 1;
}

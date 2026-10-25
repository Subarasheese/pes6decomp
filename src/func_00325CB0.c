/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00325CB0(s32 *out, u8 *obj, s32 index) {
    if (index >= 2) {
        *out = 0;
    } else {
        *out = ((s32 *)(obj + 0x40))[index];
    }
    return 1;
}

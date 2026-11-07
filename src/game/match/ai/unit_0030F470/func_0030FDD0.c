/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_009937C0(void);

s32 func_0030FDD0(s32 *output) {
    s32 value;

    value = func_009937C0() & 0xFF;
    if (value != 0xFF) {
        *output = value;
        return 1;
    }
    return 0;
}

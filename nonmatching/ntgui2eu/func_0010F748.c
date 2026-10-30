/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0010F748(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = arg1 * arg2;
    return (s32) ((temp_v0 < 0) ? (temp_v0 + 0x3F) : temp_v0) >> 6;
}

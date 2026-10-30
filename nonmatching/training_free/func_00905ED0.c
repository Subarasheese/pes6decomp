/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00905ED0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 == 0) {
        return 0xFF;
    }
    if (temp_v0 < 0xC) {
        if ((arg1 & 0xFF) < 0xC) {
            return 0;
        }
        goto block_11;
    }
    if ((arg1 & 0xFF) >= 0xC) {
        return 0;
    }
block_11:
    return 1;
}

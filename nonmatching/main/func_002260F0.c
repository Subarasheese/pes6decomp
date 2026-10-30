/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_002260F0(s32 arg0) {
    s32 temp_v1;

    if (func_00231240() != 1) {
        if (D_003E77AC != 0) {
            temp_v1 = arg0 & 0xFF;
            if (temp_v1 < 0x50) {
                return D_003E77AC + (temp_v1 * 0x4D4) + 0x44328;
            }
        }
        goto block_7;
    }
block_7:
    return 0;
}

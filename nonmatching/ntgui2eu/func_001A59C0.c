/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A5950(void);
s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */

s32 func_001A59C0(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = func_001A4728();
    temp_s1 = func_001A5950();
    if (temp_s0 != 0) {
        func_001A4778();
    }
    return temp_s1;
}

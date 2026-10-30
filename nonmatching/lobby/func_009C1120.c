/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_001C80F0(void *);                          /* extern */

s32 func_009C1120(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 4;
    }
    if (arg1 >= 0) {
        if (arg1 < 5) {
            if ((M2C_FIELD(arg0, s32 *, 0xA0) == 1) && (arg1 == 0)) {
                return 4;
            }
            if (arg1 == 4) {
                if (func_001C80F0(arg0 + 0xD7) < 8U) {
                    return 4;
                }
                if ((func_001C80F0(arg0 + 0x117) < 8U) || (func_001C80F0(arg0 + 0x157) < 8U)) {
                    return 4;
                }
                goto block_18;
            }
block_18:
            return 0;
        }
        goto block_7;
    }
block_7:
    return 4;
}

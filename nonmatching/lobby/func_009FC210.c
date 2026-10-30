/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C7F58(s32, s32);                    /* extern */
u32 func_001C80F0();                                /* extern */

s32 func_009FC210(s32 arg0, s32 arg1) {
    if (func_001C80F0() < 0x20U) {
        func_001C7F58(arg1 + 0xC, arg0);
        return 0;
    }
    return -1;
}

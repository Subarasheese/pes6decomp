/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00112D50(s32 arg0) {
    if ((u32) (arg0 - 0x4123) > 0xC348U) {
        if (arg0 != 0) {
            return 0;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        *(s32 *)0x3729DC = arg0;
        return 1;
    }
    *(s32 *)0x3729DC = arg0;
    return 1;
}

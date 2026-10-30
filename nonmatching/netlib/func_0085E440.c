/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern void *D_003EA358;

s32 func_0085E440(s64 arg0, s32 arg1) {
    if (D_003EA358 == NULL) {
        return -1;
    }
    if (func_002DCA40() != 0) {
        if (M2C_FIELD(D_003EA358, s8 *, 5) == 0) {
            M2C_FIELD(((((s64) (arg0 << 0x30) >> 0x30) * 4) + D_003EA358), s32 *, 0xC) = arg1;
            return arg1;
        }
        return -1;
    }
    return -1;
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00A9C640(void *);
extern s32 func_009B30B0(s32, s32);
s32 func_00C484F0(void *arg0, s32 arg1, s32 arg2) {
    if ((func_009B30B0(func_00A9C640(arg0), (arg1 - ((((arg2 != 0) ? -1 : 1) << 0xD) & 0xFFFF)) & 0xFFFF) & 0xFFFF) >= 0x21) {
        return 0;
    }
    return 1;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9B00(void *, void *);
s32 func_00D0ADB0(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0xD70) = 1;
    func_001B9B00(M2C_FIELD(arg0, void **, 0xD4C), arg0 + 0xD50);
    M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
    return 0;
}

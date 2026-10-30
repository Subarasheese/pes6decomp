/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9B00(void *, void *);
s32 func_00D0AE50(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xD70) = 2;
        func_001B9B00(M2C_FIELD(arg0, void **, 0xD4C), arg0 + 0xD60);
        M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
        return 0;
    }
    return 1;
}

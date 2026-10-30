/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001656D0(void *);
void func_00166D70(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_001656D0(M2C_FIELD(arg0, void **, 0));
    }
}

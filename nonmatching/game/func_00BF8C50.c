/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027B2E0(void *);
extern void **D_00CBD7B0;

void func_00BF8C50(void) {
    void *temp_s0;

    temp_s0 = *D_00CBD7B0;
    func_0027B2E0(temp_s0);
    *M2C_FIELD(temp_s0, s8 **, 0x10) = 0;
    M2C_FIELD(temp_s0, s8 *, 3) = 0;
    M2C_FIELD(temp_s0, s8 *, 4) = 1;
}

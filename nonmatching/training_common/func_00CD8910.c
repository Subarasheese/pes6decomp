/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00CD8910(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    f32 sp8;
    f32 spC;
    f32 temp_f0;
    f32 temp_f1;

    temp_f1 = (fparg0 + fparg2) / 2.0f;
    temp_f0 = (fparg1 + fparg3) / 2.0f;
    sp8 = temp_f1;
    spC = temp_f0;
    M2C_FIELD(arg0, f32 *, 0) = temp_f1;
    M2C_FIELD(arg0, f32 *, 4) = temp_f0;
}

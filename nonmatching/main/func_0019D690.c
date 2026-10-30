/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019C6C0();                            /* extern */
M2C_UNK func_0019D380(void *, void *, void *, f32); /* extern */
extern void *D_005202D8;

void func_0019D690(void *arg0, void *arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    if ((D_005202D8 != NULL) && (M2C_FIELD(arg0, f32 *, 4) <= -1.0f) && (M2C_FIELD(arg1, f32 *, 4) <= 0.0f) && !(fparg1 < 20.0f) && (fparg1 < 80.0f) && !(fparg3 < 0.5f) && (fparg3 < 1.0f)) {
        M2C_FIELD(D_005202D8, s32 *, 0) = 1;
        M2C_FIELD(D_005202D8, f32 *, 0xE0) = fparg0;
        M2C_FIELD(D_005202D8, f32 *, 0xE4) = (f32) (2.0f * fparg0);
        M2C_FIELD(D_005202D8, f32 *, 0xE8) = fparg2;
        M2C_FIELD(D_005202D8, f32 *, 0xEC) = fparg3;
        M2C_FIELD(D_005202D8, s32 *, 0xF0) = 0;
        func_0019D380(D_005202D8, D_005202D8, D_005202D8, fparg1);
        M2C_FIELD(D_005202D8, s32 *, 4) = 1;
        func_0019C6C0();
        M2C_FIELD(D_005202D8, s32 *, 4) = 0;
    }
}

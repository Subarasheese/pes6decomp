/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001432B0(void *, void *, s32);
void func_00182400(void *arg0, s32 arg1, s32 arg2, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    s32 var_s0;
    s32 var_s2;
    void *temp_v0;

    var_s2 = arg1;
    var_s0 = 0;
    if (arg2 > 0) {
        do {
            temp_v0 = func_001432B0(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4), var_s2);
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, f32 *, 0) = fparg2;
                M2C_FIELD(temp_v0, f32 *, 0x14) = fparg3;
                M2C_FIELD(temp_v0, f32 *, 0x30) = fparg0;
                M2C_FIELD(temp_v0, f32 *, 0x34) = fparg1;
            }
            var_s0 += 1;
            var_s2 += 1;
        } while (var_s0 < arg2);
    }
}

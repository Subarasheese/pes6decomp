/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF370(void *, s32);
M2C_UNK func_001DF510(void *, f32, f32);            /* extern */
M2C_UNK func_00AEE570(void *, f32, f32);            /* extern */

void func_00AEDFF0(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    f32 temp_f20;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    if (temp_s0 != NULL) {
        temp_f20 = fparg1 + ((fparg3 - M2C_FIELD(arg0, f32 *, 4)) / 2.0f);
        func_001DF510(temp_s0, fparg2, fparg3);
        func_00AEE570(temp_s0, fparg0, temp_f20);
        func_001DF370(temp_s0, 1);
    }
}

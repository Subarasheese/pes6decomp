/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_0030E750(void);
extern f32 func_0030F720(s32);

s32 func_003407B0(f32 fparg0, f32 fparg1) {
    s32 temp_a0;

    if (fabsf(fparg0) <= 13657.0f && fabsf(fparg1) <= 8921.0f) {
        temp_a0 = func_0030E750() & 0xFF;
        if (fparg0 < -7680.0f) {
            if (func_0030F720(temp_a0) > 7680.0f) {
                return 1;
            }
        }
    }
    return 0;
}

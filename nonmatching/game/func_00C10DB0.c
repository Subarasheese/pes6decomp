/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00C10DB0(char *arg0, u32 arg1, u32 arg2, f32 fparg0) {
    f32 var_f12;

    var_f12 = fparg0;
    if (arg0 != 0 && arg1 < 8U && arg2 < 6U) {
        if (var_f12 <= 0.0f) {
            var_f12 = 0.0f;
        }
        *(f32 *)(arg0 + (arg1 * 0x18) + (arg2 * 4)) = var_f12;
    }
}

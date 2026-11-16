/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6Random_State[];

f32 func_00151CF0(f32 fparg0) {
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_a0_2;
    u32 temp_a0;
    s32 half;

    var_f0 = 0.0f;
    if (fparg0 != 0.0f) {
        temp_a0 = (*(s32 *)Pes6Random_State) ^ ((*(s32 *)Pes6Random_State) << 0x11);
        temp_a0_2 = temp_a0 ^ (temp_a0 >> 0xF);
        (*(s32 *)Pes6Random_State) = temp_a0_2;
        if (temp_a0_2 >= 0) {
            var_f0_2 = (f32) temp_a0_2;
        } else {
            half = ((u32) temp_a0_2 >> 1) | (temp_a0_2 & 1);
            var_f0_2 = (f32) half;
            var_f0_2 = var_f0_2 + var_f0_2;
        }
        var_f0 = fparg0 * (2.3283064e-10f * var_f0_2);
        if (!(var_f0 <= fparg0)) {
            var_f0 = fparg0;
        }
    }
    return var_f0;
}

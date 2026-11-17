/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00C17E10();
extern char D_00CCAF80[];

f32 func_00C22320(s32 arg0) {
    f32 var_f0;
    s32 temp_v0;

    temp_v0 = func_00C17E10() & 0xFF;
    var_f0 = 0.0f;
    if (temp_v0 < 0x12) {
        var_f0 = *(f32 *)(D_00CCAF80 + ((arg0 & 0xFF) * 0x48) + (temp_v0 * 4));
    }
    return var_f0;
}

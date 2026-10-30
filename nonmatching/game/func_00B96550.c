/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E58[];
extern char D_00591E60[];

s32 func_00B96550(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a3;
    s32 var_a5;
    s32 var_v0;
    s32 var_v0_2;

    var_a3 = 0;
    if (!(((*(f32 *)D_00591E58) * (f32) ((arg0 != 0) ? -1 : 1)) <= 9241.0f)) {
        var_v0_2 = (s32) (*(f32 *)D_00591E60);
        if (var_v0_2 > 0) {

        } else {
            var_v0_2 = -var_v0_2;
        }
        if ((f32) var_v0_2 < 5160.0f) {
            var_a3 = 1;
        }
    }
    var_a5 = 1;
    temp_v0 = var_a3 == 0;
    if (!((M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) * (f32) ((arg0 != 0) ? -1 : 1)) < -7741.0f)) {
        var_a5 = 0;
    }
    if (arg1 == 0) {
        goto block_9;
    }
    if (arg2 != 0) {
        var_v0 = 1;
        goto block_13;
    }
block_9:
    if (arg1 == 0) {
        if (arg2 == 0) {
            var_v0 = temp_v0 != 0;
            if (var_v0 != 0) {
                var_v0 = var_a5 != 1;
            }
            goto block_13;
        }
        return temp_v0;
    }
    var_v0 = var_a5 ^ 1;
block_13:
    return var_v0;
}

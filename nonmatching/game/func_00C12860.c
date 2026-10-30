/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB3410[];
extern char D_00CBFAA0[];

s32 func_00C12860(void *arg0) {
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    u8 *var_v1;
    u8 temp_a1;
    void *var_v0_3;

    temp_a1 = M2C_FIELD(arg0, u8 *, 2);
    var_a2 = 0;
    var_v1 = ((void *)D_00CB3410);
loop_1:
    if (*var_v1 != temp_a1) {
        var_a2 += 1;
        var_v1 += 1;
        if (var_a2 >= 2) {
            var_v0_2 = 0;
        } else {
            goto loop_1;
        }
    } else {
        var_v0_2 = 1;
    }
    if (var_v0_2 != 0) {
        if (arg0 == (void *)-1) {
            var_v0_3 = NULL;
        } else {
            var_v0_3 = ((void *)D_00CBFAA0) + M2C_FIELD(arg0, u16 *, 0) + 0x4E20;
        }
        if (M2C_FIELD(var_v0_3, u8 *, 5) & 3) {
            return 1;
        }
        goto block_14;
    }
block_14:
    var_v0 = temp_a1 == 2;
    if (var_v0 == 0) {
        var_v0 = temp_a1 == 0x21;
    }
    return var_v0;
}

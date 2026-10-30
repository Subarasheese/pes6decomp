/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(s32, s32);                        /* extern */
void *func_001F42F0();                              /* extern */
extern char D_0052AE10[];
extern char D_0052AE14[];

s32 func_001DD420(s32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;

    temp_v0 = func_001F42F0();
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    var_s1 = 0;
    if ((*(s32 *)D_0052AE10) > 0) {
        var_s0 = 0;
loop_4:
        temp_a0 = M2C_FIELD(((*(s32 *)D_0052AE14) + var_s0), s32 *, 8);
        if (temp_a0 != 0) {
            if (func_001C7E10(temp_a0, arg0) != 0) {
                goto block_7;
            }
        } else {
block_7:
            var_s1 += 1;
            var_s0 += 0xC;
            if (var_s1 < (*(s32 *)D_0052AE10)) {
                goto loop_4;
            }
        }
    }
    if (var_s1 == (*(s32 *)D_0052AE10)) {
        var_s1 = 0;
    }
    return var_s1;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153560(void);
extern void *D_003EA4C8;

void func_008CB750(s32 arg0) {
    void *var_s1;

    var_s1 = D_003EA4C8;
    if (var_s1 != NULL) {
loop_1:
        if (M2C_FIELD(var_s1, s32 *, 0) != arg0) {
            var_s1 = M2C_FIELD(var_s1, void **, 0x24);
            if (var_s1 == NULL) {
                goto block_6;
            }
            goto loop_1;
        }
    } else {
block_6:
        var_s1 = NULL;
    }
    if (var_s1 != NULL) {
        if (M2C_FIELD(var_s1, s32 *, 4) != 0) {
            func_00153560();
        }
        M2C_FIELD(var_s1, s32 *, 4) = 0;
        M2C_FIELD(var_s1, s32 *, 0x20) = (s32) (M2C_FIELD(var_s1, s32 *, 0x20) & ~1);
    }
}

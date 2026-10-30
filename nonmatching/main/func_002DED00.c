/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DED70(void *, void *);              /* extern */
extern void *D_003E9DE4;

s32 func_002DED00(s32 arg0) {
    void *var_a1;

    var_a1 = D_003E9DE4;
    if (var_a1 != NULL) {
loop_1:
        if (M2C_FIELD(var_a1, s32 *, 0xC) != arg0) {
            var_a1 = M2C_FIELD(var_a1, void **, 4);
            if (var_a1 == NULL) {
                goto block_6;
            }
            goto loop_1;
        }
    } else {
block_6:
        var_a1 = NULL;
    }
    if (var_a1 == NULL) {
        return 0;
    }
    if (M2C_FIELD(var_a1, s32 *, 8) != 2) {
        func_002DED70(var_a1, var_a1);
        return 1;
    }
    return 0;
}

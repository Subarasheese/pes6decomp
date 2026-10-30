/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C99A40(void *);                      /* extern */
M2C_UNK func_00C99AD0(void *, s32);                 /* extern */
extern void *D_003AE9D0;

s32 func_0092C700(M2C_UNK arg0, void *arg1, s32 arg2) {
    s16 var_v0;
    void *temp_a2;

    temp_a2 = M2C_FIELD(D_003AE9D0, void **, 4);
    if (temp_a2 != NULL) {
        var_v0 = 2;
        if (M2C_FIELD(arg1, s16 *, 0x12) != 2) {
            var_v0 = 1;
        }
        M2C_FIELD(temp_a2, s16 *, 0x10) = var_v0;
        M2C_FIELD(D_003AE9D0, s16 *, 2) = 1;
        func_00C99A40(temp_a2);
        func_00C99AD0(M2C_FIELD(D_003AE9D0, void **, 4), arg2);
    }
    return 2;
}

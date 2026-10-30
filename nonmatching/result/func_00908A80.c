/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008FA290(M2C_UNK);                         /* extern */
M2C_UNK func_00909150();                            /* extern */
extern void *D_00923FC8;

s32 func_00908A80(void) {
    s16 temp_s0;
    void *temp_s1;

    temp_s1 = D_00923FC8;
    temp_s0 = M2C_FIELD(temp_s1, s16 *, 0x2E);
    if (temp_s0 < (func_008FA290(1) & 0xFF)) {
        if (M2C_FIELD(temp_s1, s16 *, 0x2C) == 0) {
            func_0026E840(0x8400F802);
            M2C_FIELD(D_00923FC8, s16 *, 0x2C) = 1;
            func_00909150();
        }
    }
    return 0;
}

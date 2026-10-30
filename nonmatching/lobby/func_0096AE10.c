/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817AD0(M2C_UNK);                         /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009AF5B0(M2C_UNK);                     /* extern */
extern s32 D_003EACA4;
extern void *D_00A68CB0;

void func_0096AE10(void) {
    s32 temp_v0;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = D_00A68CB0;
    temp_v0 = func_00817AD0(0x01FB0039);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 3:
        func_009AF5B0(0);
        var_v0 = 2;
block_9:
        D_003EACA4 = var_v0;
        break;
    case 2:
    case 1:
        var_v0 = 9;
        M2C_FIELD(temp_s0, s32 *, 0xC) = 2;
        goto block_9;
    }
    if (func_00969B90() != 0) {
        func_00817C00();
        M2C_FIELD(temp_s0, s32 *, 0xC) = 2;
        D_003EACA4 = 9;
    }
}

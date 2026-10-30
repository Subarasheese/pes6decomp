/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817AD0(M2C_UNK);                         /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
extern void *D_00A68D50;

void func_00977350(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_00A68D50;
    temp_v0 = func_00817AD0(0x01FB0039);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 3:
        func_009717C0(2);
        break;
    case 2:
    case 1:
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
        func_009717C0(9);
        break;
    }
    if (func_00969B90() != 0) {
        func_00817C00();
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
        func_009717C0(9);
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009DB080(M2C_UNK);                     /* extern */
M2C_UNK func_009DD3C0(M2C_UNK);                     /* extern */
M2C_UNK func_009E2CD0();                            /* extern */
M2C_UNK func_009E2CF0();                            /* extern */
s32 func_009E2DA0();                                /* extern */
extern void *D_00A68D88;

s32 func_0097A590(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A68D88, u8 *, 2) != 0) {
        func_009E2CD0();
    }
    temp_v0 = func_009E2DA0();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_009E2CF0();
        func_009DD3C0(1);
        if ((s32) M2C_FIELD(D_00A68D88, u8 *, 5) < 2) {
            M2C_FIELD(D_00A68D88, s8 *, 0) = 2;
        } else {
            func_009DB080(1);
            M2C_FIELD(D_00A68D88, s8 *, 0) = 3;
        }
    case 0:
    default:
        return 0;
    case 2:
        func_009E2CF0();
        M2C_FIELD(D_00A68D88, s8 *, 3) = 2;
        M2C_FIELD(D_00A68D88, s8 *, 0) = 7;
        return 0;
    }
}

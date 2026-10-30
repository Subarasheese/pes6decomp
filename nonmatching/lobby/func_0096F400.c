/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_008187D0();                            /* extern */
s32 func_008193E0(s32, M2C_UNK);                    /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009C1480();                            /* extern */
M2C_UNK func_009C2B50(M2C_UNK);                     /* extern */
M2C_UNK func_009C2B70();                            /* extern */
M2C_UNK func_009C3110();                            /* extern */
M2C_UNK func_009E0400();                            /* extern */

void func_0096F400(void) {
    s32 temp_s0;

    temp_s0 = func_00969AF0();
    if (func_00969B90() == 0) {
        if (func_008193E0(M2C_FIELD(temp_s0, s32 *, 0), -1) != 0) {
            func_009C2B50(1);
            func_009E0400();
            func_009C1480();
            func_009C2B70();
            func_009717C0(1);
        }
    } else {
        func_008187D0();
        func_009E0400();
        func_009C1480();
        func_009C3110();
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
        func_009717C0(9);
    }
}

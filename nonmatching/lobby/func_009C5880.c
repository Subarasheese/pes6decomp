/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009D5AA0(s8);
s32 func_009E2C90();                                /* extern */
M2C_UNK func_009E2CD0();                            /* extern */
M2C_UNK func_009E2CF0();                            /* extern */
s32 func_009E2DA0();                                /* extern */
extern void *D_00A7DD60;

s32 func_009C5880(void) {
    s32 temp_v0;

    if ((M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) || (M2C_FIELD(D_00A7DD60, u8 *, 4) != 0)) {
        func_009E2CD0();
    }
    if (func_009E2C90() == 0) {
        func_009D5AA0(0);
    }
    temp_v0 = func_009E2DA0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 2:
        func_009D5AA0(1);
        func_009E2CF0();
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1D;
        M2C_FIELD(D_00A7DD60, s8 *, 1) = 9;
        break;
    case 1:
        func_009D5AA0(1);
        func_009E2CF0();
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 9;
        break;
    }
    return 0;
}

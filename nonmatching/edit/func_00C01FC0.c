/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00B9F830();                                /* extern */
M2C_UNK func_00C018B0();                            /* extern */
s32 func_00C020D0();                                /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern s32 D_003EB12C;
extern char D_00CEEC40[];

s32 func_00C01FC0(void) {
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EB12C) {                           /* irregular */
    case 0:
        func_00C1B440(0, (*(u16 *)D_00CEEC40));
        func_00B91490(0xB);
        func_00B91490(0x38);
        D_003EB12C = 1;
        /* fallthrough */
    case 1:
        if (func_00B9F830() != 0) {
            D_003EB12C = 2;
        }
        break;
    case 2:
        var_s0 = func_00C020D0();
        if (var_s0 != 0) {
            func_00B91440(0x38);
            func_00C1B440(0, 0x126U);
            func_00C018B0();
            D_003EB12C = 0;
        }
        break;
    }
    return var_s0;
}

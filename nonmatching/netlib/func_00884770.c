/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00880D10(void);
extern s32 func_001F08B0(s32);
M2C_UNK func_00818750();                            /* extern */
M2C_UNK func_00819460(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64, s64, s64, s64); /* extern */
s32 func_0084A650();                                /* extern */
M2C_UNK func_00885CA0();                            /* extern */
extern char D_00591DB7[];

void func_00884770(void) {
    func_00880D10();
    if ((*(u8 *)D_00591DB7) == 0) {
        if (func_0084A650() == 1) {
            func_00819460(0, func_001F08B0(0x0203001A), 0, 0, -1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, 0x451C4000, 3, 0, 3, 1);
            return;
        }
        func_00818750();
        func_00885CA0();
    }
}

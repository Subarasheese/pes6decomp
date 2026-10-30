/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00855290(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BF4AF0(s32);                         /* extern */
M2C_UNK func_00BF4D80(s32);                         /* extern */

void func_00BF5B70(void) {
    s32 temp_a0;

    temp_a0 = func_009E1C90(2) & 0xFF;
    switch (temp_a0) {                              /* irregular */
    case 2:
        func_009E1D30(1, 0xD);
        if (func_002DCA30() != 0) {
            func_00853B50(1, 0xD, 0xB, 0, *func_008472D0(), 0, 0, 0);
            func_00855290(1, func_009E1C90(1) & 0xFF, 0);
        }
        return;
    case 0:
        func_00BF4D80(temp_a0);
        return;
    case 1:
        func_00BF4AF0(temp_a0);
        return;
    }
}

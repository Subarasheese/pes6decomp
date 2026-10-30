/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00B69B30(s32);                         /* extern */
M2C_UNK func_00B69CA0(s32);                         /* extern */
M2C_UNK func_00B6A1D0(s32);                         /* extern */
M2C_UNK func_00B6A3C0(s32);                         /* extern */

void func_00B6A4B0(void) {
    s32 temp_a0;

    temp_a0 = func_009E1C90(3) & 0xFF;
    switch (temp_a0) {                              /* irregular */
    case 0:
        func_00B6A3C0(temp_a0);
        return;
    case 1:
        func_00B6A1D0(temp_a0);
        return;
    case 2:
        func_00B69CA0(temp_a0);
        return;
    case 3:
        func_00B69B30(temp_a0);
        return;
    }
}

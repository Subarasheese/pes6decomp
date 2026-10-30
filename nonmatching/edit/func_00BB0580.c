/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6670(void);
M2C_UNK func_00214290(s32, s8);                     /* extern */
s32 func_00B9F840(s8);                              /* extern */
s32 func_00BA3A00();                                /* extern */
M2C_UNK func_00BB0690(s8);                          /* extern */
M2C_UNK func_00BB0870(s8);                          /* extern */
M2C_UNK func_00BB1510(s8);                          /* extern */
M2C_UNK func_00BC6910(M2C_UNK);                     /* extern */

s32 func_00BB0580(void *arg0) {
    s32 var_s0;
    s8 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s8 *, 6);
    var_s0 = -1;
    switch (temp_a1) {                              /* irregular */
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0xC) == 2) {
            func_00BB1510(temp_a1);
        }
        M2C_FIELD(arg0, s8 *, 6) = 3;
        break;
    case 0:
        func_00BB0870(temp_a1);
        M2C_FIELD(arg0, s8 *, 6) = 1;
        if (func_00BA3A00() == 0) {
            func_00BC6910(0x200024);
        }
        break;
    case 1:
        func_00BB0690(temp_a1);
        break;
    case 3:
        if (func_00B9F840(temp_a1) != 0) {
            M2C_FIELD(arg0, s8 *, 6) = 4;
        }
        break;
    case 4:
        func_00214290(M2C_FIELD(arg0, s32 *, 0x1C), temp_a1);
        func_001B6670();
        var_s0 = M2C_FIELD(arg0, s32 *, 0xC);
        func_001B6670();
        M2C_FIELD(arg0, s8 *, 6) = 0;
        break;
    }
    return var_s0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_008187D0();                            /* extern */
s32 func_00819370(s32, M2C_UNK);                    /* extern */
void *func_00969AF0();                              /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_0096EFF0();                            /* extern */
M2C_UNK func_0096F0B0();                            /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */

s32 func_00970600(void) {
    s32 temp_v0;
    s32 var_s0;
    void *temp_s1;

    var_s0 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* irregular */
    case 0:
        M2C_FIELD(func_00969AF0(), s32 *, 0x18) = 0;
        func_009717C0(1);
        break;
    case 1:
        func_0096F0B0();
        break;
    case 2:
        func_0096EFF0();
        break;
    case 3:
        temp_s1 = func_00969AF0();
        if (func_00969B90() == 0) {
            if (func_00819370(M2C_FIELD(temp_s1, s32 *, 0), -1) != 0) {
                M2C_FIELD(temp_s1, s32 *, 0x18) = 1;
                func_009717C0(4);
            }
        } else {
            func_008187D0();
            M2C_FIELD(temp_s1, s32 *, 0x18) = 1;
            func_009717C0(4);
        }
        break;
    case 4:
        var_s0 = M2C_FIELD(func_00969AF0(), s32 *, 0x18);
        break;
    }
    func_00971770();
    return var_s0;
}

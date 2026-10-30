/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
s32 func_00817AD0(M2C_UNK);                         /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */

void func_0096C180(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00969AF0();
    temp_v0 = func_00817AD0(0x01FB0039);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 2:
    case 1:
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
        func_009717C0(0xA);
        break;
    case 3:
        func_009717C0(3);
        break;
    }
    if (func_00969B90() != 0) {
        func_00817C00();
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
        func_009717C0(0xA);
    }
}

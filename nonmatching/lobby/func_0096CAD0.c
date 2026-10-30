/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093C010(s32);                             /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_009E0290();                                /* extern */
s32 func_009E02A0();                                /* extern */

void func_0096CAD0(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00969AF0();
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
        func_009717C0(7);
    } else {
        temp_v0 = func_009E02A0();
        switch (temp_v0) {                          /* irregular */
        case 2:
            M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
            func_009717C0(7);
            return;
        case 1:
            func_0026E840(0x84028400);
            M2C_FIELD(temp_s0, s32 *, 4) = func_0093C010(func_009E0290());
            func_009717C0(3);
            return;
        case 0:
            return;
        }
    }
}

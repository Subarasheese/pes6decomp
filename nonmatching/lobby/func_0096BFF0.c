/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0093C740(void);
extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00938790();                            /* extern */
s32 func_009387C0(s32);                             /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009E0260();                            /* extern */
M2C_UNK func_009E0370(s32, M2C_UNK);                /* extern */

void func_0096BFF0(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00969AF0();
    if (func_00969B90() != 0) {
        func_00938790();
    }
    temp_v0 = func_009387C0(M2C_FIELD(temp_s0, s32 *, 4));
    switch (temp_v0) {                              /* irregular */
    case 1:
        M2C_FIELD(temp_s0, s32 *, 0x28) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
        func_009717C0(5);
        return;
    case 2:
        func_009E0370(func_0093C740(), -1);
        func_009E0260();
        if (func_0093C740() == 0) {
            func_0026E840(0x8C008005);
            func_009717C0(2);
        case 0:
            return;
        }
        func_009717C0(1);
        return;
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009B4060(M2C_UNK);                     /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009E1170();                            /* extern */
M2C_UNK func_009E1490(M2C_UNK);                     /* extern */
M2C_UNK func_009E14E0();                            /* extern */
M2C_UNK func_009E2CD0();                            /* extern */
M2C_UNK func_009E2CF0();                            /* extern */
s32 func_009E2DA0();                                /* extern */
extern void *D_00A68D00;

void func_00971E00(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_00A68D00;
    if (func_00969B90() != 0) {
        func_009E2CD0();
    }
    temp_v0 = func_009E2DA0();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_009E2CF0();
        if (func_00969B90() == 0) {
            func_009E1170();
            func_009E1490(1);
            func_009B40A0(1);
            func_009B4060(1);
            func_009717C0(3);
            return;
        }
        func_009E14E0();
        M2C_FIELD(temp_s0, s32 *, 0x20) = 1;
        func_009717C0(8);
        return;
    case 2:
        func_009E2CF0();
        func_009E14E0();
        if (func_00969B90() != 0) {
            M2C_FIELD(temp_s0, s32 *, 0x20) = 1;
            func_009717C0(8);
        case 0:
            return;
        }
        func_009717C0(9);
        return;
    }
}

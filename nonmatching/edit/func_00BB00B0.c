/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B6860();                            /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00BA3A00(s8);                              /* extern */
s32 func_00BA4FC0(s32);                             /* extern */
s32 func_00BA5090(s32);                             /* extern */
M2C_UNK func_00BA5B50(s32);                         /* extern */
s32 func_00BA6260(u8, M2C_UNK);                     /* extern */
M2C_UNK func_00BB1510(s8);                          /* extern */
M2C_UNK func_00BB1530(s32);                         /* extern */
M2C_UNK func_00BB1540(M2C_UNK);                     /* extern */
M2C_UNK func_00BB1550();                            /* extern */
extern u8 D_003EAF78;

void func_00BB00B0(void *arg0) {
    s32 temp_a0_2;
    s32 var_v0;
    s8 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s8 *, 6);
    switch (temp_a0) {                              /* irregular */
    case 2:
        if (func_00BA6260(D_003EAF78, 0xB4) != 0) {
            M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
            M2C_FIELD(arg0, s8 *, 4) = 1;
            M2C_FIELD(arg0, s8 *, 6) = 0;
        }
        return;
    case 0:
        if (func_00BA3A00(temp_a0) != 0) {
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0);
            if ((temp_a0_2 >= 0x124) && (temp_a0_2 < 0x1BA)) {
                var_v0 = func_00BA5090(temp_a0_2);
                goto block_13;
            }
            if ((temp_a0_2 >= 0x4F9E) && (temp_a0_2 < 0x4FC0)) {
                var_v0 = func_00BA4FC0(M2C_FIELD(arg0, s32 *, 0));
block_13:
                M2C_FIELD(arg0, s32 *, 0) = var_v0;
            }
        }
        if (M2C_FIELD(arg0, s8 *, 5) == 2) {
            func_00BA5B50(M2C_FIELD(arg0, s32 *, 0));
        }
        func_001B6860();
        func_00B91490(0x1D);
        if (M2C_FIELD(arg0, s8 *, 5) == 2) {
            func_00BB1540(3);
            D_003EAF78 = 0;
        } else {
            func_00BB1540(2);
            func_00BB1530(M2C_FIELD(arg0, s32 *, 0x14));
            D_003EAF78 = 1;
        }
        func_00BB1550();
        M2C_FIELD(arg0, s8 *, 6) = 1;
        return;
    case 1:
        func_00BB1510(temp_a0);
        M2C_FIELD(arg0, s8 *, 6) = 2;
        return;
    }
}

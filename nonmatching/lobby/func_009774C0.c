/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F08B0(M2C_UNK);                         /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_008186E0(s32, s32, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009AF5B0(M2C_UNK);                     /* extern */
extern void *D_00A68D50;

void func_009774C0(void) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_00A68D50;
    temp_s2 = func_001F08B0(0x6C0006);
    temp_s1 = func_001F08B0(0x6C0007);
    temp_v0 = func_008186E0(func_001F08B0(0x020D001C), temp_s2, temp_s1, 0, 1);
    switch (temp_v0) {                              /* irregular */
    case 1:
    case 0:
        break;
    case 3:
        func_009AF5B0(0);
        func_009717C0(2);
        break;
    case 2:
        func_009717C0(6);
        func_0099D030(1);
        break;
    }
    if (func_00969B90() != 0) {
        func_00817C00();
        func_0099D030(0);
        func_009717C0(9);
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
    }
}

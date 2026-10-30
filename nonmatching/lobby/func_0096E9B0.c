/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_008193E0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0093C740();                                /* extern */
s32 func_00950BA0();                                /* extern */
void *func_00969AF0();                              /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_0096BFF0();                            /* extern */
M2C_UNK func_0096C0C0();                            /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009E0400();                            /* extern */
M2C_UNK func_009E0430(s32, s32, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK func_009B1840;

s32 func_0096E9B0(void) {
    s32 temp_s1_2;
    s32 temp_v0;
    s32 var_s0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s1_3;

    var_s0 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_s1 = func_00969AF0();
        func_0099C760();
        func_0099C730(0x020C001D);
        M2C_FIELD(temp_s1, s32 *, 0x18) = 0;
        func_009B40A0(0);
        temp_s1_2 = func_0093C740();
        func_009E0430(temp_s1_2, func_00950BA0() - 1, &func_009B1840, 0);
        if (func_0093C740() == 0) {
            func_0026E840(0x8C008005);
            func_009717C0(2);
        } else {
            func_009717C0(1);
        }
        break;
    case 1:
        func_0096C0C0();
        break;
    case 2:
        temp_s1_3 = func_00969AF0();
        if (func_00969B90() == 0) {
            if (func_008193E0(0x020D0018, -1) != 0) {
                M2C_FIELD(temp_s1_3, s32 *, 0x18) = 1;
                func_009717C0(5);
            }
        } else {
            func_008187D0();
            M2C_FIELD(temp_s1_3, s32 *, 0x18) = 1;
            func_009717C0(5);
        }
        break;
    case 4:
        func_0096BFF0();
        break;
    case 5:
        temp_s0 = func_00969AF0();
        func_009E0400();
        func_009B40A0(1);
        var_s0 = M2C_FIELD(temp_s0, s32 *, 0x18);
        break;
    }
    func_00971770();
    return var_s0;
}

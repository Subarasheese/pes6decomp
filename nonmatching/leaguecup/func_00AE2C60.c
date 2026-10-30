/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_002293F0();                              /* extern */
s32 func_00229460();                                /* extern */
s32 func_0022C1E0();                                /* extern */
s32 func_00230380();                                /* extern */
M2C_UNK func_00238740(M2C_UNK, u8);                 /* extern */
M2C_UNK func_002387A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00239210(u8, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0097CFC0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0097D050(u8);                          /* extern */

void func_00AE2C60(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 var_a2;
    s8 var_a1;
    void *temp_s1;

    temp_s2 = func_0022C1E0();
    temp_s0 = func_00229460();
    temp_s1 = func_002293F0();
    if ((temp_s2 != 0) && (temp_s0 != 0) && (temp_s1 != NULL)) {
        temp_s0_2 = func_00230380() == 1;
        func_0097D050(M2C_FIELD(temp_s1, u8 *, 0x1364));
        func_002387A0(0, 1);
        func_002387A0(1, 0);
        func_00238740(0, M2C_FIELD(temp_s1, u8 *, 0x1364));
        var_a2 = 0;
        var_a1 = 0;
        if ((s32) M2C_FIELD(temp_s1, u8 *, 0x1364) > 0) {
            do {
                M2C_FIELD((temp_s2 + (var_a2 & 0xFF)), s8 *, 0xC4) = var_a1;
                var_a2 = (var_a2 + 1) & 0xFF;
                var_a1 = (var_a1 + 1) & 0xFF;
            } while (var_a2 < (s32) M2C_FIELD(temp_s1, u8 *, 0x1364));
        }
        func_00239210(M2C_FIELD(temp_s1, u8 *, 0x1364), 0, 0, 0, 1);
        func_0097CFC0(0, 1);
        func_0097CFC0(1, 0);
        if (temp_s0_2 == 0) {
            func_0097CFC0(2, 0);
        } else {
            func_0097CFC0(2, 1);
        }
    }
}

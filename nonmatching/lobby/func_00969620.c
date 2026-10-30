/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_008214E0();                                /* extern */
s32 func_0093B740();                                /* extern */
M2C_UNK func_0093CC70();                            /* extern */
s32 func_0093CC90();                                /* extern */
M2C_UNK func_0093D470();                            /* extern */
s32 func_0093D480();                                /* extern */
s32 func_0093D4B0();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009B1A80();                            /* extern */
M2C_UNK func_009B43E0();                            /* extern */
M2C_UNK func_009B46F0();                            /* extern */
s32 func_009B4BF0(s32);                             /* extern */
s32 func_009B4C50();                                /* extern */
s32 func_009B4D50();                                /* extern */
M2C_UNK func_009B4DC0(M2C_UNK, s32);                /* extern */
M2C_UNK func_009B4E80();                            /* extern */
extern void *D_00A68CA8;

void func_00969620(void) {
    s32 temp_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_s0;

    temp_s0 = D_00A68CA8;
    temp_s1 = func_0093D4B0();
    if ((func_0093CC90() != 0) && (M2C_FIELD(temp_s0, s32 *, 0x188) != 0)) {
        func_009B46F0();
        func_0093CC70();
    }
    if ((func_0093D480() != 0) && (func_008214E0() != 0)) {
        M2C_FIELD(temp_s0, s32 *, 0x184) = 1;
        func_0093D470();
    }
    if (func_0093B740() != 0) {
        func_009B4E80();
        func_009B43E0();
        func_009B1A80();
        func_0099D030(1);
        func_009717C0(2);
        return;
    }
    if (D_00A68CA8 != NULL) {
        if (D_00A68CA8 == NULL) {
            var_v0 = 0;
        } else {
            var_v0 = M2C_FIELD(D_00A68CA8, s32 *, 0x180);
        }
        if (var_v0 != 0) {
            var_v0_2 = 1;
        } else {
            if (D_00A68CA8 == NULL) {
                var_v0_3 = 0;
            } else {
                var_v0_3 = M2C_FIELD(D_00A68CA8, s32 *, 0x184);
            }
            if (var_v0_3 != 0) {
                var_v0_2 = 1;
            } else {
                goto block_22;
            }
        }
    } else {
block_22:
        var_v0_2 = 0;
    }
    if (var_v0_2 == 0) {
        if (func_0081EC20(0x4000) == 0) {
            if (func_0081EC20(0x1000) == 0) {
                if (func_0081EB60(0x10) == 0) {
                    if (func_0081EB60(0x40) != 0) {
                        func_009B4DC0(0x40, func_009B4BF0(temp_s1));
                    }
                    return;
                }
                func_009B4DC0(0x10, func_009B4BF0(temp_s1));
                return;
            }
            M2C_FIELD(temp_s0, s32 *, 0x174) = 1;
            func_0026E840(0x84008401);
            func_009717C0(9);
            return;
        }
        M2C_FIELD(temp_s0, s32 *, 0x170) = func_009B4D50();
        M2C_FIELD(D_00A68CA8, s32 *, 0x168) = func_009B4C50();
        func_0026E840(0x84028400);
        func_009717C0(9);
        return;
    }
    M2C_FIELD(temp_s0, s32 *, 0x174) = 1;
    func_009717C0(9);
}

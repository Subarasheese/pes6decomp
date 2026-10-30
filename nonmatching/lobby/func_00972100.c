/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s8 func_0093C9A0(s32);                              /* extern */
s32 func_0093C9B0(s32);                             /* extern */
s8 func_0093C9C0(s32);                              /* extern */
s16 func_0093C9D0(s32);                             /* extern */
s32 func_0093C9E0(s32);                             /* extern */
s32 func_0093C9F0(s32);                             /* extern */
s32 func_0093CA00(s32);                             /* extern */
s32 func_0093CA70(s32);                             /* extern */
s32 func_0093CC20(s32);                             /* extern */
M2C_UNK func_00969B20();                            /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009B4030(M2C_UNK);                     /* extern */
M2C_UNK func_009B4060(M2C_UNK);                     /* extern */
s32 func_009B4260();                                /* extern */
M2C_UNK func_009B4270(s32, s32);                    /* extern */
M2C_UNK func_009B4330(M2C_UNK);                     /* extern */
extern void *D_00A68D00;

void func_00972100(void) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_00A68D00;
    temp_s2 = func_0081EB20() & 0xFF;
    temp_s1 = func_0081EAE0() & 0xFF;
    if (func_0081EC20(0x4000) == 0) {
        if (func_0081EC20(0x1000) != 0) {
            M2C_FIELD(temp_s0, s32 *, 0x20) = 1;
            func_009B4060(0);
            func_0026E840(0x84008401);
            func_009717C0(8);
        } else if (temp_s2 == 0) {
            if (temp_s1 == 0) {
                if (func_0081EB60(0x10) == 0) {
                    if (func_0081EB60(0x40) != 0) {
                        func_009B4330(0x40);
                    }
                } else {
                    func_009B4330(0x10);
                }
            } else {
                goto block_10;
            }
        } else {
block_10:
            func_009B4270(temp_s2, temp_s1);
        }
    } else {
        temp_v0 = func_009B4260();
        M2C_FIELD(temp_s0, s32 *, 0) = func_0093CC20(temp_v0);
        M2C_FIELD(temp_s0, s32 *, 0x10) = func_0093CA00(temp_v0);
        M2C_FIELD(temp_s0, s32 *, 0x14) = func_0093C9F0(temp_v0);
        M2C_FIELD(temp_s0, s32 *, 0x18) = func_0093C9E0(temp_v0);
        M2C_FIELD(temp_s0, s16 *, 4) = func_0093C9D0(temp_v0);
        M2C_FIELD(temp_s0, s8 *, 6) = func_0093C9C0(temp_v0);
        M2C_FIELD(temp_s0, s32 *, 8) = func_0093C9B0(temp_v0);
        M2C_FIELD(temp_s0, s8 *, 0xC) = func_0093C9A0(temp_v0);
        M2C_FIELD(temp_s0, s32 *, 0x1C) = func_0093CA70(temp_v0);
        func_009B4030(2);
        func_0026E840(0x84028400);
        func_00969B20();
        func_009717C0(2);
    }
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 0x20) = 1;
        func_009B4060(0);
        func_009717C0(8);
    }
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_0093BBD0();                                /* extern */
s32 func_0093BBF0(s32);                             /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009B7520(M2C_UNK);                     /* extern */
s32 func_009B7680();                                /* extern */
M2C_UNK func_009B76C0(M2C_UNK);                     /* extern */
s32 func_009B78A0();                                /* extern */
M2C_UNK func_009B78B0(s32, s32);                    /* extern */
s32 func_009B7970(M2C_UNK);                         /* extern */

void func_0096FB10(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;

    temp_s0 = func_00969AF0();
    temp_s2 = func_0081EB20() & 0xFF;
    temp_s1 = func_0081EAE0() & 0xFF;
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
        func_009717C0(0xA);
    } else if (func_0081EC20(0x4000) == 0) {
        if (func_0081EC20(0x1000) != 0) {
            M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
            func_0026E840(0x84008401);
            func_009717C0(0xA);
            return;
        }
        if (temp_s2 == 0) {
            if (temp_s1 == 0) {
                if (func_0081EB60(0x10) == 0) {
                    if (func_0081EB60(0x40) == 0) {
                        if (func_0081EC20(0x400) == 0) {
                            if (func_0081EC20(0x800) == 0) {
                                if (func_0081EB60(1) != 0) {
                                    func_009717C0(8);
                                }
                            } else if (func_0093BBD0() >= 0x65) {
                                func_009B76C0(0x800);
                                M2C_FIELD(temp_s0, s32 *, 0x164) = 0;
                                func_0099D030(1);
                                func_009717C0(7);
                            }
                        } else if (func_0093BBD0() >= 0x65) {
                            func_009B76C0(0x400);
                            M2C_FIELD(temp_s0, s32 *, 0x164) = 0;
                            func_0099D030(1);
                            func_009717C0(7);
                        }
                    } else if ((func_009B7970(0x40) == 0) && (func_0081EC20(0x40) != 0)) {
                        temp_s1_2 = func_009B78A0();
                        if ((temp_s1_2 == (func_009B7680() - 1)) && (func_0093BBD0() >= 0x65)) {
                            func_009B76C0(0x800);
                            M2C_FIELD(temp_s0, s32 *, 0x164) = 0;
                            func_0099D030(1);
                            func_009717C0(7);
                        }
                    }
                } else if ((func_009B7970(0x10) == 0) && (func_0081EC20(0x10) != 0) && (func_009B78A0() == 0) && (func_0093BBD0() >= 0x65)) {
                    func_009B76C0(0x400);
                    M2C_FIELD(temp_s0, s32 *, 0x164) = 0x63;
                    func_0099D030(1);
                    func_009717C0(7);
                }
            } else {
                goto block_13;
            }
        } else {
block_13:
            func_009B78B0(temp_s2, temp_s1);
        }
    } else {
        M2C_FIELD(temp_s0, s32 *, 8) = func_0093BBF0(func_009B78A0());
        func_009B7520(0);
        func_0026E840(0x84028400);
        func_009717C0(9);
    }
}

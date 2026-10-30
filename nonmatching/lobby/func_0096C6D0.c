/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
extern s32 func_001F08B0(s32);
M2C_UNK func_001C8590(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00828160();                                /* extern */
s32 func_0093CC10(s32);                             /* extern */
s32 func_0093CC20(s32);                             /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009AF7C0(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_009B4060(M2C_UNK);                     /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
s32 func_009B4260();                                /* extern */
M2C_UNK func_009B4270(s32, s32);                    /* extern */
M2C_UNK func_009B4330(M2C_UNK);                     /* extern */
M2C_UNK func_009B4D10(M2C_UNK);                     /* extern */

void func_0096C6D0(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_v0;

    temp_s0 = func_00969AF0();
    temp_s2 = func_0081EB20() & 0xFF;
    temp_s1 = func_0081EAE0() & 0xFF;
    if (func_0081EC20(0x4000) == 0) {
        if (func_0081EC20(0x1000) != 0) {
            func_0026E840(0x84008401);
            func_009717C0(0xB);
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
                goto block_14;
            }
        } else {
block_14:
            func_009B4270(temp_s2, temp_s1);
        }
    } else {
        temp_v0 = func_009B4260();
        temp_s1_2 = func_0093CC20(temp_v0);
        if (temp_s1_2 == func_00828160()) {
            func_0026E840(0x8C008005);
        } else {
            M2C_FIELD(temp_s0, s32 *, 0x160) = 1;
            M2C_FIELD(temp_s0, s32 *, 4) = temp_s1_2;
            func_001C8590(temp_s0 + 0x12D, func_0093CC10(temp_v0), 0x31);
            func_009AF7C0(0, temp_s0 + 0x12D, func_001F08B0(0x020C0030));
            func_009B4060(0);
            func_009B40A0(0);
            func_009B4D10(0);
            func_0026E840(0x84028400);
            func_009717C0(2);
        }
    }
    if (func_00969B90() != 0) {
        func_009717C0(0xA);
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
    }
}

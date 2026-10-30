/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00828160();                                /* extern */
s32 func_0093CB50(s32);                             /* extern */
s32 func_0093CC20(s32);                             /* extern */
void *func_00969AF0();                              /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009B4030(M2C_UNK);                     /* extern */
M2C_UNK func_009B4060(M2C_UNK);                     /* extern */
s32 func_009B4260();                                /* extern */
M2C_UNK func_009B4270(s32, s32);                    /* extern */
M2C_UNK func_009B4330(M2C_UNK);                     /* extern */

void func_0096CE00(void) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = func_00969AF0();
    temp_s2 = func_0081EB20() & 0xFF;
    temp_s1 = func_0081EAE0() & 0xFF;
    if (func_0081EC20(0x4000) == 0) {
        if (func_0081EC20(0x1000) != 0) {
            func_009B4060(0);
            M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
            func_0026E840(0x84008401);
            func_009717C0(3);
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
            func_009B4030(2);
            func_0099D030(1);
            func_0026E840(0x84028400);
            M2C_FIELD(temp_s0, s32 *, 4) = temp_s1_2;
            M2C_FIELD(temp_s0, s32 *, 0x10) = func_0093CB50(temp_v0);
            func_009717C0(2);
        }
    }
    if (func_00969B90() != 0) {
        func_009B4060(0);
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
        func_009717C0(3);
    }
}

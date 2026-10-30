/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00151EA0(u64);                             /* extern */
void *func_00223C10(s32, s32);                      /* extern */
s32 func_002243B0(s32, s32);                        /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
void *func_00224E20(s32, s32);                      /* extern */
s32 func_00226E70();                                /* extern */
M2C_UNK func_00227540(M2C_UNK);                     /* extern */
void *func_00229DF0();                              /* extern */
M2C_UNK func_0022ED40();                            /* extern */
void *func_0022F150();                              /* extern */
M2C_UNK func_00938E60(s32, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00939220();                            /* extern */
M2C_UNK func_009766F0();                            /* extern */
M2C_UNK func_00985860();                            /* extern */
M2C_UNK func_0098F4C0();                            /* extern */
M2C_UNK func_0098FE40();                            /* extern */
M2C_UNK func_009949A0();                            /* extern */
M2C_UNK func_00994B90();                            /* extern */
void *func_00994C60(s32, s32);                      /* extern */
M2C_UNK func_00AFA210();                            /* extern */
M2C_UNK func_00AFB6F0();                            /* extern */
M2C_UNK func_00AFB820();                            /* extern */
M2C_UNK func_00AFBFE0();                            /* extern */
M2C_UNK func_00AFC290();                            /* extern */
M2C_UNK func_00AFE840();                            /* extern */
M2C_UNK func_00AFF3C0();                            /* extern */
M2C_UNK func_00AFFEB0();                            /* extern */
M2C_UNK func_00B01430();                            /* extern */
s32 func_00B02A20(s32);                             /* extern */
s32 func_00B05280(s32);                             /* extern */
M2C_UNK func_00B2B450();                            /* extern */
M2C_UNK func_00B2B7B0();                            /* extern */

void func_00AFC590(void) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_s5;
    void *temp_s0;
    void *temp_s6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s0 = func_0022F150();
    temp_s6 = func_00229DF0();
    if ((temp_s0 != NULL) && (temp_s6 != NULL)) {
        func_00AFBFE0();
        func_0098FE40();
        func_0098F4C0();
        func_00985860();
        var_s2 = 0;
        do {
            var_s1 = 0;
loop_4:
            temp_v0 = func_00994C60(var_s2, var_s1);
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, s16 *, 4) = 0;
            }
            var_s1 += 1;
            if (var_s1 < 0x25) {
                goto loop_4;
            }
            var_s2 += 1;
        } while (var_s2 < 0x48);
        var_s2_2 = 0;
        do {
            var_s1_2 = 0;
loop_10:
            temp_v0_2 = func_00224E20(var_s2_2 & 0xFF, var_s1_2 & 0xFF);
            if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, u16 *, 0) != 0)) {
                M2C_FIELD(temp_v0_2, u8 *, 0x10) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x10) & ~0xF) | 2);
            }
            var_s1_2 += 1;
            if (var_s1_2 < 0x20) {
                goto loop_10;
            }
            var_s2_2 += 1;
        } while (var_s2_2 < 0x48);
        func_009949A0();
        func_00AFC290();
        func_009766F0();
        func_00AFA210();
        func_00AFB820();
        func_00AFB6F0();
        func_00994B90();
        func_00B2B7B0();
        func_00B2B450();
        func_00B01430();
        func_00AFE840();
        func_00AFFEB0();
        func_0022ED40();
        func_00227540(1);
        var_s5 = 0;
        do {
            var_s4 = 0;
loop_17:
            temp_s2 = func_00224BC0(var_s5 & 0xFF, var_s4 & 0xFF) & 0xFFFF;
            temp_s3 = func_002243B0(var_s5 & 0xFF, var_s4 & 0xFF) & 0xFF;
            if (temp_s2 & 0xFFFF) {
                if (func_00226E70() == 1) {
                    temp_v1 = func_00B02A20(temp_s2) & 0xFF;
                    if (temp_v1 >= 0x23) {
                        var_s1_3 = 1;
                    } else if (temp_v1 >= 0x1F) {
                        var_s1_3 = ((func_00151EA0((0x24 - temp_v1) & 0xFF) & 0xFFFF) + 1) & 0xFF;
                    } else {
                        var_s1_3 = ((func_00151EA0(5U) & 0xFFFF) + 1) & 0xFF;
                    }
                } else {
                    var_s1_3 = ((func_00151EA0(5U) & 0xFFFF) + 1) & 0xFF;
                }
                func_00938E60(var_s5 & 0xFF, var_s4 & 0xFF, 2, var_s1_3, func_00B05280(temp_s2) & 0xFFFF);
                temp_v0_3 = func_00223C10(var_s5 & 0xFF, temp_s3);
                if (temp_v0_3 != NULL) {
                    M2C_FIELD(temp_v0_3, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 1) & ~0xFC) | ((((func_00151EA0((u64) ((s64) M2C_FIELD(temp_v0_3, u16 *, 0) << 0x36) >> 0x3A) & 0xFFFF) + 1) & 0x3F) * 4));
                }
            }
            var_s4 += 1;
            if (var_s4 < 0x20) {
                goto loop_17;
            }
            var_s5 += 1;
        } while (var_s5 < 0x48);
        func_00AFF3C0();
        M2C_FIELD(temp_s6, s8 *, 4) = 1;
        func_00939220();
        M2C_FIELD(temp_s0, s32 *, 0x30) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x34) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x38) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x40) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x584) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x588) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x580) = (u8) ((M2C_FIELD(temp_s0, u8 *, 0x580) & ~0x7F) | (0 & 0x7F));
        M2C_FIELD(temp_s0, u8 *, 0x580) = (u8) ((M2C_FIELD(temp_s0, u8 *, 0x580) & ~0x80) | ((0 & 1) << 7));
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0021E250(s32, s32);                    /* extern */
M2C_UNK func_0021E390(s32, s32, s32);               /* extern */
s32 func_0021E4C0(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_0021EA40(s32, s32, M2C_UNK);           /* extern */
s32 func_0021EB50(s32, M2C_UNK, u8, u8);            /* extern */
M2C_UNK func_0021ED50(s32, s32);                    /* extern */
s32 func_0021EE40(s32, M2C_UNK);                    /* extern */
void *func_0021F440(s32, s32);                      /* extern */
M2C_UNK func_0021F660(s32, s32);                    /* extern */
s32 func_0021F710(s32);                             /* extern */
M2C_UNK func_0021F9A0(s32, s32);                    /* extern */
s32 func_0021FA50(s32);                             /* extern */
s32 func_0021FBC0(s32);                             /* extern */
M2C_UNK func_00221BC0(s32, s32, M2C_UNK, s32);      /* extern */
M2C_UNK func_00222E80(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_002374A0(s32, s32);                    /* extern */
M2C_UNK func_00237500(s32, M2C_UNK);                /* extern */
s32 func_002F7F30(s32, s32);                        /* extern */
void *func_002F8270(s32, s32);                      /* extern */
s32 func_002F8880(s32);                             /* extern */
M2C_UNK func_00362580(s32, s32);                    /* extern */

void func_00954F60(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s8 var_v0;
    u8 temp_a2;
    u8 temp_a3;
    void *temp_s0_2;
    void *temp_s0_4;
    void *temp_s1_2;
    void *temp_v0;

    func_002374A0(arg1, arg0);
    var_s0 = 0;
    do {
        func_0021E390(arg1, var_s0, func_0021E4C0(arg0, var_s0, 1, 0xFFFF));
        var_s0 += 1;
    } while (var_s0 < 2);
    temp_s1 = func_0021FA50(arg0);
    temp_s0 = func_0021F710(arg0);
    func_0021F9A0(arg1, temp_s1);
    func_0021F660(arg1, temp_s0);
    var_s1 = 0;
    do {
        temp_s0_2 = func_0021F440(arg0, var_s1);
        temp_v0 = func_0021F440(arg1, var_s1);
        temp_a3 = M2C_FIELD(temp_s0_2, u8 *, 0);
        var_s1 += 1;
        temp_a2 = M2C_FIELD(temp_s0_2, u8 *, 1);
        M2C_FIELD(temp_v0, u8 *, 0) = temp_a3;
        M2C_FIELD(temp_v0, u8 *, 1) = temp_a2;
        M2C_FIELD(temp_v0, u8 *, 2) = (u8) M2C_FIELD(temp_s0_2, u8 *, 2);
        M2C_FIELD(temp_v0, u8 *, 3) = (u8) M2C_FIELD(temp_s0_2, u8 *, 3);
    } while (var_s1 < 2);
    func_0021EA40(arg1, func_0021EB50(arg0, 0, temp_a2, temp_a3) & 0xFF, 0);
    func_0021ED50(arg1, func_0021EE40(arg0, 0) & 0xFF);
    func_0021E250(arg1, arg0);
    temp_s6 = arg1 & 0xFFFF;
    temp_s0_3 = func_002F8880(arg0 & 0xFFFF);
    func_001C4730(func_002F8880(temp_s6), temp_s0_3, 0x220);
    var_s2 = 0;
    do {
        temp_s1_2 = func_002F8270(arg0, var_s2);
        temp_s0_4 = func_002F8270(arg1, var_s2);
        if (temp_s6 == 0x126) {
            var_v0 = var_s2 + 0x50;
        } else {
            var_v0 = var_s2 + 0x54;
        }
        M2C_FIELD(temp_s0_4, s8 *, 3) = var_v0;
        temp_s3 = func_002F7F30(arg0, var_s2);
        temp_v0_2 = func_002F7F30(arg1, var_s2);
        if (temp_s1_2 != NULL) {
            M2C_FIELD(temp_s0_4, u8 *, 2) = (u8) M2C_FIELD(temp_s1_2, u8 *, 2);
        } else {
            M2C_FIELD(temp_s0_4, u8 *, 2) = 0U;
        }
        if (temp_s3 != 0) {
            func_001C4730(temp_v0_2, temp_s3, 0x260);
        } else {
            func_001C48E8(temp_v0_2, 0, 0x260);
        }
        var_s2 += 1;
    } while (var_s2 < 4);
    func_00362580(func_0021FBC0(arg1), arg0);
    func_00237500(arg1, 0);
    var_s0_2 = 0;
    do {
        func_00222E80(arg1, var_s0_2 & 0xFF, 0);
        temp_a1 = var_s0_2 & 0xFF;
        if (var_s0_2 < 0x17) {
            var_a3 = temp_a1;
        } else {
            var_a3 = 0;
        }
        func_00221BC0(arg1, temp_a1, 0, var_a3);
        var_s0_2 += 1;
    } while (var_s0_2 < 0x20);
}

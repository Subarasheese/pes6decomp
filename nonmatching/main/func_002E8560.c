/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001C4698(s32 *, s32 *, M2C_UNK);           /* extern */
s8 func_001CDA50(M2C_UNK);                          /* extern */
s32 *func_00221140();                               /* extern */
s32 *func_00221150();                               /* extern */
s32 *func_002212E0();                               /* extern */
s32 *func_002212F0();                               /* extern */
s32 func_002E9360();                                /* extern */
M2C_UNK func_002E9370(M2C_UNK);                     /* extern */

s32 func_002E8560(void) {
    s32 *temp_s0;
    s32 *temp_s1;
    s32 *temp_s2;
    s32 *temp_s6;
    s32 *var_s3;
    s32 *var_s4;
    s32 *var_s4_2;
    s32 *var_s4_3;
    s32 *var_s5_2;
    s32 *var_s5_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s5;

    temp_s2 = func_002212F0();
    temp_s1 = func_002212E0();
    temp_s0 = func_00221150();
    temp_s6 = func_00221140();
    var_s5 = 0;
    var_s4 = temp_s1;
    var_s3 = temp_s2;
loop_1:
    if (func_001C4698(var_s3 + 0x20C, var_s4 + 0x20C, 0x18) == 0) {
        var_s5 += 1;
        var_s4 += 0x18;
        var_s3 += 0x18;
        if (var_s5 < 8) {
            goto loop_1;
        }
    } else {
        func_002E9370(0x10000000);
    }
    var_s3_2 = 0;
    var_s5_2 = temp_s1;
    var_s4_2 = temp_s2;
loop_7:
    if (func_001C4698(var_s4_2 + 0x5C, var_s5_2 + 0x5C, 0x36) == 0) {
        var_s3_2 += 1;
        var_s5_2 += 0x36;
        var_s4_2 += 0x36;
        if (var_s3_2 >= 8) {

        } else {
            goto loop_7;
        }
    } else {
        func_002E9370(1);
    }
    if ((M2C_FIELD(temp_s2, u8 *, 0x304) != M2C_FIELD(temp_s1, u8 *, 0x304)) || (M2C_FIELD(temp_s2, u8 *, 0x305) != M2C_FIELD(temp_s1, u8 *, 0x305)) || (M2C_FIELD(temp_s2, u8 *, 0x306) != M2C_FIELD(temp_s1, u8 *, 0x306)) || (func_001C4698(temp_s2 + 0x2CC, temp_s1 + 0x2CC, 0x29) != 0)) {
        func_002E9370(2);
    }
    M2C_FIELD(temp_s2, s8 *, 0x2FA) = func_001CDA50(0);
    if (func_001C4698(temp_s2 + 0x2F5, temp_s1 + 0x2F5, 0xC) != 0) {
        func_002E9370(4);
    }
    if ((M2C_FIELD(temp_s2, s32 *, 0x44) != M2C_FIELD(temp_s1, s32 *, 0x44)) || (M2C_FIELD(temp_s2, s32 *, 0x48) != M2C_FIELD(temp_s1, s32 *, 0x48))) {
        func_002E9370(8);
    }
    var_s3_3 = 0;
    var_s5_3 = temp_s1;
    var_s4_3 = temp_s2;
    do {
        if (*var_s4_3 != *var_s5_3) {
            func_002E9370(8);
        }
        var_s3_3 += 1;
        var_s5_3 += 4;
        var_s4_3 += 4;
    } while (var_s3_3 < 0xB);
    if ((M2C_FIELD(temp_s2, s32 *, 0x44) == 1) && ((M2C_FIELD(temp_s2, s32 *, 0x40) != M2C_FIELD(temp_s1, s32 *, 0x40)) || (M2C_FIELD(temp_s2, s32 *, 0x30) != M2C_FIELD(temp_s1, s32 *, 0x30)) || (M2C_FIELD(temp_s2, s32 *, 0x34) != M2C_FIELD(temp_s1, s32 *, 0x34)) || (M2C_FIELD(temp_s2, s32 *, 0x38) != M2C_FIELD(temp_s1, s32 *, 0x38)) || (M2C_FIELD(temp_s2, s32 *, 0x3C) != M2C_FIELD(temp_s1, s32 *, 0x3C)))) {
        func_002E9370(0x80000000);
    }
    if (M2C_FIELD(temp_s2, s32 *, 0x2C) != M2C_FIELD(temp_s1, s32 *, 0x2C)) {
        func_002E9370(0x40000000);
    }
    if ((M2C_FIELD(temp_s2, u8 *, 0x307) != M2C_FIELD(temp_s1, u8 *, 0x307)) || (M2C_FIELD(temp_s2, u8 *, 0x308) != M2C_FIELD(temp_s1, u8 *, 0x308)) || (M2C_FIELD(temp_s2, u8 *, 0x309) != M2C_FIELD(temp_s1, u8 *, 0x309)) || (M2C_FIELD(temp_s2, u8 *, 0x30A) != M2C_FIELD(temp_s1, u8 *, 0x30A)) || (M2C_FIELD(temp_s2, u8 *, 0x30B) != M2C_FIELD(temp_s1, u8 *, 0x30B)) || (M2C_FIELD(temp_s2, u16 *, 0x30C) != M2C_FIELD(temp_s1, u16 *, 0x30C))) {
        func_002E9370(0x10);
    }
    if ((M2C_FIELD(temp_s2, s16 *, 0x314) != M2C_FIELD(temp_s1, s16 *, 0x314)) || (M2C_FIELD(temp_s2, s16 *, 0x316) != M2C_FIELD(temp_s1, s16 *, 0x316))) {
        func_002E9370(0x20);
    }
    if (M2C_FIELD(temp_s2, u8 *, 0x318) != M2C_FIELD(temp_s1, u8 *, 0x318)) {
        func_002E9370(0x40);
    }
    if (M2C_FIELD(temp_s2, u8 *, 0x319) != M2C_FIELD(temp_s1, u8 *, 0x319)) {
        func_002E9370(0x80);
    }
    if (func_001C4698(temp_s2 + 0x340, temp_s1 + 0x340, 0x80) != 0) {
        func_002E9370(0x04000000);
    }
    if ((M2C_FIELD(temp_s2, u8 *, 0x31A) != M2C_FIELD(temp_s1, u8 *, 0x31A)) || (M2C_FIELD(temp_s2, u8 *, 0x31B) != M2C_FIELD(temp_s1, u8 *, 0x31B))) {
        func_002E9370(0x80);
    }
    if ((M2C_FIELD(temp_s2, u8 *, 0x324) != M2C_FIELD(temp_s1, u8 *, 0x324)) || (M2C_FIELD(temp_s2, u8 *, 0x325) != M2C_FIELD(temp_s1, u8 *, 0x325))) {
        func_002E9370(0x02000000);
    }
    if (func_001C4698(temp_s2 + 0x304, temp_s1 + 0x304, 0x3C) != 0) {
        temp_v0 = func_002E9360();
        if (!(temp_v0 & 0x10) && !(temp_v0 & 0x20)) {
            temp_v1 = temp_v0 & 0x40;
            if ((temp_v1 == 0) && !(temp_v0 & 0x80) && (temp_v1 == 0)) {
                func_002E9370(0x80);
            }
        }
    }
    if (func_001C4698(temp_s0, temp_s6, 0x104) != 0) {
        func_002E9370(0x200000);
    }
    if (func_002E9360() != 0) {
        return 1;
    }
    return 0;
}

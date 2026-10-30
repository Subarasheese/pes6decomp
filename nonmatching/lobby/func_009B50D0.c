/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_002E4570(s32);                         /* extern */
M2C_UNK func_0099AE80(s32);                         /* extern */
M2C_UNK func_009B5020(void *);                      /* extern */

void func_009B50D0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 var_a0;
    void *var_v1;

    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_a0 != 0) {
        func_002E4570(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_a0_2 != 0) {
        func_001D7F10(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_a0_3 != 0) {
        func_002E4570(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_a0_4 != 0) {
        func_001D7F10(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_a0_5 != 0) {
        func_001D7F10(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_a0_6 != 0) {
        func_001D7F10(temp_a0_6);
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
    var_a0 = 0;
    var_v1 = arg0;
    do {
        M2C_FIELD(var_v1, s32 *, 0x60) = 0;
        var_a0 += 3;
        M2C_FIELD(var_v1, s32 *, 0x64) = 0;
        M2C_FIELD(var_v1, s32 *, 0x68) = 0;
        var_v1 += 0xC;
    } while (var_a0 < 9);
    temp_a0_7 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (temp_a0_7 != 0) {
        func_001D7F10(temp_a0_7);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    func_009B5020(arg0);
    M2C_FIELD(arg0, s32 *, 0x298) = 0;
    M2C_FIELD(arg0, s32 *, 0x29C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    temp_a0_8 = M2C_FIELD(arg0, s32 *, 0x294);
    if (temp_a0_8 != 0) {
        func_001D7F10(temp_a0_8);
        M2C_FIELD(arg0, s32 *, 0x294) = 0;
    }
    temp_a0_9 = M2C_FIELD(arg0, s32 *, 0x2AC);
    if (temp_a0_9 != 0) {
        func_002DF960(temp_a0_9);
        M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C0) = 0;
    }
    temp_a0_10 = M2C_FIELD(arg0, s32 *, 0x2CC);
    if (temp_a0_10 != 0) {
        func_002DF960(temp_a0_10);
        M2C_FIELD(arg0, s32 *, 0x2CC) = 0;
    }
    temp_a0_11 = M2C_FIELD(arg0, s32 *, 0x2C4);
    if (temp_a0_11 != 0) {
        func_0099AE80(temp_a0_11);
        M2C_FIELD(arg0, s32 *, 0x2C4) = 0;
    }
    temp_a0_12 = M2C_FIELD(arg0, s32 *, 0x2C8);
    if (temp_a0_12 != 0) {
        func_002DC1D0(temp_a0_12);
        M2C_FIELD(arg0, s32 *, 0x2C8) = 0;
    }
}

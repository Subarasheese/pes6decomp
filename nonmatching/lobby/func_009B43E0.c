/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D4E00(s32);                         /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099AE80(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_009B36C0(void *, s32);                 /* extern */
extern void *D_003EAD1C;

void func_009B43E0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 var_a0;
    s32 var_s0;
    void *temp_s1;
    void *var_v1;

    temp_s1 = D_003EAD1C;
    temp_a0 = M2C_FIELD(temp_s1, s32 *, 4);
    if (temp_a0 != 0) {
        func_001D7F10(temp_a0);
        M2C_FIELD(temp_s1, s32 *, 4) = 0;
    }
    var_a0 = 0;
    var_v1 = temp_s1;
    do {
        M2C_FIELD(var_v1, s32 *, 0xC) = 0;
        var_a0 += 3;
        M2C_FIELD(var_v1, s32 *, 0x10) = 0;
        M2C_FIELD(var_v1, s32 *, 0x14) = 0;
        var_v1 += 0xC;
    } while (var_a0 < 9);
    temp_a0_2 = M2C_FIELD(temp_s1, s32 *, 8);
    if (temp_a0_2 != 0) {
        func_001D7F10(temp_a0_2);
        M2C_FIELD(temp_s1, s32 *, 8) = 0;
    }
    var_s0 = 0;
    do {
        func_009B36C0(temp_s1, var_s0);
        var_s0 += 1;
    } while (var_s0 < 0xB);
    temp_a0_3 = M2C_FIELD(temp_s1, s32 *, 0x1A4);
    if (temp_a0_3 != 0) {
        func_0099AE80(temp_a0_3);
        M2C_FIELD(temp_s1, s32 *, 0x1A4) = 0;
    }
    temp_a0_4 = M2C_FIELD(temp_s1, s32 *, 0x1A8);
    if (temp_a0_4 != 0) {
        func_002DC1D0(temp_a0_4);
        M2C_FIELD(temp_s1, s32 *, 0x1A8) = 0;
    }
    temp_a0_5 = M2C_FIELD(temp_s1, s32 *, 0x190);
    if (temp_a0_5 != 0) {
        func_002DF960(temp_a0_5);
        M2C_FIELD(temp_s1, s32 *, 0x190) = 0;
    }
    temp_a0_6 = M2C_FIELD(temp_s1, s32 *, 0);
    if (temp_a0_6 != 0) {
        func_001D4E00(temp_a0_6);
        M2C_FIELD(temp_s1, s32 *, 0) = 0;
    }
    if (temp_s1 != NULL) {
        func_0099C7C0(temp_s1);
    }
}

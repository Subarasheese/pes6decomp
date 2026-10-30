/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D4E00(s32);                         /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_002E4570(s32);                         /* extern */
M2C_UNK func_0099AE80(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_009B5020(void *);                      /* extern */
extern void *D_00A7DC08;

void func_009B7A40(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 var_a0;
    void *temp_s0;
    void *var_v1;

    temp_s0 = D_00A7DC08;
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x48);
    if (temp_a0 != 0) {
        func_002E4570(temp_a0);
        M2C_FIELD(temp_s0, s32 *, 0x48) = 0;
    }
    temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x44);
    if (temp_a0_2 != 0) {
        func_001D7F10(temp_a0_2);
        M2C_FIELD(temp_s0, s32 *, 0x44) = 0;
    }
    var_a0 = 0;
    var_v1 = temp_s0;
    do {
        M2C_FIELD(var_v1, s32 *, 0x60) = 0;
        var_a0 += 3;
        M2C_FIELD(var_v1, s32 *, 0x64) = 0;
        M2C_FIELD(var_v1, s32 *, 0x68) = 0;
        var_v1 += 0xC;
    } while (var_a0 < 9);
    temp_a0_3 = M2C_FIELD(temp_s0, s32 *, 0x5C);
    if (temp_a0_3 != 0) {
        func_001D7F10(temp_a0_3);
        M2C_FIELD(temp_s0, s32 *, 0x5C) = 0;
    }
    func_009B5020(temp_s0);
    temp_a0_4 = M2C_FIELD(temp_s0, s32 *, 0x2CC);
    if (temp_a0_4 != 0) {
        func_002DF960(temp_a0_4);
        M2C_FIELD(temp_s0, s32 *, 0x2CC) = 0;
    }
    temp_a0_5 = M2C_FIELD(temp_s0, s32 *, 0x2C4);
    if (temp_a0_5 != 0) {
        func_0099AE80(temp_a0_5);
        M2C_FIELD(temp_s0, s32 *, 0x2C4) = 0;
    }
    temp_a0_6 = M2C_FIELD(temp_s0, s32 *, 0x2C8);
    if (temp_a0_6 != 0) {
        func_002DC1D0(temp_a0_6);
        M2C_FIELD(temp_s0, s32 *, 0x2C8) = 0;
    }
    temp_a0_7 = M2C_FIELD(temp_s0, s32 *, 0x2CC);
    if (temp_a0_7 != 0) {
        func_002DF960(temp_a0_7);
        M2C_FIELD(temp_s0, s32 *, 0x2CC) = 0;
    }
    temp_a0_8 = M2C_FIELD(temp_s0, s32 *, 0x30);
    if (temp_a0_8 != 0) {
        func_001D4E00(temp_a0_8);
        M2C_FIELD(temp_s0, s32 *, 0x30) = 0;
    }
    if (D_00A7DC08 != NULL) {
        func_0099C7C0(D_00A7DC08);
        D_00A7DC08 = NULL;
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DC00;

void func_009B1630(void) {
    s32 temp_a0_4;
    s32 var_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_s0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_v1;
    void *var_a0;

    var_a1 = 0;
    temp_s0 = D_00A7DC00;
    var_a0 = temp_s0;
    do {
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        var_a1 += 7;
        M2C_FIELD(var_a0, s32 *, 0xC) = 0;
        M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        M2C_FIELD(var_a0, s32 *, 0x14) = 0;
        M2C_FIELD(var_a0, s32 *, 0x18) = 0;
        M2C_FIELD(var_a0, s32 *, 0x1C) = 0;
        M2C_FIELD(var_a0, s32 *, 0x20) = 0;
        var_a0 += 0x1C;
    } while (var_a1 < 0x10);
    temp_v1 = (var_a1 * 4) + temp_s0;
    M2C_FIELD(temp_v1, s32 *, 8) = 0;
    M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
    temp_a0 = M2C_FIELD(temp_s0, void **, 4);
    if (temp_a0 != NULL) {
        func_001D7F10(temp_a0);
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
    }
    temp_s1 = D_00A7DC00;
    M2C_FIELD(temp_s1, s32 *, 0x16C) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x170) = 0;
    temp_a0_2 = M2C_FIELD(temp_s1, void **, 0x168);
    if (temp_a0_2 != NULL) {
        func_001D7F10(temp_a0_2);
        M2C_FIELD(temp_s1, s32 *, 0x168) = 0;
    }
    temp_s1_2 = D_00A7DC00;
    M2C_FIELD(temp_s1_2, s32 *, 0x178) = 0;
    M2C_FIELD(temp_s1_2, s32 *, 0x17C) = 0;
    temp_a0_3 = M2C_FIELD(temp_s1_2, void **, 0x174);
    if (temp_a0_3 != NULL) {
        func_001D7F10(temp_a0_3);
        M2C_FIELD(temp_s1_2, s32 *, 0x174) = 0;
    }
    temp_s1_3 = D_00A7DC00;
    temp_a0_4 = M2C_FIELD(temp_s1_3, s32 *, 0x180);
    if (temp_a0_4 != 0) {
        func_002DF960(temp_a0_4);
        M2C_FIELD(temp_s1_3, s32 *, 0x180) = 0;
    }
    temp_a0_5 = M2C_FIELD(temp_s0, void **, 0);
    if (temp_a0_5 != NULL) {
        func_001D4E00(temp_a0_5);
        M2C_FIELD(temp_s0, void **, 0) = NULL;
    }
    if (temp_s0 != NULL) {
        func_0099C7C0(temp_s0);
    }
}

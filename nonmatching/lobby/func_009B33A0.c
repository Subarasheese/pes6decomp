/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099A2F0(s32);                         /* extern */
M2C_UNK func_0099AE80(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_003EAD18;

void func_009B33A0(void) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s0;
    s32 var_s4;
    void *temp_a0;
    void *temp_a0_6;
    void *temp_s1;
    void *var_s2;
    void *var_s3;

    temp_s1 = D_003EAD18;
    var_s0 = 0;
    var_s3 = temp_s1;
    do {
        temp_a0 = M2C_FIELD(var_s3, void **, 0x10);
        if (temp_a0 != NULL) {
            func_001D7F10(temp_a0);
            M2C_FIELD(var_s3, void **, 0x10) = NULL;
        }
        var_s4 = 0;
        var_s2 = var_s3;
loop_4:
        temp_a0_2 = M2C_FIELD(var_s2, s32 *, 0x48);
        if (temp_a0_2 != 0) {
            func_0099A2F0(temp_a0_2);
            M2C_FIELD(var_s2, s32 *, 0x48) = 0;
        }
        var_s4 += 1;
        var_s2 += 4;
        if (var_s4 < 2) {
            goto loop_4;
        }
        var_s0 += 1;
        var_s3 += 0x40;
    } while (var_s0 < 6);
    temp_a0_3 = M2C_FIELD(temp_s1, s32 *, 4);
    if (temp_a0_3 != 0) {
        func_0099AE80(temp_a0_3);
        M2C_FIELD(temp_s1, s32 *, 4) = 0;
    }
    temp_a0_4 = M2C_FIELD(temp_s1, s32 *, 8);
    if (temp_a0_4 != 0) {
        func_002DC1D0(temp_a0_4);
        M2C_FIELD(temp_s1, s32 *, 8) = 0;
    }
    temp_a0_5 = M2C_FIELD(temp_s1, s32 *, 0x190);
    if (temp_a0_5 != 0) {
        func_002DF960(temp_a0_5);
        M2C_FIELD(temp_s1, s32 *, 0x190) = 0;
    }
    temp_a0_6 = M2C_FIELD(temp_s1, void **, 0);
    if (temp_a0_6 != NULL) {
        func_001D4E00(temp_a0_6);
        M2C_FIELD(temp_s1, void **, 0) = NULL;
    }
    if (temp_s1 != NULL) {
        func_0099C7C0(temp_s1);
    }
}

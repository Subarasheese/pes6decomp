/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_0099AE80(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_003EAD14;

void func_009B25C0(void) {
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_6;
    void *temp_s0;
    void *var_s1;

    temp_s0 = D_003EAD14;
    temp_a0 = M2C_FIELD(temp_s0, void **, 4);
    if (temp_a0 != NULL) {
        func_001D7F10(temp_a0);
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
    }
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    var_s2 = 0;
    var_s1 = temp_s0;
    do {
        temp_a0_2 = M2C_FIELD(var_s1, void **, 0x5C);
        if (temp_a0_2 != NULL) {
            func_001D7F10(temp_a0_2);
            M2C_FIELD(var_s1, void **, 0x5C) = NULL;
        }
        M2C_FIELD(var_s1, s32 *, 0x84) = 0;
        temp_a0_3 = M2C_FIELD(var_s1, void **, 0xC);
        if (temp_a0_3 != NULL) {
            func_001D7F10(temp_a0_3);
            M2C_FIELD(var_s1, void **, 0xC) = NULL;
        }
        var_s2 += 1;
        M2C_FIELD(var_s1, s32 *, 0x34) = 0;
        var_s1 += 4;
    } while (var_s2 < 0xA);
    temp_a0_4 = M2C_FIELD(temp_s0, s32 *, 0xAC);
    if (temp_a0_4 != 0) {
        func_0099AE80(temp_a0_4);
        M2C_FIELD(temp_s0, s32 *, 0xAC) = 0;
    }
    temp_a0_5 = M2C_FIELD(temp_s0, s32 *, 0xB0);
    if (temp_a0_5 != 0) {
        func_002DC1D0(temp_a0_5);
        M2C_FIELD(temp_s0, s32 *, 0xB0) = 0;
    }
    temp_a0_6 = M2C_FIELD(temp_s0, void **, 0);
    if (temp_a0_6 != NULL) {
        func_001D4E00(temp_a0_6);
        M2C_FIELD(temp_s0, void **, 0) = NULL;
    }
    if (temp_s0 != NULL) {
        func_0099C7C0(temp_s0);
    }
}

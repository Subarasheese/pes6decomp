/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002405D0(void *, s32, s32);
extern void *D_003EAA4C;
extern void *D_003EAA50;

void func_009345B0(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    void *sp58;
    void *sp5C;
    s32 var_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0_2;
    void *var_a0_3;

    sp5C = NULL;
    sp58 = NULL;
    func_002405D0(&sp5C, 1, 0x20);
    func_002405D0(&sp58, 1, 0x20);
    M2C_FIELD(sp5C, s32 *, 0) = arg0;
    M2C_FIELD(sp5C, s32 *, 4) = arg1;
    M2C_FIELD(sp5C, s32 *, 8) = arg2;
    M2C_FIELD(sp58, s32 *, 0) = arg0;
    M2C_FIELD(sp58, s32 *, 4) = arg1;
    M2C_FIELD(sp58, s32 *, 8) = arg2;
    if (arg3 == NULL) {
        var_a0 = -1;
        M2C_FIELD(sp5C, s32 *, 0xC) = -1;
        M2C_FIELD(sp5C, s32 *, 0x10) = -1;
    } else {
        M2C_FIELD(sp5C, s32 *, 0xC) = (s32) M2C_FIELD(arg3, s32 *, 0);
        M2C_FIELD(sp5C, s32 *, 0x10) = (s32) M2C_FIELD(arg3, s32 *, 4);
        var_a0 = M2C_FIELD(arg3, s32 *, 8);
    }
    M2C_FIELD(sp5C, s32 *, 0x14) = var_a0;
    var_a0_2 = D_003EAA4C;
    if (var_a0_2 == NULL) {
        D_003EAA4C = sp5C;
    } else {
loop_5:
        temp_v1 = M2C_FIELD(var_a0_2, void **, 0x1C);
        if (temp_v1 != NULL) {
            var_a0_2 = temp_v1;
            goto loop_5;
        }
        M2C_FIELD(sp5C, void **, 0x18) = var_a0_2;
        M2C_FIELD(var_a0_2, void **, 0x1C) = sp5C;
    }
    var_a0_3 = D_003EAA50;
    if (var_a0_3 == NULL) {
        D_003EAA50 = sp58;
        return;
    }
loop_11:
    temp_v1_2 = M2C_FIELD(var_a0_3, void **, 0x1C);
    if (temp_v1_2 != NULL) {
        var_a0_3 = temp_v1_2;
        goto loop_11;
    }
    M2C_FIELD(sp58, void **, 0x18) = var_a0_3;
    M2C_FIELD(sp58, s32 *, 0x1C) = 0;
    M2C_FIELD(var_a0_3, void **, 0x1C) = sp58;
}

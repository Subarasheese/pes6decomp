/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010D7B0(void *, s32, s32);            /* extern */
M2C_UNK func_0010D8E8(void *, s32, s32);            /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F7F48[];
extern char D_005F7F68[];
extern char D_005F7F78[];
extern void *D_011B5D30;

void func_0010D138(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 var_a0;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F7F48), 0xFB, ((void *)D_005F7F68));
    }
    if (arg1 == NULL) {
        func_001AD620(((void *)D_005F7F48), 0xFC, ((void *)D_005F7F78));
    }
    var_a0 = M2C_FIELD(arg1, s32 *, 0);
    if (var_a0 < 0) {
        M2C_FIELD(arg1, s32 *, 0) = 0;
        var_a0 = 0;
    }
    if (M2C_FIELD(arg1, s32 *, 4) < 0) {
        M2C_FIELD(arg1, s32 *, 4) = 0;
    }
    if (M2C_FIELD(arg1, s32 *, 8) < 0) {
        M2C_FIELD(arg1, s32 *, 8) = 0x20;
    }
    if (M2C_FIELD(arg1, s32 *, 0xC) < 0) {
        M2C_FIELD(arg1, s32 *, 0xC) = 0;
    }
    temp_s5 = M2C_FIELD(D_011B5D30, s32 (**)(s32), 0xE8)(var_a0);
    temp_s4 = M2C_FIELD(D_011B5D30, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 4));
    temp_s3 = M2C_FIELD(D_011B5D30, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 8));
    temp_s0 = M2C_FIELD(D_011B5D30, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 0xC));
    if (temp_s5 == M2C_FIELD(arg0, s32 *, 0x10)) {
        if ((temp_s4 == M2C_FIELD(arg0, s32 *, 0x14)) && (temp_s3 == M2C_FIELD(arg0, s32 *, 0x18))) {
            if (temp_s0 == M2C_FIELD(arg0, s32 *, 0x1C)) {
                return;
            }
            goto block_18;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        func_0010D7B0(arg0, temp_s5, temp_s4);
        func_0010D8E8(arg0, temp_s3, temp_s0);
        return;
    }
block_18:
    func_0010D7B0(arg0, temp_s5, temp_s4);
    func_0010D8E8(arg0, temp_s3, temp_s0);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void func_001D7D80(void *, s16);
s32 func_008C13D0(void *, s32, M2C_UNK);            /* extern */
void *func_008C1490(M2C_UNK, s32);                  /* extern */
M2C_UNK func_008C57D0(void *, s32, s32, M2C_UNK);   /* extern */
M2C_UNK func_008C5D40(void *, s32);                 /* extern */
M2C_UNK func_008C5DF0(void *, M2C_UNK, s32, s32);   /* extern */
extern char D_008EC670[];

void func_008E9250(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_s1;
    s32 var_a1;
    s32 var_s3;
    void *temp_s2;
    void *temp_v0;
    void *temp_v1;
    void *var_a0;
    void *var_s0;

    var_a0 = arg0;
    temp_s2 = var_a0;
    var_a1 = 0;
    do {
        temp_v1 = temp_s2 + var_a1;
        M2C_FIELD(temp_v1, s8 *, 1) = 0;
        var_a1 += 6;
        M2C_FIELD(var_a0, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_v1, s8 *, 2) = 0;
        M2C_FIELD(var_a0, s32 *, 0x40) = 0;
        M2C_FIELD(temp_v1, s8 *, 3) = 0;
        M2C_FIELD(var_a0, s32 *, 0x44) = 0;
        M2C_FIELD(temp_v1, s8 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 0x48) = 0;
        M2C_FIELD(temp_v1, s8 *, 5) = 0;
        M2C_FIELD(var_a0, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_v1, s8 *, 6) = 0;
        M2C_FIELD(var_a0, s32 *, 0x50) = 0;
        var_a0 += 0x18;
    } while (var_a1 < 0xC);
    M2C_FIELD(temp_s2, s32 *, 0x30) = 0;
    M2C_FIELD(temp_s2, void **, 0x38) = NULL;
    M2C_FIELD(temp_s2, s32 *, 0x34) = 0;
    func_008C5D40(temp_s2 + 0x10, var_a1);
    func_008C5DF0(temp_s2 + 0x10, 8, arg2, arg1);
    if (M2C_FIELD(temp_s2, void **, 0x38) == NULL) {
        temp_v0 = func_008C1490(0x1F, arg1);
        func_001D7D80(temp_v0, 2);
        M2C_FIELD(temp_s2, void **, 0x38) = temp_v0;
    }
    func_008C57D0(temp_s2 + 0x10, arg1, func_001F08B0(0x3F0035), 1);
    if (M2C_FIELD(temp_s2, void **, 0x38) != NULL) {
        var_s3 = 0;
        var_s1 = ((void *)D_008EC670);
        var_s0 = temp_s2;
        do {
            var_s3 += 1;
            M2C_FIELD(var_s0, s32 *, 0x3C) = func_008C13D0(M2C_FIELD(temp_s2, void **, 0x38), *var_s1, 0);
            var_s1 += 4;
            var_s0 += 4;
        } while (var_s3 < 0xC);
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u64 func_00147CE0(s32);
void *func_001454C0(s32);                           /* extern */
extern char D_0050AE30[];
extern M2C_UNK *D_0050AE3C;
extern char D_0050AE40[];

u64 func_00149A80(s32 arg0) {
    M2C_UNK *temp_a0;
    M2C_UNK *temp_a1;
    M2C_UNK *var_a3;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v1;
    s32 var_v1_2;
    u64 var_v0;
    u8 temp_a0_2;
    void *temp_v0;

    var_v0 = func_00147CE0(arg0);
    if (var_v0 == 0) {
        if (arg0 == 0) {
            goto block_2;
        }
        var_a3 = D_0050AE3C;
        (*(s32 *)D_0050AE40) = arg0;
loop_16:
        if (M2C_FIELD(var_a3, s32 *, 0x10) != arg0) {
            var_a3 = M2C_FIELD(var_a3, M2C_UNK **, 0xC);
            goto loop_16;
        }
        if (var_a3 != ((void *)D_0050AE30)) {
            temp_a1 = M2C_FIELD(var_a3, M2C_UNK **, 8);
            if (temp_a1 != ((void *)D_0050AE30)) {
                temp_a0 = M2C_FIELD(var_a3, M2C_UNK **, 0xC);
                M2C_FIELD(temp_a1, M2C_UNK **, 0xC) = temp_a0;
                M2C_FIELD(temp_a0, M2C_UNK **, 8) = temp_a1;
                M2C_FIELD(var_a3, M2C_UNK **, 0xC) = (M2C_UNK *) D_0050AE3C;
                M2C_FIELD(M2C_FIELD(var_a3, M2C_UNK **, 0xC), M2C_UNK **, 8) = var_a3;
                M2C_FIELD(var_a3, M2C_UNK **, 8) = ((void *)D_0050AE30);
                D_0050AE3C = var_a3;
            }
        } else {
block_2:
            var_a3 = NULL;
        }
        if (var_a3 != NULL) {
            temp_s0 = M2C_FIELD(var_a3, s16 *, 0x14) << 0xB;
            temp_v0 = func_001454C0(arg0);
            temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x18);
            var_v1_2 = (s32) temp_a0_2 >> 3;
            if ((s32) temp_a0_2 < 0) {
                var_v1_2 = (s32) (temp_a0_2 + 7) >> 3;
            }
            temp_v1 = var_v1_2 + 1;
            var_a0 = temp_v1 >> 1;
            if (temp_v1 < 0) {
                var_a0 = (s32) (temp_v1 + 1) >> 1;
            }
            var_v1 = temp_s0 >> 6;
            if (temp_s0 < 0) {
                var_v1 = (s32) (temp_s0 + 0x3F) >> 6;
            }
            temp_a1_2 = var_a0 + 1;
            var_a0_2 = temp_a1_2 >> 1;
            if (temp_a1_2 < 0) {
                var_a0_2 = (s32) (temp_a1_2 + 1) >> 1;
            }
            temp_a1_3 = var_a0_2 + 1;
            var_a0_3 = temp_a1_3 >> 1;
            if (temp_a1_3 < 0) {
                var_a0_3 = (s32) (temp_a1_3 + 1) >> 1;
            }
            return var_v0 | ((s64) (((var_v1 + M2C_FIELD(temp_v0, u16 *, 0x36)) | (var_a0 << 0xE)) << 0x20) >> 0x20) | (((s64) (((var_v1 + M2C_FIELD(temp_v0, u16 *, 0x38)) | (var_a0_2 << 0xE)) << 0x20) >> 0x20) << 0x14) | (((s64) (((var_v1 + M2C_FIELD(temp_v0, u16 *, 0x3A)) | (var_a0_3 << 0xE)) << 0x20) >> 0x20) << 0x28);
        }
        var_v0 = 0;
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
extern void * Pes6Player_GetParams(int);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
void *func_00970770(s32);                           /* extern */
extern s32 D_003EADCC;

void func_00AF7080(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s4;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;

    temp_s0 = D_003EADCC;
    if (temp_s0 != 0) {
        var_s4 = 1;
        do {
            temp_s3 = Pes6Player_GetParams(var_s4);
            temp_s2 = func_00970770(var_s4);
            if ((temp_s3 != NULL) && (temp_s2 != NULL)) {
                temp_s1 = temp_s0 + ((var_s4 & 0xFFFF) * 0x48);
                func_001C4730(temp_s1, temp_s3, 0x48);
                func_001C4730(temp_s1, temp_s2, 0x24);
                M2C_FIELD(temp_s1, u8 *, 1) = (u8) ((M2C_FIELD(temp_s1, u8 *, 1) & ~0xF0) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 1) << 0x38) >> 0x3C) & 0xF) * 0x10));
                M2C_FIELD(temp_s1, u8 *, 2) = (u8) ((M2C_FIELD(temp_s1, u8 *, 2) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 2) << 0x38) >> 0x3F) & 1) << 7));
                temp_a0 = var_s4 & 0xFFFF;
                M2C_FIELD(temp_s1, u8 *, 3) = (u8) ((M2C_FIELD(temp_s1, u8 *, 3) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 3) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 7) = (u8) ((M2C_FIELD(temp_s1, u8 *, 7) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 7) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 4) = (u8) ((M2C_FIELD(temp_s1, u8 *, 4) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 4) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 5) = (u8) ((M2C_FIELD(temp_s1, u8 *, 5) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 5) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 6) = (u8) ((M2C_FIELD(temp_s1, u8 *, 6) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 6) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 8) = (u8) ((M2C_FIELD(temp_s1, u8 *, 8) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 8) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 9) = (u8) ((M2C_FIELD(temp_s1, u8 *, 9) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 9) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0xA) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0xA) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0xA) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0xD) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0xD) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0xD) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0xB) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0xB) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0xB) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 7) = (u8) ((M2C_FIELD(temp_s1, u8 *, 7) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 7) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0xC) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0xC) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0xC) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x1D) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1D) & ~0xC0) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1D) << 0x38) >> 0x3E) & 3) << 6));
                M2C_FIELD(temp_s1, u8 *, 0) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0) & ~1) | (M2C_FIELD(temp_s3, u8 *, 0) & 1));
                M2C_FIELD(temp_s1, u8 *, 0x1C) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1C) & ~0xC0) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1C) << 0x38) >> 0x3E) & 3) << 6));
                M2C_FIELD(temp_s1, u8 *, 0) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0) & ~0x1E) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0) << 0x3B) >> 0x3C) & 0xF) * 2));
                M2C_FIELD(temp_s1, u8 *, 0) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0) & ~0xE0) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0) << 0x38) >> 0x3D) & 7) << 5));
                M2C_FIELD(temp_s1, u8 *, 0x1F) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1F) & ~0x7F) | (M2C_FIELD(temp_s3, u8 *, 0x1F) & 0x7F));
                M2C_FIELD(temp_s1, u8 *, 0x20) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x20) & ~0x7F) | (M2C_FIELD(temp_s3, u8 *, 0x20) & 0x7F));
                M2C_FIELD(temp_s1, u8 *, 1) = (u8) ((M2C_FIELD(temp_s1, u8 *, 1) & ~3) | (M2C_FIELD(temp_s3, u8 *, 1) & 3));
                M2C_FIELD(temp_s1, u8 *, 1) = (u8) ((M2C_FIELD(temp_s1, u8 *, 1) & ~0xC) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 1) << 0x3C) >> 0x3E) & 3) * 4));
                M2C_FIELD(temp_s1, u8 *, 0x10) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x10) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x10) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x18) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x18) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x18) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x12) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x12) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x12) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x13) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x13) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x13) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x16) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x16) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x14) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x14) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x14) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x15) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x15) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x15) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0xE) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0xE) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0xE) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x17) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x17) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x20) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x20) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x20) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x1E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1E) & ~1) | (M2C_FIELD(temp_s3, u8 *, 0x1E) & 1));
                M2C_FIELD(temp_s1, u8 *, 0x1E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1E) & ~4) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1E) << 0x3D) >> 0x3F) & 1) * 4));
                M2C_FIELD(temp_s1, u8 *, 0x1E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1E) & ~0x20) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1E) << 0x3A) >> 0x3F) & 1) << 5));
                M2C_FIELD(temp_s1, u8 *, 0x1E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1E) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1E) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x1E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1E) & ~0x40) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1E) << 0x39) >> 0x3F) & 1) << 6));
                M2C_FIELD(temp_s1, u8 *, 0x1E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1E) & ~2) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1E) << 0x3E) >> 0x3F) & 1) * 2));
                M2C_FIELD(temp_s1, u8 *, 0x1E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1E) & ~8) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1E) << 0x3C) >> 0x3F) & 1) * 8));
                M2C_FIELD(temp_s1, u8 *, 0x11) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x11) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x11) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x19) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x19) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x19) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x1B) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1B) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1B) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0xF) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0xF) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0xF) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x1E) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1E) & ~0x10) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1E) << 0x3B) >> 0x3F) & 1) * 0x10));
                M2C_FIELD(temp_s1, u8 *, 0x1A) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1A) & ~0x80) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1A) << 0x38) >> 0x3F) & 1) << 7));
                M2C_FIELD(temp_s1, u8 *, 0x1C) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x1C) & ~0xC0) | ((((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 0x1C) << 0x38) >> 0x3E) & 3) << 6));
                M2C_FIELD(temp_s1, u8 *, 0x3D) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x3D) & ~0x3E) | ((((u64) ((s64) M2C_FIELD(temp_s2, u8 *, 0x3D) << 0x3A) >> 0x3B) & 0x1F) * 2));
                if ((temp_a0 >= 0x11F5) && (temp_a0 < 0x12A6)) {
                    M2C_FIELD(temp_s1, u8 *, 0x3D) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x3D) & ~0x3E) | 4);
                }
            }
            var_s4 = (var_s4 + 1) & 0xFFFF;
        } while (var_s4 < 0x12B0);
        temp_v0 = func_00228A80();
        if (temp_v0 != NULL) {
            var_s2 = 0;
            do {
                temp_v1 = var_s2 & 0xFF;
                func_001C4730(temp_s0 + ((temp_v1 + 0x1388) * 0x48), temp_v0 + (temp_v1 * 0x48) + 0x10BBC, 0x48);
                var_s2 = (var_s2 + 1) & 0xFF;
            } while (var_s2 < 0x25);
        }
    }
}

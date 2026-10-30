/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
M2C_UNK func_00220240(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00937C00(s32);                         /* extern */
extern char D_009C9700[];

void func_0093B620(void) {
    s32 temp_a1;
    s32 var_s0;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;

    var_s0 = 1;
    do {
        temp_v0 = func_00228A80();
        if (temp_v0 != NULL) {
            func_00937C00(var_s0);
            temp_a1 = var_s0 & 0xFFFF;
            temp_v0_2 = temp_v0 + (temp_a1 * 0x1C);
            temp_a1_2 = ((void *)D_009C9700) + (temp_a1 * 0x7C);
            M2C_FIELD(temp_a1_2, u8 *, 0x36) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x36) & ~0x7F) | (M2C_FIELD(temp_v0_2, u8 *, 0x11624) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x37) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x37) & ~0x7F) | (((u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0x11624) << 0x32) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x38) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x38) & ~0x7F) | (((u64) ((s64) (s32) M2C_FIELD(temp_v0_2, u8 *, 0x11624) << 0x2B) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x39) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x39) & ~0x7F) | (((u64) ((s64) M2C_FIELD(temp_v0_2, u16 *, 0x11626) << 0x34) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x3A) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x3A) & ~0x7F) | (M2C_FIELD(temp_v0_2, u8 *, 0x11628) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x3B) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x3B) & ~0x7F) | (((u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0x11628) << 0x32) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x3C) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x3C) & ~0x7F) | (((u64) ((s64) (s32) M2C_FIELD(temp_v0_2, u8 *, 0x11628) << 0x2B) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x3D) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x3D) & ~0x7F) | (((u64) ((s64) M2C_FIELD(temp_v0_2, u16 *, 0x1162A) << 0x34) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x51) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x51) & ~7) | (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1162B) << 0x39) >> 0x3D) & 7));
            M2C_FIELD(temp_a1_2, u8 *, 0x3E) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x3E) & ~0x7F) | (M2C_FIELD(temp_v0_2, u8 *, 0x1162C) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x3F) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x3F) & ~0x7F) | (((u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0x1162C) << 0x32) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x40) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x40) & ~0x7F) | (((u64) ((s64) (s32) M2C_FIELD(temp_v0_2, u8 *, 0x1162C) << 0x2B) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x41) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x41) & ~0x7F) | (((u64) ((s64) M2C_FIELD(temp_v0_2, u16 *, 0x1162E) << 0x34) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x51) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x51) & ~0x38) | ((((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1162F) << 0x39) >> 0x3D) & 7) * 8));
            M2C_FIELD(temp_a1_2, u8 *, 0x42) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x42) & ~0x7F) | (M2C_FIELD(temp_v0_2, u8 *, 0x11630) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x43) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x43) & ~0x7F) | (((u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0x11630) << 0x32) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x44) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x44) & ~0x7F) | (((u64) ((s64) (s32) M2C_FIELD(temp_v0_2, u8 *, 0x11630) << 0x2B) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x45) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x45) & ~0x7F) | (((u64) ((s64) M2C_FIELD(temp_v0_2, u16 *, 0x11632) << 0x34) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x50) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x50) & ~0x38) | ((((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x11633) << 0x39) >> 0x3D) & 7) * 8));
            M2C_FIELD(temp_a1_2, u8 *, 0x46) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x46) & ~0x7F) | (M2C_FIELD(temp_v0_2, u8 *, 0x11634) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x47) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x47) & ~0x7F) | (((u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0x11634) << 0x32) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x48) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x48) & ~0x7F) | (((u64) ((s64) (s32) M2C_FIELD(temp_v0_2, u8 *, 0x11634) << 0x2B) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x49) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x49) & ~0x7F) | (((u64) ((s64) M2C_FIELD(temp_v0_2, u16 *, 0x11636) << 0x34) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x4A) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x4A) & ~0x7F) | (M2C_FIELD(temp_v0_2, u8 *, 0x11638) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x4C) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x4C) & ~0x7F) | (((u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0x11638) << 0x32) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x4D) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x4D) & ~0x7F) | (((u64) ((s64) (s32) M2C_FIELD(temp_v0_2, u8 *, 0x11638) << 0x2B) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x4E) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x4E) & ~0x7F) | (((u64) ((s64) M2C_FIELD(temp_v0_2, u16 *, 0x1163A) << 0x34) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x4F) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x4F) & ~0x7F) | (M2C_FIELD(temp_v0_2, u8 *, 0x1163C) & 0x7F));
            M2C_FIELD(temp_a1_2, u8 *, 0x4B) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x4B) & ~0x7F) | (((u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0x1163C) << 0x32) >> 0x39) & 0x7F));
            M2C_FIELD(temp_a1_2, s8 *, 0x56) = (s8) ((u64) ((s64) (s32) M2C_FIELD(temp_v0_2, u8 *, 0x1163C) << 0x2A) >> 0x38);
            M2C_FIELD(temp_a1_2, u8 *, 0x71) = (u8) ((M2C_FIELD(temp_a1_2, u8 *, 0x71) & ~0x3E) | (((((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1163B) << 0x38) >> 0x3C) + (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x11637) << 0x38) >> 0x3C) * 0xA)) & 0x1F) * 2));
        }
        var_s0 = (var_s0 + 1) & 0xFFFF;
    } while (var_s0 < 0x11F5);
    func_00220240(((void *)D_009C9700), 2);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE5660[];
extern void *D_00CE5668;

void func_00BD3350(void *arg0, void *arg1) {
    s32 var_s0;
    void *var_a5;

    M2C_FIELD(arg0, u8 *, 0x32) = (u8) ((M2C_FIELD(arg0, u8 *, 0x32) & ~3) | (M2C_FIELD(arg1, s32 *, 0xC) & 3));
    M2C_FIELD(arg0, u8 *, 0x24) = (u8) ((M2C_FIELD(arg0, u8 *, 0x24) & ~0xC0) | ((M2C_FIELD(arg1, s32 *, 0x10) & 3) << 6));
    M2C_FIELD(arg0, u8 *, 0x26) = (u8) ((M2C_FIELD(arg0, u8 *, 0x26) & ~0xF0) | (((M2C_FIELD(arg1, s32 *, 0x14) + 7) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x27) = (u8) ((M2C_FIELD(arg0, u8 *, 0x27) & ~0xF) | ((M2C_FIELD(arg1, s32 *, 0x18) + 7) & 0xF));
    M2C_FIELD(arg0, u16 *, 0x30) = (u16) ((M2C_FIELD(arg0, u16 *, 0x30) & 0xFFFF001F) | ((M2C_FIELD(arg1, s32 *, 0x1C) & 0x7FF) << 5));
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2A) & ~0xC0) | ((M2C_FIELD(arg1, s32 *, 0x20) & 3) << 6));
    M2C_FIELD(arg0, u8 *, 0x29) = (u8) ((M2C_FIELD(arg0, u8 *, 0x29) & ~0x78) | ((M2C_FIELD(arg1, s32 *, 0x24) & 0xF) * 8));
    M2C_FIELD(arg0, u8 *, 0x24) = (u8) ((M2C_FIELD(arg0, u8 *, 0x24) & ~0xC0) | ((M2C_FIELD(arg1, s32 *, 0x28) & 3) << 6));
    M2C_FIELD(arg0, u8 *, 0x26) = (u8) ((M2C_FIELD(arg0, u8 *, 0x26) & ~0xF0) | (((M2C_FIELD(arg1, s32 *, 0x2C) + 7) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x27) = (u8) ((M2C_FIELD(arg0, u8 *, 0x27) & ~0xF) | ((M2C_FIELD(arg1, s32 *, 0x30) + 7) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x47) = (u8) ((M2C_FIELD(arg0, u8 *, 0x47) & ~0xE0) | (((M2C_FIELD(arg1, s32 *, 0x34) + 3) & 7) << 5));
    M2C_FIELD(arg0, u8 *, 0x40) = (u8) ((M2C_FIELD(arg0, u8 *, 0x40) & ~0x1F) | (M2C_FIELD(arg1, s32 *, 0x3C) & 0x1F));
    M2C_FIELD(arg0, u16 *, 0x42) = (u16) ((M2C_FIELD(arg0, u16 *, 0x42) & ~0x380) | (((M2C_FIELD(arg1, s32 *, 0x40) + 3) & 7) << 7));
    M2C_FIELD(arg0, u16 *, 0x42) = (s8) (((u8) M2C_FIELD(arg0, u16 *, 0x42) & ~0xE) | (((M2C_FIELD(arg1, s32 *, 0x44) + 3) & 7) * 2));
    M2C_FIELD(arg0, u16 *, 0x42) = (s8) (((u8) M2C_FIELD(arg0, u16 *, 0x42) & ~0x70) | (((M2C_FIELD(arg1, s32 *, 0x48) + 3) & 7) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x3F) = (u8) ((M2C_FIELD(arg0, u8 *, 0x3F) & ~0xF8) | ((M2C_FIELD(arg1, s32 *, 0x50) & 0x1F) * 8));
    M2C_FIELD(arg0, u8 *, 0x40) = (u8) ((M2C_FIELD(arg0, u8 *, 0x40) & ~0xE0) | (((M2C_FIELD(arg1, s32 *, 0x54) + 3) & 7) << 5));
    M2C_FIELD(arg0, u8 *, 0x41) = (u8) ((M2C_FIELD(arg0, u8 *, 0x41) & ~7) | ((M2C_FIELD(arg1, s32 *, 0x58) + 3) & 7));
    M2C_FIELD(arg0, u8 *, 0x41) = (u8) ((M2C_FIELD(arg0, u8 *, 0x41) & ~0x38) | (((M2C_FIELD(arg1, s32 *, 0x5C) + 3) & 7) * 8));
    M2C_FIELD(arg0, u8 *, 0x40) = (s32) (((s32) M2C_FIELD(arg0, u8 *, 0x40) & 0xFFFE3FFF) | (((M2C_FIELD(arg1, s32 *, 0x60) + 3) & 7) << 0xE));
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2A) & ~0xC0) | ((M2C_FIELD(arg1, s32 *, 0x64) & 3) << 6));
    M2C_FIELD(arg0, u8 *, 0x29) = (u8) ((M2C_FIELD(arg0, u8 *, 0x29) & ~0x78) | ((M2C_FIELD(arg1, s32 *, 0x68) & 0xF) * 8));
    M2C_FIELD(arg0, u8 *, 0x45) = (u8) ((M2C_FIELD(arg0, u8 *, 0x45) & ~0x38) | ((M2C_FIELD(arg1, s32 *, 0x70) & 7) * 8));
    M2C_FIELD(arg0, u8 *, 0x46) = (u8) ((M2C_FIELD(arg0, u8 *, 0x46) & ~0xE) | (((M2C_FIELD(arg1, s32 *, 0x74) + 3) & 7) * 2));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) ((M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFE3FFF) | (((M2C_FIELD(arg1, s32 *, 0x78) + 3) & 7) << 0xE));
    M2C_FIELD(arg0, u8 *, 0x43) = (u8) ((M2C_FIELD(arg0, u8 *, 0x43) & ~0x1C) | ((M2C_FIELD(arg1, s32 *, 0x80) & 7) * 4));
    M2C_FIELD(arg0, u8 *, 0x43) = (u8) ((M2C_FIELD(arg0, u8 *, 0x43) & ~0xE0) | (((M2C_FIELD(arg1, s32 *, 0x84) + 3) & 7) << 5));
    M2C_FIELD(arg0, s32 *, 0x44) = (s8) (((u8) M2C_FIELD(arg0, s32 *, 0x44) & ~0x1F) | (M2C_FIELD(arg1, s32 *, 0x8C) & 0x1F));
    M2C_FIELD(arg0, u8 *, 0x45) = (u8) ((M2C_FIELD(arg0, u8 *, 0x45) & ~7) | ((M2C_FIELD(arg1, s32 *, 0x90) + 3) & 7));
    M2C_FIELD(arg0, s32 *, 0x44) = (s8) (((u8) M2C_FIELD(arg0, s32 *, 0x44) & ~0xE0) | (((M2C_FIELD(arg1, s32 *, 0x94) + 3) & 7) << 5));
    M2C_FIELD(arg0, u8 *, 0x46) = (u8) ((M2C_FIELD(arg0, u8 *, 0x46) & ~0x70) | ((M2C_FIELD(arg1, s32 *, 0x9C) & 7) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x46) = (s16) (((u16) M2C_FIELD(arg0, u8 *, 0x46) & ~0x380) | (((M2C_FIELD(arg1, s32 *, 0xA0) + 3) & 7) << 7));
    M2C_FIELD(arg0, u8 *, 0x47) = (u8) ((M2C_FIELD(arg0, u8 *, 0x47) & ~0x1C) | (((M2C_FIELD(arg1, s32 *, 0xA4) + 3) & 7) * 4));
    var_s0 = 0;
    if ((*(s32 *)D_00CE5660) > 0) {
        var_a5 = D_00CE5668;
loop_2:
        if ((M2C_FIELD(arg1, s32 *, 0xBC) == M2C_FIELD(var_a5, s8 *, 0)) && (M2C_FIELD(arg1, s32 *, 0xC0) == M2C_FIELD(var_a5, s16 *, 2)) && (M2C_FIELD(arg1, s32 *, 0xC4) == M2C_FIELD(var_a5, s8 *, 4)) && (M2C_FIELD(arg1, s32 *, 0xC8) == M2C_FIELD(var_a5, s8 *, 5)) && (M2C_FIELD(arg1, s32 *, 0xCC) == M2C_FIELD(var_a5, s8 *, 6)) && (M2C_FIELD(arg1, s32 *, 0xF0) == M2C_FIELD(var_a5, s8 *, 7))) {

        } else {
            var_s0 += 1;
            var_a5 += 8;
            if (var_s0 >= (*(s32 *)D_00CE5660)) {
                goto block_10;
            }
            goto loop_2;
        }
    } else {
block_10:
        var_s0 = 0;
    }
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) ((M2C_FIELD(arg0, u16 *, 0x28) & ~0x7FF) | (var_s0 & 0x7FF));
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2A) & ~0x3F) | (M2C_FIELD(arg1, s32 *, 0xD8) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x32) = (u8) ((M2C_FIELD(arg0, u8 *, 0x32) & ~0xFC) | ((M2C_FIELD(arg1, s32 *, 0xE0) & 0x3F) * 4));
    M2C_FIELD(arg0, u8 *, 0x33) = (u8) ((M2C_FIELD(arg0, u8 *, 0x33) & ~0x3F) | (M2C_FIELD(arg1, s32 *, 0xE4) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) ((M2C_FIELD(arg0, u8 *, 0x34) & ~0x3F) | (M2C_FIELD(arg1, s32 *, 0xE8) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) ((M2C_FIELD(arg0, u8 *, 0x39) & ~0x70) | ((M2C_FIELD(arg1, s32 *, 0xF4) & 7) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x2B) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2B) & ~0x7F) | (M2C_FIELD(arg1, s32 *, 0x108) & 0x7F));
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2C) & ~0x3F) | (M2C_FIELD(arg1, s32 *, 0x10C) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x24) = (u8) ((M2C_FIELD(arg0, u8 *, 0x24) & ~0x3F) | (M2C_FIELD(arg1, s32 *, 0x124) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x25) = (u8) ((M2C_FIELD(arg0, u8 *, 0x25) & ~0x7F) | (M2C_FIELD(arg1, s32 *, 0x128) & 0x7F));
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) ((M2C_FIELD(arg0, u8 *, 0x35) & ~0xF) | ((M2C_FIELD(arg1, s32 *, 0x130) + 7) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x27) = (u8) ((M2C_FIELD(arg0, u8 *, 0x27) & ~0xF0) | (((M2C_FIELD(arg1, s32 *, 0x134) + 7) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x38) = (u8) ((M2C_FIELD(arg0, u8 *, 0x38) & ~0xF0) | (((M2C_FIELD(arg1, s32 *, 0x138) + 7) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) ((M2C_FIELD(arg0, u8 *, 0x39) & ~0xF) | ((M2C_FIELD(arg1, s32 *, 0x13C) + 7) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) ((M2C_FIELD(arg0, u8 *, 0x35) & ~0xF0) | (((M2C_FIELD(arg1, s32 *, 0x140) + 7) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) ((M2C_FIELD(arg0, u8 *, 0x36) & ~0xF0) | (((M2C_FIELD(arg1, s32 *, 0x144) + 7) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) ((M2C_FIELD(arg0, u8 *, 0x36) & ~0xF) | ((M2C_FIELD(arg1, s32 *, 0x148) + 7) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) ((M2C_FIELD(arg0, u8 *, 0x37) & ~0xF) | ((M2C_FIELD(arg1, s32 *, 0x14C) + 7) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) ((M2C_FIELD(arg0, u8 *, 0x37) & ~0xF0) | (((M2C_FIELD(arg1, s32 *, 0x150) + 7) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x38) = (u8) ((M2C_FIELD(arg0, u8 *, 0x38) & ~0xF) | ((M2C_FIELD(arg1, s32 *, 0x154) + 7) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2D) & ~0xF0) | ((M2C_FIELD(arg1, s32 *, 0x160) & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x2F) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2F) & ~0x60) | ((M2C_FIELD(arg1, s32 *, 0x164) & 3) << 5));
    M2C_FIELD(arg0, u8 *, 0x29) = (u8) ((M2C_FIELD(arg0, u8 *, 0x29) & ~0x80) | ((M2C_FIELD(arg1, s32 *, 0x170) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2D) & ~0xC) | ((M2C_FIELD(arg1, s32 *, 0x178) & 3) * 4));
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2E) & ~7) | (M2C_FIELD(arg1, s32 *, 0x17C) & 7));
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2E) & ~0x18) | ((M2C_FIELD(arg1, s32 *, 0x184) & 3) * 8));
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2E) & ~0xE0) | ((M2C_FIELD(arg1, s32 *, 0x188) & 7) << 5));
    M2C_FIELD(arg0, u8 *, 0x2F) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2F) & ~3) | (M2C_FIELD(arg1, s32 *, 0x190) & 3));
    M2C_FIELD(arg0, u8 *, 0x2F) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2F) & ~0x1C) | ((M2C_FIELD(arg1, s32 *, 0x194) & 7) * 4));
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) ((M2C_FIELD(arg0, u8 *, 0x34) & ~0x80) | ((M2C_FIELD(arg1, s32 *, 0x198) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x33) = (u8) ((M2C_FIELD(arg0, u8 *, 0x33) & ~0xC0) | ((M2C_FIELD(arg1, s32 *, 0x19C) & 3) << 6));
    M2C_FIELD(arg0, u8 *, 0x25) = (u8) ((M2C_FIELD(arg0, u8 *, 0x25) & ~0x80) | ((M2C_FIELD(arg1, s32 *, 0x1A0) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2C) & ~0xC0) | ((M2C_FIELD(arg1, s32 *, 0x1A4) & 3) << 6));
    M2C_FIELD(arg0, u8 *, 0x2F) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2F) & ~0x80) | ((M2C_FIELD(arg1, s32 *, 0x1AC) & 1) << 7));
    M2C_FIELD(arg0, u16 *, 0x30) = (s8) (((u8) M2C_FIELD(arg0, u16 *, 0x30) & ~7) | (M2C_FIELD(arg1, s32 *, 0x1B0) & 7));
    M2C_FIELD(arg0, u16 *, 0x30) = (s8) (((u8) M2C_FIELD(arg0, u16 *, 0x30) & ~0x18) | ((M2C_FIELD(arg1, s32 *, 0x1B4) & 3) * 8));
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) ((M2C_FIELD(arg0, u8 *, 0x34) & ~0x40) | ((M2C_FIELD(arg1, s32 *, 0x1B8) & 1) << 6));
    M2C_FIELD(arg0, u8 *, 0x2B) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2B) & ~0x80) | ((M2C_FIELD(arg1, s32 *, 0xFC) & 1) << 7));
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x3A) & ~0x38) | ((M2C_FIELD(arg1, s32 *, 0x100) & 7) * 8));
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2D) & ~3) | (M2C_FIELD(arg1, s32 *, 0x114) & 3));
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x3A) & ~7) | (M2C_FIELD(arg1, s32 *, 0x118) & 7));
}

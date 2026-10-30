/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00BC8CB0(u32);
M2C_UNK func_009A3340();                            /* extern */
M2C_UNK func_00BC6930(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern s32 D_003E758C;
extern char D_00591C09[];
extern char D_005A3030[];
extern char D_005A3032[];
extern char D_00CBAA00[];

void func_009B5820(void) {
    s32 temp_a5;
    s32 temp_a7;
    s32 temp_v0;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_v0;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t1;
    void *temp_t1_10;
    void *temp_t1_11;
    void *temp_t1_12;
    void *temp_t1_13;
    void *temp_t1_14;
    void *temp_t1_2;
    void *temp_t1_3;
    void *temp_t1_4;
    void *temp_t1_5;
    void *temp_t1_6;
    void *temp_t1_7;
    void *temp_t1_8;
    void *temp_t1_9;
    void *temp_v0_2;

    if ((*(u8 *)D_00591C09) != 0xA) {
        var_a6 = 0;
        var_a4 = 0;
        do {
            var_a5 = 0;
            var_v0 = 0;
            M2C_FIELD((D_003E758C + var_a4), s16 *, 0x348) = 0x7FFF;
            M2C_FIELD((D_003E758C + var_a4), s16 *, 0x350) = 0;
            M2C_FIELD((D_003E758C + var_a4), s16 *, 0x352) = 0;
loop_3:
            var_a5 += 7;
            temp_t1 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1, u16 *, 0x14) = (u16) ((M2C_FIELD(temp_t1, u16 *, 0x14) & ~0x7FF) | 0x112);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0x1C) = 0;
            temp_t1_2 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_2, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_t1_2, s32 *, 0x14) & 0xFF001FFF) | 0x224000);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0x20) = 0;
            temp_t1_3 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_3, u16 *, 0x38) = (u16) ((M2C_FIELD(temp_t1_3, u16 *, 0x38) & ~0x7FF) | 0x112);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0x40) = 0;
            temp_t1_4 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_4, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_t1_4, s32 *, 0x38) & 0xFF001FFF) | 0x224000);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0x44) = 0;
            temp_t1_5 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_5, u16 *, 0x5C) = (u16) ((M2C_FIELD(temp_t1_5, u16 *, 0x5C) & ~0x7FF) | 0x112);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0x64) = 0;
            temp_t1_6 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_6, s32 *, 0x5C) = (s32) ((M2C_FIELD(temp_t1_6, s32 *, 0x5C) & 0xFF001FFF) | 0x224000);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0x68) = 0;
            temp_t1_7 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_7, u16 *, 0x80) = (u16) ((M2C_FIELD(temp_t1_7, u16 *, 0x80) & ~0x7FF) | 0x112);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0x88) = 0;
            temp_t1_8 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_8, s32 *, 0x80) = (s32) ((M2C_FIELD(temp_t1_8, s32 *, 0x80) & 0xFF001FFF) | 0x224000);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0x8C) = 0;
            temp_t1_9 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_9, u16 *, 0xA4) = (u16) ((M2C_FIELD(temp_t1_9, u16 *, 0xA4) & ~0x7FF) | 0x112);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0xAC) = 0;
            temp_t1_10 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_10, s32 *, 0xA4) = (s32) ((M2C_FIELD(temp_t1_10, s32 *, 0xA4) & 0xFF001FFF) | 0x224000);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0xB0) = 0;
            temp_t1_11 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_11, u16 *, 0xC8) = (u16) ((M2C_FIELD(temp_t1_11, u16 *, 0xC8) & ~0x7FF) | 0x112);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0xD0) = 0;
            temp_t1_12 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_12, s32 *, 0xC8) = (s32) ((M2C_FIELD(temp_t1_12, s32 *, 0xC8) & 0xFF001FFF) | 0x224000);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0xD4) = 0;
            temp_t1_13 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_13, u16 *, 0xEC) = (u16) ((M2C_FIELD(temp_t1_13, u16 *, 0xEC) & ~0x7FF) | 0x112);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0xF4) = 0;
            temp_t1_14 = D_003E758C + var_a4 + var_v0;
            M2C_FIELD(temp_t1_14, s32 *, 0xEC) = (s32) ((M2C_FIELD(temp_t1_14, s32 *, 0xEC) & 0xFF001FFF) | 0x224000);
            M2C_FIELD((var_a4 + D_003E758C + var_v0), s32 *, 0xF8) = 0;
            var_v0 += 0xFC;
            if (var_a5 < 0x10) {
                goto loop_3;
            }
            var_a6 += 1;
            temp_v0 = var_a5 * 0x24;
            temp_a5 = var_a6 < 0x12C;
            temp_t0 = D_003E758C + var_a4 + temp_v0;
            M2C_FIELD(temp_t0, u16 *, 0x14) = (u16) ((M2C_FIELD(temp_t0, u16 *, 0x14) & ~0x7FF) | 0x112);
            M2C_FIELD((D_003E758C + var_a4 + temp_v0), f32 *, 0x1C) = 0.0f;
            temp_t0_2 = D_003E758C + var_a4 + temp_v0;
            M2C_FIELD(temp_t0_2, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_t0_2, s32 *, 0x14) & 0xFF001FFF) | 0x224000);
            M2C_FIELD((D_003E758C + var_a4 + temp_v0), f32 *, 0x20) = 0.0f;
            temp_t0_3 = D_003E758C + var_a4 + temp_v0;
            M2C_FIELD(temp_t0_3, u16 *, 0x38) = (u16) ((M2C_FIELD(temp_t0_3, u16 *, 0x38) & ~0x7FF) | 0x112);
            M2C_FIELD((D_003E758C + var_a4 + temp_v0), f32 *, 0x40) = 0.0f;
            temp_t0_4 = D_003E758C + var_a4 + temp_v0;
            M2C_FIELD(temp_t0_4, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_t0_4, s32 *, 0x38) & 0xFF001FFF) | 0x224000);
            temp_a7 = D_003E758C + var_a4;
            temp_v0_2 = temp_a7 + temp_v0;
            var_a4 += 0x354;
            M2C_FIELD(temp_v0_2, f32 *, 0x44) = 0.0f;
        } while (temp_a5 != 0);
        (*(s16 *)D_005A3030) = 0;
        (*(s8 *)D_005A3032) = 0;
        (*(s16 *)D_00CBAA00) = 0;
        func_00BC6930(0x224000, -0x800, 0x112, 0x7FFF, var_a4, temp_a5, var_a6, temp_a7);
        func_00BC8CB0(0x7FFFFFFFU);
        func_009A3340();
    }
}

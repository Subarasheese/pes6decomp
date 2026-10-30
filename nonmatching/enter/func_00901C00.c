/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_00910F30(void *);                      /* extern */
void *func_009177C0(s32);                           /* extern */
extern char Pes6MatchSquads[];
extern char D_0092B060[];
extern char D_0092B1C0[];
extern char D_0092F0D0[];
extern char D_0092F1A8[];

void func_00901C00(s32 arg0) {
    M2C_UNK *var_v0;
    s16 temp_a0;
    s16 var_a0;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s4;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_s5_2;
    void *temp_v0;

    if (!((*(s32 *)D_0092F0D0) & 0x800)) {
        var_v0 = ((void *)D_0092B1C0);
        var_v1 = (arg0 & 0xFF) * 0xB0;
    } else {
        var_v0 = ((void *)D_0092B060);
        var_v1 = (arg0 & 0xFF) * 0xB0;
    }
    if (!((*(u8 *)D_0092F1A8) & 8)) {
        if ((*(u8 *)D_0092F1A8) & 3) {
            var_v1_2 = 0xB;
        } else {
            temp_v1 = arg0 & 0xFF;
            if (((temp_v1 == 0) && ((*(u8 *)D_0092F1A8) & 1)) || ((temp_v1 == 1) && ((*(u8 *)D_0092F1A8) & 2))) {
                var_v1_2 = 0xB;
            } else {
                var_v1_2 = 0;
            }
        }
    } else if (!((*(u8 *)D_0092F1A8) & 0x10)) {
        var_v1_2 = 3;
    } else {
        var_v1_2 = 7;
    }
    temp_s2 = arg0 & 0xFF;
    if (((temp_s2 == 0) && !((*(u8 *)D_0092F1A8) & 1)) || ((temp_s2 == 1) && !((*(u8 *)D_0092F1A8) & 2))) {
        var_v1_2 = 0;
    }
    var_s4 = 0;
    do {
        if (temp_s2 != 1) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = 0xB;
        }
        temp_s5 = var_s4 & 0xFF;
        temp_v0 = func_009177C0(temp_s5 + var_v0_2);
        if (M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0, u8 *, 0x13) * 0x6900))), u8 *, 0xD4) == 0) {
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2C) = 0;
            func_001A58E0(M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), void **, 0), 0);
        } else {
            if (temp_s5 < (var_v1_2 & 0xFF)) {
                M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2C) = 1;
                func_001A58E0(M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), void **, 0), 1);
            } else {
                M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2C) = 0;
                func_001A58E0(M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), void **, 0), 0);
            }
            temp_s5_2 = var_v0 + var_v1 + ((var_s4 & 0xFF) * 0x10);
            func_00209A00(M2C_FIELD(temp_v0, void **, 4), M2C_FIELD(temp_s5_2, u16 *, 0), 0);
            func_00910F30(temp_v0);
            var_a0 = M2C_FIELD(temp_s5_2, s16 *, 4);
            if (var_a0 < 0) {
                var_a0 = (s16) ((s64) ((var_a0 + 0x168) << 0x30) >> 0x30);
            }
            if (((s64) ((s64) var_a0 << 0x30) >> 0x30) >= 0x169) {
                var_a0 = (s16) ((s64) ((var_a0 - 0x168) << 0x30) >> 0x30);
            }
            temp_a0 = ((s64) ((s64) var_a0 << 0x30) >> 0x30) * 0xB6;
            M2C_FIELD(temp_v0, s16 *, 0x26) = temp_a0;
            M2C_FIELD(temp_v0, s16 *, 0x28) = temp_a0;
            M2C_FIELD(temp_v0, f32 *, 0xE0) = (f32) (100.0f * M2C_FIELD(temp_s5_2, f32 *, 8));
            M2C_FIELD(temp_v0, f32 *, 0xE8) = (f32) (100.0f * M2C_FIELD(temp_s5_2, f32 *, 0xC));
            M2C_FIELD(temp_v0, s32 *, 0xE4) = 0;
        }
        var_s4 = (var_s4 + 1) & 0xFF;
    } while (var_s4 < 0xB);
}

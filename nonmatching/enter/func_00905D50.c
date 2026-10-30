/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
M2C_UNK func_00209540(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_00910F30(void *);                      /* extern */
void *func_009177C0(s32);                           /* extern */
extern char Pes6MatchSquads[];
extern char D_0092C050[];
extern char D_0092C1B0[];
extern char D_0092F028[];

void func_00905D50(s32 arg0) {
    M2C_UNK *var_v0;
    s16 temp_a0;
    s16 var_a0;
    s32 var_s4;
    s32 var_v1;
    void *temp_s0;
    void *temp_v0;

    if ((*(s32 *)D_0092F028) != 3) {
        var_v0 = ((void *)D_0092C050);
        var_v1 = (arg0 & 0xFF) * 0xB0;
    } else {
        var_v0 = ((void *)D_0092C1B0);
        var_v1 = (arg0 & 0xFF) * 0xB0;
    }
    var_s4 = 0;
    do {
        temp_v0 = func_009177C0((var_s4 & 0xFF) + ((arg0 & 0xFF) * 0xB));
        if (M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0, u8 *, 0x13) * 0x6900))), u8 *, 0xD4) == 0) {
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2C) = 0;
            func_001A58E0(M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), void **, 0), 0);
        } else {
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2C) = 1;
            func_001A58E0(M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), void **, 0), 1);
            temp_s0 = var_v0 + var_v1 + ((var_s4 & 0xFF) * 0x10);
            M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), void **, 0), s8 *, 3) = 0;
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2D) = 0;
            func_00209540(M2C_FIELD(temp_v0, void **, 4), M2C_FIELD(temp_s0, u16 *, 0), 0);
            func_00910F30(temp_v0);
            var_a0 = M2C_FIELD(temp_s0, s16 *, 4);
            if (var_a0 < 0) {
                var_a0 = (s16) ((s64) ((var_a0 + 0x168) << 0x30) >> 0x30);
            }
            if (((s64) ((s64) var_a0 << 0x30) >> 0x30) >= 0x169) {
                var_a0 = (s16) ((s64) ((var_a0 - 0x168) << 0x30) >> 0x30);
            }
            temp_a0 = ((s64) ((s64) var_a0 << 0x30) >> 0x30) * 0xB6;
            M2C_FIELD(temp_v0, s16 *, 0x26) = temp_a0;
            M2C_FIELD(temp_v0, s16 *, 0x28) = temp_a0;
            M2C_FIELD(temp_v0, f32 *, 0xE0) = (f32) (100.0f * M2C_FIELD(temp_s0, f32 *, 8));
            M2C_FIELD(temp_v0, f32 *, 0xE8) = (f32) (100.0f * M2C_FIELD(temp_s0, f32 *, 0xC));
            M2C_FIELD(temp_v0, s32 *, 0xE4) = 0;
        }
        var_s4 = (var_s4 + 1) & 0xFF;
    } while (var_s4 < 0xB);
}

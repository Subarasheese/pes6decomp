/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_00910F30(void *);                      /* extern */
void *func_009177C0(s32);                           /* extern */
extern char Pes6MatchSquads[];
extern char D_0092AF30[];

void func_00900F50(s32 arg0) {
    s16 temp_a1;
    s16 var_a0;
    s32 temp_s1;
    s32 var_v1;
    s32 var_v1_2;
    u32 var_s3;
    void *temp_s0;
    void *temp_v0;

    var_s3 = 0;
    temp_s1 = arg0 & 0xFF;
    do {
        if (temp_s1 != 1) {
            var_v1 = 0;
        } else {
            var_v1 = 0xB;
        }
        temp_v0 = func_009177C0((var_s3 & 0xFF) + var_v1);
        if (M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0, u8 *, 0x13) * 0x6900))), u8 *, 0xD4) == 0) {
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2C) = 0;
            func_001A58E0(M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), void **, 0), 0);
        } else {
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2C) = 1;
            func_001A58E0(M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), void **, 0), 1);
            temp_s0 = ((void *)D_0092AF30) + ((var_s3 & 0xFF) * 0x10);
            func_00209A00(M2C_FIELD(temp_v0, void **, 4), M2C_FIELD(temp_s0, u16 *, 0), 0);
            func_00910F30(temp_v0);
            var_a0 = M2C_FIELD(temp_s0, s16 *, 4);
            if (var_a0 < 0) {
                var_a0 = (s16) ((s64) ((var_a0 + 0x168) << 0x30) >> 0x30);
            }
            if (((s64) ((s64) var_a0 << 0x30) >> 0x30) >= 0x169) {
                var_a0 = (s16) ((s64) ((var_a0 - 0x168) << 0x30) >> 0x30);
            }
            temp_a1 = ((s64) ((s64) var_a0 << 0x30) >> 0x30) * 0xB6;
            M2C_FIELD(temp_v0, s16 *, 0x26) = temp_a1;
            M2C_FIELD(temp_v0, s16 *, 0x28) = temp_a1;
            var_v1_2 = 1;
            M2C_FIELD(temp_v0, f32 *, 0xE8) = (f32) (100.0f * M2C_FIELD(temp_s0, f32 *, 0xC));
            if (temp_s1 == 1) {

            } else {
                var_v1_2 = -1;
            }
            M2C_FIELD(temp_v0, f32 *, 0xE0) = (f32) (100.0f * ((f32) var_v1_2 * M2C_FIELD(temp_s0, f32 *, 8)));
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x2D) = (s8) (temp_s1 != 1);
        }
        var_s3 = (var_s3 + 1) & 0xFF;
    } while (var_s3 < 0xBU);
}

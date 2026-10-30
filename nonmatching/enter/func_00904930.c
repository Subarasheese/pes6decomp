/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00299FB0(void *, s16, s32);
extern void func_001A58E0(void *, signed char);
extern void func_0027B2E0(void *);
extern void func_00299FA0(void *, signed char);
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_0027A600(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0027B450(void *, M2C_UNK, s32);        /* extern */
void *func_00299FE0(s32);                           /* extern */
M2C_UNK func_00910F30(M2C_UNK *);                   /* extern */
s32 func_00BA9430(s32);                             /* extern */
extern char Pes6MatchPlayers[];
extern char D_0092BD30[];
extern char D_0092BD70[];
extern char D_0092F010[];
extern char D_0092F1A9[];

void func_00904930(void) {
    M2C_UNK *var_s2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_s1;
    void *temp_a1;
    void *temp_s0_2;

    if ((*(u8 *)D_0092F1A9) & 3) {
        if ((*(s32 *)D_0092F010) != 0x100EB) {
            var_s2 = ((void *)D_0092BD30);
        } else {
            var_s2 = ((void *)D_0092BD70);
        }
        if (((void *)Pes6MatchPlayers) != NULL) {
            M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), s8 *, 0x2C) = 1;
            func_001A58E0(M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), void **, 0), 1);
            func_00209A00(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), M2C_FIELD(var_s2, u16 *, 0), 0);
            func_00910F30(((void *)Pes6MatchPlayers));
            M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), s8 *, 0x2D) = 0;
            var_v1 = M2C_FIELD(var_s2, s16 *, 4);
            if (var_v1 < 0) {
                var_v1 = (s16) ((s64) ((var_v1 + 0x168) << 0x30) >> 0x30);
            }
            if (((s64) ((s64) var_v1 << 0x30) >> 0x30) >= 0x169) {
                var_v1 = (s16) ((s64) ((var_v1 - 0x168) << 0x30) >> 0x30);
            }
            temp_v1 = ((s64) ((s64) var_v1 << 0x30) >> 0x30) * 0xB6;
            M2C_FIELD(((void *)Pes6MatchPlayers), s16 *, 0x26) = temp_v1;
            M2C_FIELD(((void *)Pes6MatchPlayers), s16 *, 0x28) = temp_v1;
            M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0xE0) = (f32) (100.0f * M2C_FIELD(var_s2, f32 *, 8));
            M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0xE8) = (f32) (100.0f * M2C_FIELD(var_s2, f32 *, 0xC));
            func_0027A600(((void *)Pes6MatchPlayers), 0);
            var_s1 = 0;
            do {
                temp_s0 = var_s1 & 0xFF;
                temp_s3 = temp_s0 + 1;
                temp_s0_2 = func_00299FE0(temp_s0);
                func_0027B450(M2C_FIELD(temp_s0_2, void **, 0), 2, func_00BA9430(temp_s3));
                func_0027B2E0(M2C_FIELD(temp_s0_2, void **, 0));
                M2C_FIELD(temp_s0_2, u8 *, 4) = 1U;
                func_001A58E0(M2C_FIELD(temp_s0_2, void **, 0), (s8) M2C_FIELD(temp_s0_2, u8 *, 4));
                temp_a1 = var_s2 + ((temp_s3 & 0xFF & 0xFF) * 0x10);
                *M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 0), u8 **, 0x10) = M2C_FIELD(temp_s0_2, u8 *, 4);
                var_v1_2 = M2C_FIELD(temp_a1, s16 *, 4);
                if (var_v1_2 < 0) {
                    var_v1_2 = (s16) ((s64) ((var_v1_2 + 0x168) << 0x30) >> 0x30);
                }
                if (((s64) ((s64) var_v1_2 << 0x30) >> 0x30) >= 0x169) {
                    var_v1_2 = (s16) ((s64) ((var_v1_2 - 0x168) << 0x30) >> 0x30);
                }
                temp_v1_2 = ((s64) ((s64) var_v1_2 << 0x30) >> 0x30) * 0xB6;
                M2C_FIELD(temp_s0_2, s16 *, 0x14) = temp_v1_2;
                M2C_FIELD(temp_s0_2, s16 *, 0x16) = temp_v1_2;
                M2C_FIELD(temp_s0_2, s32 *, 0x20) = 0;
                M2C_FIELD(temp_s0_2, f32 *, 0x1C) = (f32) (100.0f * M2C_FIELD(temp_a1, f32 *, 8));
                M2C_FIELD(temp_s0_2, f32 *, 0x24) = (f32) (100.0f * M2C_FIELD(temp_a1, f32 *, 0xC));
                func_00299FB0(temp_s0_2, (s16) M2C_FIELD(temp_a1, s32 *, 0), 0);
                func_00299FA0(temp_s0_2, 0);
                var_s1 = (var_s1 + 1) & 0xFF;
            } while (var_s1 < 3);
        }
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern void func_001AFD70(int);
extern void func_00207360(int);
M2C_UNK func_0027A600(void *, M2C_UNK);             /* extern */
extern char Pes6MatchPlayers[];
extern char Pes6MatchSquads[];
extern char D_00C9EFC0[];
extern char D_00C9F088[];

void func_00C04100(void) {
    f32 temp_f1;
    s32 temp_a0;
    s32 var_a4;
    s32 var_s0;
    s32 var_s2;
    void *temp_a1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    var_a4 = 0;
    var_s2 = 0;
    if ((s32) (*(u8 *)D_00C9F088) > 0) {
        do {
            temp_a1 = ((void *)D_00C9EFC0) + ((var_a4 & 0xFF) * 0x28);
            if (M2C_FIELD(temp_a1, s32 *, 8) == 0) {
                var_s2 |= 1 << *M2C_FIELD(temp_a1, u8 **, 0xC);
            }
            var_a4 = (var_a4 + 1) & 0xFF;
        } while (var_a4 < (s32) (*(u8 *)D_00C9F088));
    }
    var_s0 = 0;
    do {
        temp_a0 = var_s0 & 0xFF;
        if (!(var_s2 & (1 << temp_a0))) {
            temp_s1 = ((void *)Pes6MatchPlayers) + (temp_a0 * 0x240);
            if (M2C_FIELD(((M2C_FIELD(temp_s1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s1, u8 *, 0x12) * 0x6900))), u8 *, 0xD4) != 0) {
                temp_f1 = M2C_FIELD(temp_s1, f32 *, 0xE0);
                if ((temp_f1 > -4096.0f) && !(temp_f1 >= 4096.0f)) {
                    goto block_12;
                }
                if (!(M2C_FIELD(temp_s1, f32 *, 0xE8) > 4096.0f)) {
                    M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), u8 *, 0x2C) = 1U;
                } else {
block_12:
                    M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), u8 *, 0x2C) = 0U;
                }
                temp_v0 = M2C_FIELD(temp_s1, void **, 4);
                func_001A58E0(M2C_FIELD(temp_v0, void **, 0), (s8) M2C_FIELD(temp_v0, u8 *, 0x2C));
                func_00207360((s32) M2C_FIELD(temp_s1, void **, 4));
                func_001AFD70((s32) M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), void **, 0));
                func_0027A600(temp_s1, 0);
            } else {
                temp_v0_2 = M2C_FIELD(temp_s1, void **, 4);
                func_001A58E0(M2C_FIELD(temp_v0_2, void **, 0), (s8) M2C_FIELD(temp_v0_2, u8 *, 0x2C));
            }
        }
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 0x17);
}

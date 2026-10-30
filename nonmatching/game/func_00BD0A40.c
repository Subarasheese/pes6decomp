/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B26170(s32);
extern void func_002871C0(void *);
extern void func_00B261E0(s32);
extern char Pes6MatchPlayers[];
extern char D_00591E01[];
extern char D_00591E57[];
extern char D_00591F24[];

void func_00BD0A40(void) {
    f32 sp10;
    M2C_UNK *var_a7;
    M2C_UNK *var_t0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a2_3;
    s32 var_a3_2;
    s32 var_t0_2;
    s32 var_t1;
    u8 *var_a0_2;
    u8 *var_a2_2;
    u8 *var_a3;
    u8 temp_a0;
    u8 temp_v1;

    func_002871C0(&sp10);
    if ((*(u8 *)D_00591E57) == 0xFF) {
        var_a1 = 1;
    } else {
        var_a1 = (s32) (*(u8 *)D_00591E57) % 23;
    }
    var_a3 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
    if ((*(u8 *)D_00591F24) != 6) {
        if ((*(u8 *)D_00591E57) == 0xFF) {
            var_a1_2 = 1;
        } else {
            var_a1_2 = (s32) (*(u8 *)D_00591E57) % 23;
        }
        var_t1 = 1;
        var_t0 = ((void *)D_00591E01);
loop_10:
        temp_a0 = M2C_FIELD(var_t0, u8 *, 0x64);
        if (temp_a0 != 0xFF) {
            if (temp_a0 == 0xFF) {
                var_a3_2 = 1;
            } else {
                var_a3_2 = (s32) temp_a0 % 23;
            }
            var_a3 = ((void *)Pes6MatchPlayers) + (var_a3_2 * 0x240);
            if (M2C_FIELD(var_a3, u8 *, 0x13) == M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a1_2 * 0x240)), u8 *, 0x13)) {
                goto block_16;
            }
        } else {
block_16:
            var_t1 += 1;
            var_t0 += 1;
            if (var_t1 < 3) {
                goto loop_10;
            }
        }
    }
    if (*var_a3 == 0xFF) {
        var_a1_3 = 1;
    } else {
        if ((*(u8 *)D_00591E57) == 0xFF) {
            var_a2 = 1;
        } else {
            var_a2 = (s32) (*(u8 *)D_00591E57) % 23;
        }
        var_a2_2 = ((void *)Pes6MatchPlayers) + (var_a2 * 0x240);
        if ((*(u8 *)D_00591F24) != 6) {
            if ((*(u8 *)D_00591E57) == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = (s32) (*(u8 *)D_00591E57) % 23;
            }
            var_t0_2 = 1;
            var_a7 = ((void *)D_00591E01);
loop_30:
            temp_v1 = M2C_FIELD(var_a7, u8 *, 0x64);
            if (temp_v1 != 0xFF) {
                if (temp_v1 == 0xFF) {
                    var_a2_3 = 1;
                } else {
                    var_a2_3 = (s32) temp_v1 % 23;
                }
                var_a2_2 = ((void *)Pes6MatchPlayers) + (var_a2_3 * 0x240);
                if (M2C_FIELD(var_a2_2, u8 *, 0x13) == M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x13)) {
                    goto block_36;
                }
            } else {
block_36:
                var_t0_2 += 1;
                var_a7 += 1;
                if (var_t0_2 < 3) {
                    goto loop_30;
                }
            }
        }
        var_a1_3 = (s32) *var_a2_2 % 23;
    }
    var_a0_2 = ((void *)Pes6MatchPlayers) + (var_a1_3 * 0x240);
    if ((*(u8 *)D_00591F24) == 6) {
        if (M2C_FIELD(var_a0_2, u8 *, 0x13) != 0) {
            if (!(sp10 <= 0.0f)) {
                goto block_45;
            }
        } else if (sp10 < 0.0f) {
block_45:
            var_a0_2 = NULL;
        }
    }
    if (var_a0_2 == NULL) {
        func_00B261E0(0);
    } else {
        func_00B26170((s32) *var_a0_2);
        func_00B261E0(1);
    }
}

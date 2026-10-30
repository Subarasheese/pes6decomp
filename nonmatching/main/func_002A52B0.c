/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00299FE0(s32, s32, s32);                 /* extern */
extern char Pes6MatchPlayers[];
extern char D_005E19B0[];
extern char D_005E1A10[];

void func_002A52B0(s32 *arg0, s32 arg1, f32 fparg0, f32 fparg1, f32 fparg2) {
    M2C_UNK *var_s3;
    s32 temp_a1;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a2;
    s32 var_s4;
    s32 var_v1;
    void *temp_s0;

    var_s3 = ((void *)D_005E19B0);
    var_s4 = 0;
    do {
        var_a2 = 1;
        temp_s1 = 1 << var_s4;
        if (*arg0 & temp_s1) {
            temp_a1 = var_s4 & 0xFF;
            temp_s0 = var_s3 + 0x104;
            if (temp_a1 < 0x17) {
                if (temp_a1 != 0xFF) {
                    var_a2 = temp_a1 % 23;
                }
                if (M2C_FIELD(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a2 * 0x240)), void ***, 4), u8 *, 2) != 0) {
                    if (temp_a1 == 0xFF) {
                        var_a1 = 1;
                    } else {
                        var_a1 = temp_a1 % 23;
                    }
                    if (M2C_FIELD(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a1 * 0x240)), void ***, 4), u8 *, 1) != 2) {
                        goto block_11;
                    }
                    goto block_20;
                }
block_11:
                var_v1 = 0;
            } else {
                switch (temp_a1) {                  /* irregular */
                case 28:
                    if ((*(f32 *)D_005E1A10) == 0.0f) {
                        var_v1 = 0;
                    } else {
                    case 27:
block_20:
                        var_v1 = 1;
                    }
                    break;
                default:
                    if (M2C_FIELD(func_00299FE0(temp_a1 - 0x17, temp_a1, 1), u8 *, 4) == 0) {
                        var_v1 = 0;
                    } else {
                        goto block_20;
                    }
                    break;
                }
            }
            if ((var_v1 == 0) || !(fabsf(M2C_FIELD(var_s3, f32 *, 0x104)) < fparg0) || !(fabsf(M2C_FIELD(temp_s0, f32 *, 4)) < fparg1) || !(fabsf(M2C_FIELD(temp_s0, f32 *, 8) - M2C_FIELD((((void *)D_005E19B0) + ((arg1 & 0xFF) * 0xC) + 0x104), f32 *, 8)) < fparg2)) {
                *arg0 &= ~temp_s1;
            }
        }
        var_s4 += 1;
        var_s3 += 0xC;
    } while (var_s4 < 0x1D);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B94F50(void);
extern u8 func_00BF6260(void);
extern u8 func_00BF6270(void);
extern u8 func_00BF6280(void);
M2C_UNK func_009275C0(u8 *);                        /* extern */
M2C_UNK func_00928A50(u8 *, u8, u8 *);              /* extern */
M2C_UNK func_00984160(u8 *, f32, f32);              /* extern */
s32 func_009B3070(s32, s32);                        /* extern */
s32 func_009B33F0(u8 *, u8 *);                      /* extern */
s32 func_009B3480(u8 *, f32, M2C_UNK32);            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00B35E10(u8 **, u8 *, u8 *);           /* extern */
s32 func_00B611F0(u8 **, s32, M2C_UNK);             /* extern */
s32 func_00BDBB60(f32, f32);                        /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E58[];
extern char D_00591E60[];
extern char D_00CB531C[];
extern char D_00CB5320[];
extern char D_00CBCDE1[];
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];

s32 func_00B61440(u8 **arg0) {
    M2C_UNK32 var_f13;
    f32 var_f12;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *var_s3;

    var_s1 = 0;
    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        goto block_1;
    }
    if (func_00BF6280() == 2) {
        if (func_00BF6270() == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = func_00BF6270() % 23;
        }
        var_s3 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (func_00BF6260() == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = func_00BF6260() % 23;
        }
        var_v1 = var_a0_2 * 0x240;
    } else {
block_1:
        if ((*(u8 *)D_00CBCDE2) == 0xFF) {
            var_v1_2 = 1;
        } else {
            var_v1_2 = (s32) (*(u8 *)D_00CBCDE2) % 23;
        }
        var_s3 = ((void *)Pes6MatchPlayers) + (var_v1_2 * 0x240);
        if ((*(u8 *)D_00CBCDE3) != 0xFF) {
            var_a0_3 = (s32) (*(u8 *)D_00CBCDE3) % 23;
        } else {
            var_a0_3 = 1;
        }
        var_v1 = var_a0_3 * 0x240;
    }
    temp_s2 = &(((void *)Pes6MatchPlayers))[var_v1];
    if (M2C_FIELD(*arg0, u8 *, 0) == *var_s3) {
        if ((func_009E1C90(1) & 0xFF) != 0xC) {
            goto block_41;
        }
        if (func_00BF6280() == 2) {
            if (func_00C01090(0xE) == 0) {
                if (func_00C01090(0xF) != 0) {
                    goto block_47;
                }
            } else {
block_47:
                var_s1 = 1;
            }
        } else {
block_41:
            if ((*(u8 *)D_00CBCDE1) == 4) {
                var_s1 = 1;
            }
        }
    }
    if (var_s1 == 0) {
        if ((func_009E1C90(1) & 0xFF) != 0xC) {
            goto block_51;
        }
        if (func_00BF6280() == 2) {
            if (func_00BF6260() == 0xFF) {
                var_a0_4 = 1;
            } else {
                var_a0_4 = func_00BF6260() % 23;
            }
            var_v1_3 = var_a0_4 * 0x240;
        } else {
block_51:
            if ((*(u8 *)D_00CBCDE3) == 0xFF) {
                var_a0_5 = 1;
            } else {
                var_a0_5 = (s32) (*(u8 *)D_00CBCDE3) % 23;
            }
            var_v1_3 = var_a0_5 * 0x240;
        }
        temp_s0 = &(((void *)Pes6MatchPlayers))[var_v1_3];
        if ((func_009E1C90(1) & 0xFF) == 0xC) {
            if (func_00C01090(0x13) != 0) {
                var_v0 = 1;
            } else {
                goto block_82;
            }
        } else {
            if ((*(u8 *)D_00CBCDE2) == 0xFF) {
                var_a0_6 = 1;
            } else {
                var_a0_6 = (s32) (*(u8 *)D_00CBCDE2) % 23;
            }
            if (func_00B94F50() != 0) {
                goto block_64;
            }
            if ((M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_6 * 0x240)), s16 *, 0x14) * func_00BDBB60((*(f32 *)D_00591E58), (*(f32 *)D_00591E60))) < 0) {
                var_v0 = 1;
            } else {
block_82:
block_64:
                var_v0 = 0;
            }
        }
        if (var_v0 & 0xFF) {
            func_009275C0(*arg0);
        } else {
            temp_a2 = *arg0;
            if (M2C_FIELD(temp_a2, u8 *, 0) != M2C_FIELD(temp_s0, u8 *, 0)) {
                func_00928A50(temp_a2, M2C_FIELD(temp_s0, u8 *, 0x13), temp_a2);
                func_00984160(*arg0, (*(f32 *)D_00CB531C), (*(f32 *)D_00CB5320));
            } else {
                func_00B35E10(arg0, temp_a2 + 0x6C, temp_a2 + 0x70);
            }
        }
        temp_v0 = *arg0;
        var_f13 = M2C_FIELD(temp_v0, M2C_UNK32 *, 0x70);
        var_f12 = M2C_FIELD(temp_v0, f32 *, 0x6C);
    } else {
        temp_a0 = *arg0;
        var_f13 = 0x46086400;
        var_f12 = M2C_FIELD(temp_a0, f32 *, 0xE0);
        M2C_FIELD(temp_a0, f32 *, 0x6C) = var_f12;
        M2C_FIELD(*arg0, M2C_UNK32 *, 0x70) = 0x46086400;
    }
    var_s0 = func_009B3480(*arg0, var_f12, var_f13) & 0xFFFF;
    if ((func_009B3070(var_s0 & 0xFFFF, func_009B33F0(*arg0, ((void *)Pes6MatchPlayers)) & 0xFFFF) & 0xFFFF) < 0x3801) {
        if (((((func_009B3480(((void *)Pes6MatchPlayers), 0.0f, 0) & 0xFFFF) - var_s0) + 0x10000) & 0xFFFF) >= 0x8001) {
            var_s0 += 0x4000;
        } else {
            var_s0 -= 0x4000;
        }
    }
    temp_a0_2 = *arg0;
    if (M2C_FIELD(temp_a0_2, u8 *, 0) != *var_s3) {
        temp_s3 = func_009B33F0(temp_a0_2, var_s3) & 0xFFFF;
        if ((func_009B3070(var_s0 & 0xFFFF, temp_s3) & 0xFFFF) < 0x3801) {
            if ((((temp_s3 - var_s0) + 0x10000) & 0xFFFF) >= 0x8001) {
                var_s0 += 0x3000;
            } else {
                var_s0 -= 0x3000;
            }
        }
    }
    temp_a0_3 = *arg0;
    if (M2C_FIELD(temp_a0_3, u8 *, 0) != *temp_s2) {
        temp_s2_2 = func_009B33F0(temp_a0_3, temp_s2) & 0xFFFF;
        if ((func_009B3070(var_s0 & 0xFFFF, temp_s2_2) & 0xFFFF) < 0x3801) {
            if ((((temp_s2_2 - var_s0) + 0x10000) & 0xFFFF) >= 0x8001) {
                var_s0 += 0x3000;
            } else {
                var_s0 -= 0x3000;
            }
        }
    }
    if (var_s1 == 0) {
        if (M2C_FIELD(*arg0, u8 *, 0x10) != 0) {
            var_s0 = func_00B611F0(arg0, var_s0, 0x800);
        } else {
            goto block_24;
        }
    } else {
block_24:
        if ((var_s1 != 0) && (M2C_FIELD(*arg0, u8 *, 0x10) != 0) && (var_s0 >= 0) && (var_s0 < 0x8001)) {
            var_s0 = 0xC000;
        }
    }
    return var_s0;
}

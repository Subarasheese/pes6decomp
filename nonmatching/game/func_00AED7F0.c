/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00A9C640(void *);
extern u32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00AEC650(void *, void *);                  /* extern */
s32 func_00AECD00(void *, void *);                  /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_005926D8[];
extern char D_005926E8[];
extern char Pes6MatchSquads[];

s32 func_00AED7F0(void *arg0, void *arg1) {
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 var_s2;
    u32 temp_ret;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s3;
    void *temp_v0_2;

    temp_v1 = M2C_FIELD(arg1, u8 *, 1);
    if (temp_v1 != 0xFF) {
        var_a0 = (s32) temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_s3 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x114) >= 0x80U) {
        temp_v1_2 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x97);
        if (!((*(f32 *)D_005926D8) < (f32) ((*(u8 *)D_005926E8) - (((temp_v1_2 & 0x7F) / 20) + ((u32) (temp_v1_2 & 0x7F) >> 0x1F))))) {
            temp_s2 = func_002AE670(0xA);
            if ((func_009B30B0(M2C_FIELD(temp_s3, u16 *, 0x26), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x50) {
                var_v0_2 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58));
            } else {
                var_v0_2 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(temp_s3, u16 *, 0x26));
            }
            var_s4 = var_v0_2 & 0xFFFF;
            temp_v0 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_s3, u16 *, 0x26)) & 0xFFFF;
            if (temp_v0 < var_s4) {
                var_s4 = temp_v0;
            }
            temp_v0_2 = (temp_s2 * 4) + Pes6Ball_Current;
            var_s2 = func_009B3480(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x47C), M2C_FIELD(temp_v0_2, f32 *, 0xB7C)) & 0xFFFF;
            if (var_s4 < 0x2001) {
                if (((func_009B3070(var_s2, func_00A9C640(arg0)) & 0xFFFF) < 0x2001) && ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_s3, u16 *, 0x26)) & 0xFFFF) < 0x2001)) {
                    return 0;
                }
                goto block_19;
            }
block_19:
            if ((func_009B30B0(var_s2, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x30) {
                var_s2 = M2C_FIELD(arg0, u16 *, 0x10C);
            }
            temp_v1_3 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), var_s2) & 0xFFFF;
            if (M2C_FIELD(arg1, u8 *, 0x10) == 0) {
                if (temp_v1_3 < 0x3001) {
                    goto block_34;
                }
                goto block_24;
            }
block_24:
            if (M2C_FIELD(arg1, u8 *, 0xE) != 0) {
                return 0;
            }
            if (M2C_FIELD(arg1, u8 *, 0xF) == 0) {
                temp_ret = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6B) & 0x7F, 0x14U);
                if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(8 - ((temp_ret / 30) + (temp_ret >> 0x1F))))) {
                    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x41) {
                        if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), var_s2) & 0xFFFF) < 0x3001) {
                            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(temp_s3, u16 *, 0x28)) & 0xFFFF) < 0x20) {
                                if ((func_009B30B0(var_s2, M2C_FIELD(((M2C_FIELD(temp_s3, u8 *, 0) * 2) + arg0), u16 *, 0x128)) & 0xFFFF) < 0x20) {
                                    return 0;
                                }
                                goto block_62;
                            }
block_62:
                            if ((var_s4 < 0x5000) && (var_s4 >= 0x4800) && ((u32) M2C_FIELD(arg1, u32 *, 4) >= 0x1B901U)) {
                                return 0;
                            }
block_34:
                            if (1 == 0) {
                                return 0;
                            }
                            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x1C);
                            var_v1 = 0;
                            if (temp_v0_3 >= 0x1901) {
                                if ((temp_v0_3 < 0x1B00) && ((u32) M2C_FIELD(arg1, u32 *, 4) >= 0x1B901U)) {
                                    goto block_40;
                                }
                            } else {
block_40:
                                var_v1 = 1;
                            }
                            if (var_v1 != 1) {
                                var_v0 = func_00AEC650(arg0, arg1);
                            } else {
                                var_v0 = func_00AECD00(arg0, arg1);
                            }
                            return var_v0;
                        }
                        return 0;
                    }
                    return 0;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_009B30B0(u16, u16);                        /* extern */
extern char Pes6MatchSquads[];

s32 func_00AFBB00(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    u16 temp_v1;
    u16 temp_v1_3;
    u32 temp_s0_3;
    u32 temp_s0_4;
    u8 temp_v1_2;

    if ((M2C_FIELD(arg0, u8 *, 0) != 0) && (M2C_FIELD(arg1, u8 *, 0) != 0)) {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), u16 *, 0x30);
        if ((temp_v1 != 0x6F) && (temp_v1 != 0x2FA) && (temp_v1 != 0x16E) && (temp_v1 != 0x333) && (temp_v1 != 0x321)) {
            goto block_7;
        }
        temp_s0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg1, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) + 0xA;
        if (temp_s0 >= func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U)) {
            return 0;
        }
block_7:
        if ((s32) M2C_FIELD(arg1, u8 *, 0x16) >= 0x80) {
            return 0;
        }
        if ((s32) M2C_FIELD(arg0, u8 *, 0x16) < 0x80) {
            temp_s0_2 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) + 0xA;
            if (temp_s0_2 < func_00288670(M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg1, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U)) {
                return 0;
            }
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x16);
            if ((temp_v1_2 != 0xFB) && (temp_v1_2 != 4) && (temp_v1_2 != 0x41) && (temp_v1_2 != 0xA) && (temp_v1_2 != 9) && (temp_v1_2 != 8) && (temp_v1_2 != 6) && (temp_v1_2 != 5) && (temp_v1_2 != 0xD) && (temp_v1_2 != 0x14) && (temp_v1_2 != 0x11) && (temp_v1_2 != 0x8C) && (temp_v1_2 != 0x90) && (temp_v1_2 != 0xAD)) {
                temp_s0_3 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                if ((s32) temp_s0_3 < (func_00288670(M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg1, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) + 0x1E)) {
                    temp_s0_4 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                    if ((s32) temp_s0_4 >= (func_00288670(M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg1, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) + 0xF)) {
                        return 2;
                    }
                    if ((s32) M2C_FIELD(arg0, u8 *, 0x16) >= 0x80) {
                        return 2;
                    }
                    temp_v1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
                    if ((temp_v1_3 != 0x6F) && (temp_v1_3 != 0x2FA) && (temp_v1_3 != 0x16E) && (temp_v1_3 != 0x333) && (temp_v1_3 != 0x321)) {
                        return 0;
                    }
                    return (func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0) * 2) + arg0), u16 *, 0x128)) & 0xFFFF) >= 0x60;
                }
                return 1;
            }
            return 2;
        }
        return 1;
    }
    return 0;
}

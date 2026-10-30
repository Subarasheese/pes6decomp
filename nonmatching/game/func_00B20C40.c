/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00A07B40();                                /* extern */
s32 func_00A0BEF0(void *);                          /* extern */
s32 func_00BBB780(s64);                             /* extern */
extern s32 Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591F14[];
extern char D_005926D8[];
extern char D_005926E6[];
extern char Pes6MatchSquads[];

s32 func_00B20C40(void *arg0, s32 arg1) {
    f32 var_f0;
    s32 temp_a1;
    s32 temp_v0_2;
    void *temp_v0;

    if (func_00A07B40() == 0) {
        return 0;
    }
    if ((*(u8 *)D_00591F14) == 0) {
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            return 0;
        }
        if (arg1 == 0) {
            return 0;
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) < (f32) arg1) {
            return 0;
        }
        if ((s32) (*(u8 *)D_005926E6) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926E6);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926E6) >> 1) | ((*(u8 *)D_005926E6) & 1));
        }
        if (!((*(f32 *)D_005926D8) <= var_f0)) {
            if (func_00BBB780((s64) ((0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x70) & 0x7F, 0x32U)) << 0x30) >> 0x30) == 0) {
                if (func_00BBB780((s64) ((0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U)) << 0x30) >> 0x30) == 0) {
                    if (((*(u8 *)D_00591E4C) != 0) && (((*(u8 *)D_00591E4C) & 0xFF) != M2C_FIELD(arg0, u8 *, 0))) {
                        return 0;
                    }
                    temp_v0 = ((*(u8 *)D_005926E6) * 4) + Pes6Ball_Current;
                    temp_a1 = func_009B3480(arg0, M2C_FIELD(temp_v0, f32 *, 0x47C), M2C_FIELD(temp_v0, f32 *, 0xB7C)) & 0xFFFF;
                    if (((u64) ((s64) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 0xD) << 0x38) >> 0x39) == 0x11) {
                        temp_v0_2 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), temp_a1) & 0xFFFF;
                        if (temp_v0_2 >= 0x48) {
                            return 0;
                        }
                        if (temp_v0_2 >= 0x28) {
                            M2C_FIELD(arg0, s8 *, 0x16) = 0x18;
                            M2C_FIELD(arg0, s16 *, 0x18) = 0x10;
                            goto block_44;
                        }
                        goto block_40;
                    }
block_40:
                    if (func_00A0BEF0(arg0) != 0) {
                        M2C_FIELD(arg0, s8 *, 0x61) = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                        func_00207390(M2C_FIELD(arg0, void **, 4), 6);
                        M2C_FIELD(arg0, s8 *, 0x16) = 1;
                        M2C_FIELD(arg0, s16 *, 0x18) = 0;
block_44:
                        return 1;
                    }
                    return 0;
                }
                goto block_26;
            }
block_26:
            return 0;
        }
        return 0;
    }
    return 0;
}

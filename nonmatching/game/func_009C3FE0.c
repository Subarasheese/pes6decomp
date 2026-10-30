/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(s32, M2C_UNK);                /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0027D0B0(void *, M2C_UNK);             /* extern */
s32 func_009B30B0(s32, u16);                        /* extern */
s32 func_00A09690(void *);                          /* extern */
s32 func_00A1B4A0(void *);                          /* extern */
extern char D_00591E70[];
extern char Pes6MatchSquads[];

s32 func_009C3FE0(void *arg0, void *arg1) {
    s32 temp_s2;
    s32 temp_v1_2;
    u64 temp_v1;

    if (func_00A1B4A0(arg1) != 0) {
        return 0;
    }
    temp_v1 = (u64) ((s64) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 4), u8 *, 0xD) << 0x38) >> 0x39;
    if ((temp_v1 != 4) && (temp_v1 != 3)) {
        temp_s2 = func_00A09690(arg1) & 0xFFFF;
        if ((func_009B30B0(temp_s2, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x21) {
            if ((func_009B30B0(temp_s2, M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 2) + arg1), u16 *, 0x128)) & 0xFFFF) < 0x39) {
                func_0027D0B0(arg0, 0x10);
                temp_v1_2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
                if (!((*(f32 *)D_00591E70) < (f32) (((temp_v1_2 * -0x100) / 183) + ((u32) (temp_v1_2 * -0x100) >> 0x1F)))) {
                    M2C_FIELD(arg1, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
                    func_00209A00(M2C_FIELD(arg1, void **, 4), 0x1CC, 0);
                    func_00207390(M2C_FIELD(arg0, s32 *, 4), 4);
                    M2C_FIELD(arg1, u8 *, 0x48) = (u8) M2C_FIELD(arg0, u8 *, 0);
                    M2C_FIELD(arg1, s8 *, 0x16) = 0x10;
                    M2C_FIELD(arg1, s16 *, 0x18) = 0x50;
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}

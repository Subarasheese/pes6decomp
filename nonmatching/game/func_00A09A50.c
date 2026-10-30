/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
extern s32 D_003E74CC;

s32 func_00A09A50(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    if (((u64) ((s64) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 0xD) << 0x38) >> 0x39) == 1) {
        goto block_10;
    }
    if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) >= 0x1E) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x1C);
        if ((0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < temp_a1) {
            if (temp_a1 < 0x1901) {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0xC1, 0);
            } else {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0x13, 0);
            }
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = (u8) ((((M2C_FIELD(arg0, u16 *, 0x26) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001);
            M2C_FIELD(arg0, u16 *, 0x34) = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x28) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE)) & 0xFFFF, 0x1000);
            M2C_FIELD(arg0, s16 *, 0x36) = func_009B32D0(arg2, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x800);
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1800);
            M2C_FIELD(arg0, s16 *, 0x38) = (s16) ((s32) (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) / (s32) (M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2));
            func_00207390(M2C_FIELD(arg0, void **, 4), 6);
            return 1;
        }
    }
block_10:
    return 0;
}

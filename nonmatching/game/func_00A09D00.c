/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B3070(u16, s16);                        /* extern */
s32 func_009B30B0(u16, s16);                        /* extern */
M2C_UNK func_00B046A0(void *, s16, u16, s32);       /* extern */

s32 func_00A09D00(void *arg0, s32 arg1, s16 arg2) {
    s32 temp_s0;
    s32 temp_v1_3;
    s8 var_v1;
    u16 temp_v1;
    void *temp_v1_2;

    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF) >= 0x50) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), arg2) & 0xFFFF) < 0x31) {
            temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
            if ((temp_v1 != 0x114) && (temp_v1 != 0x13) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0xC01)) {
                temp_s0 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF;
                func_00209A00(M2C_FIELD(arg0, void **, 4), 3, 0);
                temp_v1_2 = M2C_FIELD(arg0, void **, 4);
                M2C_FIELD(temp_v1_2, f32 *, 0x28) = (f32) (M2C_FIELD(temp_v1_2, f32 *, 0x28) * 1.2f);
                func_00207390(M2C_FIELD(arg0, void **, 4), 6);
                if ((temp_s0 & 0xFFFF) < 0x7000) {
                    var_v1 = ((((arg2 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) < 0x8001;
                } else {
                    var_v1 = ((((arg1 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) < 0x8001;
                }
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = var_v1;
                M2C_FIELD(arg0, u16 *, 0x26) = (u16) ((arg2 & 0xFFFF) + 0x8000);
                func_00B046A0(arg0, arg2, M2C_FIELD(arg0, u16 *, 0x26), 0x8000);
                temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x1C);
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (((temp_v1_3 << 8) / 190) + ((u32) (temp_v1_3 << 8) >> 0x1F));
                M2C_FIELD(arg0, s16 *, 0x34) = arg2;
                M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
                return 1;
            }
        }
        goto block_3;
    }
block_3:
    return 0;
}

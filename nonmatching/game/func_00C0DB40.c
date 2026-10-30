/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00952420(void *, u16, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00952A50(u16);                             /* extern */
M2C_UNK func_0096D0A0(u16, M2C_UNK);                /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
M2C_UNK func_00C04AD0(void *, M2C_UNK);             /* extern */
extern char D_00591BE4[];
extern char D_005926EC[];

s32 func_00C0DB40(void *arg0, void *arg1) {
    s32 temp_s0_2;
    s32 var_v0;
    u16 temp_s0;

    temp_s0 = M2C_FIELD(arg1, u16 *, 0x28);
    func_0096D0A0(temp_s0, 0);
    var_v0 = (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    if (var_v0 <= 0) {
        var_v0 = -var_v0;
    }
    if (((f32) var_v0 < 12569.0f) && ((func_009B3070(temp_s0, M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) < 0x2000) && ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) >= 0x3001) && ((func_009B3070(temp_s0, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x3001) && (func_00952420(arg0, temp_s0, 0x2000, 0x240000) == 0)) {
        func_00C04AD0(arg0, 7);
        goto block_18;
    }
    if ((func_00952A50(temp_s0) & 0xFF) < 0x60) {
        if (((u32) ((u8) (*(u8 *)D_00591BE4) >> 1) < (u32) M2C_FIELD(arg1, u32 *, 0x10)) && ((func_00952A50(M2C_FIELD(arg0, u16 *, 0x26)) & 0xFF) >= 0x50)) {
            goto block_18;
        }
        if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), temp_s0) & 0xFFFF) >= 0x800) {
            if ((u8) (*(u8 *)D_005926EC) < (u32) M2C_FIELD(arg1, u32 *, 0x10)) {
                temp_s0_2 = M2C_FIELD(arg1, u8 *, 0x36) + 0x1E;
                if (temp_s0_2 < (func_00952A50(temp_s0) & 0xFF)) {
                    goto block_18;
                }
                goto block_16;
            }
block_16:
            return 3;
        }
        goto block_18;
    }
block_18:
    return 1;
}

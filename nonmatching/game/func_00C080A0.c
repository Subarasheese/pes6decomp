/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00952420(void *, u16, M2C_UNK, s32);       /* extern */
M2C_UNK func_00961940(void *, M2C_UNK);             /* extern */
M2C_UNK func_0096D0A0(u16, M2C_UNK);                /* extern */
s32 func_009909D0(void *, M2C_UNK);                 /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E4C[];
extern char Pes6MatchSquads[];

s32 func_00C080A0(void *arg0, void *arg1) {
    s32 temp_s5;
    s32 var_s0;
    s32 var_s2;
    u16 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u16 *, 0x120);
    var_s0 = 0;
    func_0096D0A0(temp_s1, 0);
    var_s2 = 0;
    temp_s5 = (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x81) & 0x7F, 0x28U) * 8) + 0x600;
    if (func_00952420(arg0, temp_s1, 0x1000, temp_s5 * ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x81) & 0x7F, 0x28U) * 8) + 0x600)) == 0) {
        var_s0 = 0x1000;
    }
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) < ((var_s0 & 0xFFFF) + 0x2000)) {
        var_s2 = 1;
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 0x10) < (u8) (*(u8 *)D_00591BE4)) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) < (0x1800 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) {
            if (!(func_009909D0(arg0, 0x100000) & 0xFF) && (func_00952420(arg0, temp_s1, 0x2000, 0x400000) != 0)) {
                var_s2 = 0;
            }
        }
        if (((*(u8 *)D_00591E4C) == 0) && ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x3000) && !(func_009909D0(arg0, 0x100000) & 0xFF) && (func_00952420(arg0, temp_s1, 0x2000, 0x310000) != 0)) {
            var_s2 = 0;
        }
    }
    if ((*(u8 *)D_00591E4C) == 0) {
        if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) >= 0x4001) {
            var_s2 = 0;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x24000U) {
            goto block_17;
        }
    } else if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1000) {
block_17:
        var_s2 = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x16) == 2) {
        var_s2 = 0;
    }
    if (var_s2 != 0) {
        func_00961940(arg0, 1);
        return 4;
    }
    return 3;
}

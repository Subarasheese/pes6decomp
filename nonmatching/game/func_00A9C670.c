/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A13E50(s32, s32, M2C_UNK *, s32);        /* extern */
s32 func_00A1FE80(s32, s32);                        /* extern */
s32 func_00BC03A0(u16);                             /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

s32 func_00A9C670(void *arg0) {
    s32 temp_a1;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_a3;

    if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_v0 >= 0x1101) {
            return temp_v0;
        }
    }
    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) >= 0x11) {
        return func_00A1FE80(M2C_FIELD(arg0, s32 *, 0x1C) + 0x200, 0x1100);
    }
    temp_v0_2 = func_00BC03A0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30));
    if ((temp_v0_2 != 0x25) && (temp_v0_2 != 0x24)) {
        temp_a3 = M2C_FIELD(arg0, u8 *, 0x12);
        temp_a3_2 = temp_a3 * 0x69;
        temp_a1 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a3 * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
        if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= (f32) (((temp_a1 * -0x30) / 183) + ((u32) (temp_a1 * -0x30) >> 0x1F)))) {
            var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if (var_v0 >= 0xBC1) {
                var_v0_2 = func_00A13E50(M2C_FIELD(arg0, s32 *, 0x1C) + 0x400, M2C_FIELD(arg0, s32 *, 0x58), ((void *)Pes6MatchSquads), temp_a3_2);
            } else {
                goto block_13;
            }
        } else {
block_13:
            var_v0_2 = func_00A13E50(M2C_FIELD(arg0, s32 *, 0x1C) + 0x600, M2C_FIELD(arg0, s32 *, 0x58), ((void *)Pes6MatchSquads), temp_a3_2);
        }
        var_s0 = func_00A1FE80(var_v0_2, 0x1500 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC));
    } else {
        var_s0 = M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return var_s0;
}

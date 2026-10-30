/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099DFF0(void *);                          /* extern */
s32 func_009B30B0(s32, u16);                        /* extern */
s32 func_00AA3540();                                /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

s32 func_00A0CE20(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    if (func_00AA3540() < 0x40000) {
        return 0;
    }
    var_v1 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    if (var_v1 <= 0) {
        var_v1 = -var_v1;
    }
    if (var_v1 < 0xBC1) {
        temp_a1 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
        if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < (f32) (((temp_a1 * -0x90) / 183) + ((u32) (temp_a1 * -0x90) >> 0x1F)))) {
            goto block_7;
        }
    }
    if ((func_009B30B0(func_0099DFF0(arg0), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x31) {
        return 1;
    }
block_7:
    return 0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00AA3540();                                /* extern */
extern void *Pes6Ball_Current;
extern char D_005926EC[];
extern char Pes6MatchSquads[];

s32 func_00A0CCA0(void *arg0) {
    s32 temp_a0;
    s32 var_v0;
    void *temp_s1;
    void *temp_v0;

    if (func_00AA3540() >= 0x40000) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x21) {
            goto block_5;
        }
        temp_s1 = Pes6Ball_Current;
        temp_v0 = ((*(u8 *)D_005926EC) * 4) + temp_s1;
        if ((func_009B30B0(func_009B3480(arg0, M2C_FIELD(temp_v0, f32 *, 0x47C), M2C_FIELD(temp_v0, f32 *, 0xB7C)), M2C_FIELD(temp_s1, u16 *, 0x58)) & 0xFFFF) >= 0x21) {
            goto block_12;
        }
block_5:
        temp_a0 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
        if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < (f32) (((temp_a0 * -0x40) / 183) + ((u32) (temp_a0 * -0x40) >> 0x1F)))) {
            var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if (var_v0 < 0x8D1) {
                goto block_12;
            }
            goto block_10;
        }
block_10:
        return 1;
    }
block_12:
    return 0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_00A14EC0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

s32 func_009637C0(void *arg0) {
    s32 temp_a0;
    s32 var_s1;
    u8 temp_s0;

    var_s1 = 0;
    if (func_00A14EC0(arg0) != 0) {
        temp_s0 = M2C_FIELD(Pes6Ball_Current, u8 *, 0x68);
        if ((s32) temp_s0 < func_002AE670(0xE0)) {
            temp_a0 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            if (!(M2C_FIELD((((temp_s0 & 0xFF) * 4) + Pes6Ball_Current), f32 *, 0x7FC) <= (f32) (((temp_a0 * -0x90) / 183) + ((u32) (temp_a0 * -0x90) >> 0x1F)))) {
                var_s1 = 1;
            }
        }
    }
    return var_s1;
}

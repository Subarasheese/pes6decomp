/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00BBB8C0(s32);                             /* extern */
extern char Pes6MatchSquads[];

s32 func_00AA2B40(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = (0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U)) + 0x63;
    var_v0 = temp_v1 >> 1;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 1) >> 1;
    }
    temp_a0 = ((var_v0 * arg1) / 200) + ((u32) (var_v0 * arg1) >> 0x1F);
    temp_s0 = ((temp_a0 * 5) / 10) + ((u32) (temp_a0 * 5) >> 0x1F);
    return temp_s0 + func_00BBB8C0(temp_s0);
}

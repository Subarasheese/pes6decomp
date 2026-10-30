/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern char D_00591BC0[];
extern char D_00591BE4[];
extern char Pes6MatchSquads[];

void func_00270EE0(void) {
    M2C_UNK *var_s3;
    M2C_UNK *var_s6;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a0;
    s32 var_s4;
    s32 var_s5;
    u32 temp_s0;

    var_s5 = 0;
    var_s6 = ((void *)Pes6MatchSquads);
    temp_s2 = ((*(u8 *)D_00591BC0) + 1) & 0xFF;
    do {
        var_s4 = 0;
        var_s3 = var_s6;
loop_2:
        temp_s0 = M2C_FIELD(var_s3, u8 *, 0x6D) & 0x7F;
        temp_s1 = 2 - M2C_FIELD(var_s3, u8 *, 0x15);
        temp_a2 = (temp_s1 * 3) + func_00288670(temp_s0, 0x32U);
        if ((s32) temp_s0 >= 0x46) {
            var_a0 = (temp_s0 * temp_s0 * 3) + ((temp_s0 - 0x46) * 0xC8);
        } else {
            var_a0 = 0x396C;
        }
        M2C_FIELD(var_s3, s32 *, 0xD8) = (s32) (temp_s2 * (var_a0 + (temp_a2 * 0x78)) * 0x64);
        var_s4 += 1;
        M2C_FIELD(var_s3, s32 *, 0xD8) = (s32) (M2C_FIELD(var_s3, s32 *, 0xD8) + (temp_s2 * (temp_s0 * 0xC8) * 0x64));
        M2C_FIELD(var_s3, s32 *, 0x18) = (s32) M2C_FIELD(var_s3, s32 *, 0xD8);
        M2C_FIELD(var_s3, s32 *, 0xC0) = (s32) M2C_FIELD(var_s3, s32 *, 0xD8);
        M2C_FIELD(var_s3, s32 *, 0xE0) = (s32) ((*(u8 *)D_00591BE4) * 0x3E8);
        var_s3 += 0x348;
        if (var_s4 < 0x20) {
            goto loop_2;
        }
        var_s5 += 1;
        var_s6 += 0x6900;
    } while (var_s5 < 2);
}

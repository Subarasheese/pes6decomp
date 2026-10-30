/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
extern u32 func_00288670(u32, u32);
extern char D_0058E7F0[];
extern char Pes6MatchSquads[];

void func_00287650(void) {
    M2C_UNK *var_s3;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    u32 temp_s0;
    u32 temp_v1;
    void *temp_v0;

    var_s3 = ((void *)D_0058E7F0);
    var_s2 = 0;
    do {
        temp_v0 = (M2C_FIELD(var_s3, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s3, u8 *, 0x12) * 0x6900));
        temp_v1 = M2C_FIELD(temp_v0, u32 *, 0xD8);
        if (temp_v1 == 0) {
            M2C_FIELD(var_s3, u8 *, 0x5C) = func_002AE670(0x14);
            M2C_FIELD(var_s3, s8 *, 0x5E) = func_002AE670(0x1E);
        } else {
            temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x18);
            var_s1 = temp_v0_2 >> 1;
            if (temp_v0_2 < 0) {
                var_s1 = (s32) (temp_v0_2 + 1) >> 1;
            }
            if (temp_v1 >= (u32) var_s1) {
                M2C_FIELD(var_s3, u8 *, 0x5C) = 0U;
                M2C_FIELD(var_s3, s8 *, 0x5E) = 0;
            } else {
                temp_s0 = var_s1 - temp_v1;
                M2C_FIELD(var_s3, u8 *, 0x5C) = (u8) (temp_s0 / (u32) ((u32) var_s1 / func_002AE670(0x14)));
                M2C_FIELD(var_s3, s8 *, 0x5E) = (s8) (temp_s0 / (u32) ((u32) var_s1 / func_002AE670(0x1E)));
            }
        }
        var_s2 = (var_s2 + 1) & 0xFF;
        M2C_FIELD(var_s3, s32 *, 0x58) = (s32) ((0x1D76 - (M2C_FIELD(var_s3, u8 *, 0x5C) * 0x10)) + (func_00288670(M2C_FIELD(((M2C_FIELD(var_s3, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s3, u8 *, 0x12) * 0x6900))), u8 *, 0x6E) & 0x7F, 0x28U) * 0xC));
        var_s3 += 0x240;
    } while (var_s2 < 0x16);
}

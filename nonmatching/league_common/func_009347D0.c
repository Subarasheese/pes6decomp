/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
void *func_00224520(u8, s32);                       /* extern */
s32 func_00224BC0(u8, s32);                         /* extern */
s32 func_00225B20(u8);                              /* extern */
extern s32 D_003E77B0;
extern char Pes6MatchSquads[];

void func_009347D0(void) {
    s32 temp_a1;
    s32 temp_s4;
    s32 var_s2;
    s32 var_s3;
    u32 temp_v1;
    u8 temp_s1;
    void *temp_v0;
    void *var_s0;

    var_s2 = 0;
    do {
        temp_s1 = M2C_FIELD((D_003E77B0 + (var_s2 % 2)), u8 *, 0x2C);
        if (((s32) temp_s1 < 0x50) && (func_00225B20(temp_s1) != 0)) {
            var_s3 = 0;
            var_s0 = ((void *)Pes6MatchSquads) + (((var_s2 != 0) & 0xFF) * 0x6900);
            do {
                temp_s4 = func_00224BC0(temp_s1, var_s3 & 0xFF) & 0xFFFF;
                temp_a1 = func_002243B0((s32) temp_s1, var_s3 & 0xFF) & 0xFF;
                if (temp_s4 & 0xFFFF) {
                    temp_v0 = func_00224520(temp_s1, temp_a1);
                    if (temp_v0 != NULL) {
                        temp_v1 = ((M2C_FIELD(var_s0, u32 *, 0xD8) / 100) + ((u32) M2C_FIELD(var_s0, u32 *, 0xD8) >> 0x1F)) * M2C_FIELD(temp_v0, u8 *, 1);
                        M2C_FIELD(var_s0, u32 *, 0xD8) = temp_v1;
                        M2C_FIELD(var_s0, u32 *, 0xC0) = temp_v1;
                    }
                }
                var_s3 += 1;
                var_s0 += 0x348;
            } while (var_s3 < 0x20);
        }
        var_s2 += 1;
    } while (var_s2 < 2);
}

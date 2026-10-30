/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
s32 func_009B33A0(u8 *, s32, s32);                  /* extern */
extern s32 Pes6Ball_Current;
extern char D_0058E7F0[];
extern char D_00592371[];
extern char D_005926E4[];

void func_0092C0D0(void) {
    f32 var_f12;
    s32 temp_f0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s3;
    u8 *var_s2;
    u8 var_s0;
    void *temp_v0;

    var_s3 = 0;
    var_s2 = ((void *)D_0058E7F0);
    var_s0 = 0xFF;
    var_s1 = 0x7FFFFFFF;
    do {
        temp_v0 = Pes6Ball_Current + ((*(u8 *)D_005926E4) * 4);
        temp_v0_2 = func_009B33A0(var_s2, (s32) M2C_FIELD(temp_v0, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0, f32 *, 0xB7C));
        if (temp_v0_2 < 0) {
            var_f12 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
        } else {
            var_f12 = (f32) temp_v0_2;
        }
        temp_f0 = (s32) func_001CD9E0(var_f12);
        if (temp_f0 < var_s1) {
            var_s0 = *var_s2;
            var_s1 = temp_f0;
        }
        var_s3 += 1;
        var_s2 += 0x240;
    } while (var_s3 < 0x16);
    (*(u8 *)D_00592371) = var_s0;
}

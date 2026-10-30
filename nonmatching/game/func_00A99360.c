/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_002955F0(void);
s32 func_002955A0();                                /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern f32 *D_003E74CC;
extern char D_00592A58[];
extern char D_00592A5C[];

void func_00A99360(void *arg0, s32 arg1) {
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 *temp_a2;
    s32 temp_a0;
    s32 temp_f0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v1;

    var_s1 = arg1;
    if (((func_009E1C90(1) & 0xFF) == 1) && (M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (M2C_FIELD(arg0, u8 *, 0) != 0)) {
        if (var_s1 < 0) {
            temp_s0 = (s32) (func_002955F0() - 28.0f);
            temp_a0 = func_002955A0() & 0xFF;
            var_v1 = temp_s0 + (((temp_a0 - 0x3C) / 10) + ((u32) (temp_a0 - 0x3C) >> 0x1F));
            if (var_v1 < 0) {
                var_v1 = 0;
            }
            if (var_v1 >= 0xB) {
                var_v1 = 0xA;
            }
            temp_v1 = var_v1 + 0x64;
            var_s1 = ((var_s1 * temp_v1) / 100) + ((u32) (var_s1 * temp_v1) >> 0x1F);
        }
        temp_a2 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)D_00592A58) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
        temp_f0 = (s32) ((f32) var_s1 * *D_003E74CC);
        *temp_a2 += temp_f0;
        temp_a1 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)D_00592A58) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
        if (*temp_a1 < 0) {
            *temp_a1 = 0;
        }
        temp_a1_2 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)D_00592A5C) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
        *temp_a1_2 += temp_f0;
    }
}

/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern float func_002955F0(void);
extern s32 func_002955A0(void);
extern s32 func_009E1C90(s32);
extern f32 *D_003E74CC[];
extern char D_00592A58[];
extern char D_00592A5C[];

void func_00A99360(void *arg0, s32 arg1) {
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 *temp_a2;
    s32 temp_a0;
    s32 temp_f0;
    s32 temp_s0;
    s32 var_s1;
    s32 var_v1;

    var_s1 = arg1;
    if (((func_009E1C90(1) & 0xFF) == 1) && (M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (M2C_FIELD(arg0, u8 *, 0) != 0)) {
        if (var_s1 < 0) {
            temp_s0 = (s32) (func_002955F0() - 28.0f);
            temp_a0 = func_002955A0() & 0xFF;
            var_v1 = temp_s0 + ((temp_a0 - 0x3C) / 10);
            if (var_v1 < 0) {
                var_v1 = 0;
            }
            if (var_v1 >= 0xB) {
                var_v1 = 0xA;
            }
            var_s1 = (var_s1 * (var_v1 + 0x64)) / 100;
        }
        temp_a2 = (s32 *)(D_00592A58 + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348));
        temp_f0 = (s32) ((f32) var_s1 * D_003E74CC[0][0]);
        *temp_a2 += temp_f0;
        temp_a1 = (s32 *)(D_00592A58 + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348));
        if (*temp_a1 < 0) {
            *temp_a1 = 0;
        }
        temp_a1_2 = (s32 *)(D_00592A5C + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348));
        *temp_a1_2 += temp_f0;
    }
}

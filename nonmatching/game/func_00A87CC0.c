/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00288670(u32, u32);
s32 func_009B30B0(s32, s32);                    /* extern */
s32 func_00A1FE80(s32, s32);                    /* extern */
extern char Pes6MatchSquads[];

s32 func_00A87CC0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s32 ret;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    u8 *player;

    if ((arg2 & 0xFFFF) < 0x8000) {
        ret = func_009B30B0(arg2, 0x4000);
    } else {
        ret = func_009B30B0(arg2, 0xC000);
    }
    var_a0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(arg1, f32 *, 0xE8));
    if (var_a0 <= 0) {
        var_a0 = -var_a0;
    }
    temp_s0 = func_00A1FE80(var_a0, 0x500);
    var_s1 = (((ret & 0xFFFF) * 0xA00) / 64) + 0x200;
    player = (u8 *)Pes6MatchSquads + M2C_FIELD(arg0, u8 *, 0x12) * 0x6900 + M2C_FIELD(arg0, u8 *, 0x11) * 0x348;
    if (func_00288670(player[0x81] & 0x7F, 0x28) >= 0x3D) {
        player = (u8 *)Pes6MatchSquads + M2C_FIELD(arg0, u8 *, 0x12) * 0x6900 + M2C_FIELD(arg0, u8 *, 0x11) * 0x348;
        temp_a0 = func_00288670(player[0x81] & 0x7F, 0x28) - 0x3C;
        var_v0 = ((temp_a0 * 0x600) + (var_s1 * (0x28 - temp_a0))) / temp_a0;
        if (temp_s0 < var_v0) {
            var_v0 = temp_s0;
        }
        return var_v0;
    }
    if (temp_s0 < var_s1) {
        var_s1 = temp_s0;
    }
    return var_s1;
}

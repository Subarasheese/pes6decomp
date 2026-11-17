/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002AE630(s32);
extern u32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
s32 func_009B30B0(u16, u16);
s32 func_00A1FE80(s32, s32);
s32 func_00BBB780(s64);
s32 func_00BBB8C0(s32);
extern char *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_005926D8[];
extern char Pes6MatchSquads[];

s32 func_00A7F1F0(char *arg0) {
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_s0;
    s32 v;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0_2;
    s32 t;

    v = *(s32 *)(Pes6Ball_Current + 0x50);
    var_s1 = func_00A1FE80(*(s32 *)(arg0 + 0x1C) + 0x200 + (v / 64), 0x1100);
    temp_a0 = func_009B30B0(*(u16 *)(arg0 + 0x26), *(u16 *)(Pes6Ball_Current + 0x58)) & 0xFFFF;
    if (*(s32 *)(arg0 + 0x1C) < *(s32 *)(Pes6Ball_Current + 0x50)) {
        temp_s0 = temp_a0 & 0xFFFF;
        if (temp_s0 < 0x29) {
            if (temp_s0 >= 0x11) {
                if (func_00BBB780((s16)(func_00288670(*(u8 *)(Pes6MatchSquads + *(u8 *)(arg0 + 0x12) * 0x6900 + *(u8 *)(arg0 + 0x11) * 0x348 + 0x80) & 0x7F, 0x28U) - 0x32)) & 0xFF) {
                    t = (0x28 - temp_s0) * *(s32 *)(Pes6Ball_Current + 0x50);
                    var_v0_2 = t / 256;
                } else {
                    t = (0x28 - temp_s0) * *(s32 *)(Pes6Ball_Current + 0x50);
                    var_v0_2 = t / 192;
                }
            } else if (func_00BBB780((s16)(func_00288670(*(u8 *)(Pes6MatchSquads + *(u8 *)(arg0 + 0x12) * 0x6900 + *(u8 *)(arg0 + 0x11) * 0x348 + 0x80) & 0x7F, 0x28U) - 0x32)) & 0xFF) {
                t = (0x18 - temp_s0) * *(s32 *)(Pes6Ball_Current + 0x50);
                var_v0_2 = t / 192;
            } else {
                t = (0x28 - temp_s0) * *(s32 *)(Pes6Ball_Current + 0x50);
                var_v0_2 = t / 192;
            }
            var_s1 += var_v0_2;
        }
    }
    temp_f20 = *(f32 *)D_005926D8;
    if (temp_f20 <= (f32) func_002AE670(0x40)) {
        func_002AE630((s32) temp_f20);
        func_002AE670(0x28);
    }
    if (*(u8 *)arg0 != *(u8 *)D_00591E19
        && !(func_00BBB780((s16)func_00288670(*(u8 *)(Pes6MatchSquads + *(u8 *)(arg0 + 0x12) * 0x6900 + *(u8 *)(arg0 + 0x11) * 0x348 + 0x80) & 0x7F, 0x28U)) & 0xFF)) {
        v = (s32) *(f32 *)(Pes6Ball_Current + 0x30);
        if (v <= 0) {
            var_s0 = -v;
            v = -v;
        } else {
            var_s0 = v;
        }
        var_s1 += func_00BBB8C0(v / 8) + (var_s0 / 16);
    }
    return var_s1;
}

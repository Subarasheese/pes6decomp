/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

f32 func_001CD9E0(f32);
s32 func_009B30B0(u16, u16);
u32 func_009B33A0(void *, s32, s32);
s32 func_009B3480(void *, f32, f32);
s32 func_00A0FC40(void *, s32, s32);
s32 func_00A9B100(void *);
extern void *Pes6Ball_Current;

void func_00C1C210(void *arg0) {
    s32 var_s1;
    s32 var_v0;
    s32 var_a2;
    s32 temp_v0_2;
    u16 temp_s0;
    char *b;

    b = Pes6Ball_Current;
    var_s1 = (s32)func_001CD9E0((f32)func_009B33A0(arg0, (s32)*(f32 *)(b + 0x1454), (s32)*(f32 *)(b + 0x145C)));
    b = Pes6Ball_Current;
    temp_s0 = func_009B3480(arg0, *(f32 *)(b + 0x1454), *(f32 *)(b + 0x145C)) & 0xFFFF;
    var_v0 = (s32)*(f32 *)((char *)arg0 + 0xE0);
    if (var_v0 > 0) {
    } else {
        var_v0 = -var_v0;
    }
    if ((f32)var_v0 < 939.0f) {
        b = Pes6Ball_Current;
        if (((func_009B30B0(*(u16 *)(b + 0x58), temp_s0) & 0xFFFF) < 0x31) && (var_s1 >= 0x81) && (var_s1 < 0x100)) {
            b = Pes6Ball_Current;
            if ((func_009B30B0(*(u16 *)(b + 0x58), *(u16 *)(b + 0x5C)) & 0xFFFF) >= 0x30) {
                if ((func_009B30B0(*(u16 *)((char *)arg0 + 0xA8), temp_s0) & 0xFFFF) < 0x61) {
                    b = Pes6Ball_Current;
                    if (*(s32 *)(b + 0x50) >= 0x801) {
                        var_s1 = 0x200;
                    }
                }
            }
        }
    }
    b = Pes6Ball_Current;
    if (*(u16 *)(b + 0x84) == 4) {
        if (((f32)*(s16 *)((char *)arg0 + 0x14) * *(f32 *)((char *)arg0 + 0xE0)) < -13209.0f) {
            var_a2 = 0x50;
        } else {
            var_a2 = 0xA0;
        }
    } else {
        temp_v0_2 = func_00A9B100(arg0);
        var_a2 = temp_v0_2 >> 1;
        if (temp_v0_2 < 0) {
            var_a2 = (temp_v0_2 + 1) >> 1;
        }
    }
    if (func_00A0FC40(arg0, var_s1, var_a2) == 0) {
        *(s16 *)((char *)arg0 + 0x18) = 1;
    } else {
        *(s16 *)((char *)arg0 + 0x18) = 2;
    }
}

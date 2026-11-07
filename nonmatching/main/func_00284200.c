/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009F42B0(M2C_UNK);                         /* extern */
s32 func_00BBB7F0(s32);                             /* extern */
s32 func_00BBB8C0(s32);                             /* extern */
extern void *Pes6Ball_Current;

s32 func_00284200(void *arg0, s32 arg1) {
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    void *temp_s2;

    temp_s2 = Pes6Ball_Current;
    if ((M2C_FIELD(temp_s2, s32 *, 0x50) >= 0x4001) && (M2C_FIELD(temp_s2, f32 *, 0x30) < -1504.0f) && (M2C_FIELD(temp_s2, f32 *, 0x7FC) < (f32) func_009F42B0(-0x120))) {
        var_s0 = (s32) (-4.0f + (((-M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) / 188.0f) * (f32) (func_00BBB8C0(8) + 0xC)) / 10.0f));
    } else {
        temp_v0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
        temp_s2_2 = (s32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) / 188.0f);
        var_a0 = temp_v0 >> 0xA;
        if (temp_v0 < 0) {
            var_a0 = (s32) (temp_v0 + 0x3FF) >> 0xA;
        }
        var_s0 = -temp_s2_2 + func_00BBB7F0(var_a0);
        if ((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), arg1) & 0xFFFF) >= 0x51) {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
            var_a0_2 = temp_v0_2 >> 0xA;
            if (temp_v0_2 < 0) {
                var_a0_2 = (s32) (temp_v0_2 + 0x3FF) >> 0xA;
            }
            var_s0 += func_00BBB8C0(var_a0_2);
        }
    }
    if (var_s0 >= 0x41) {
        var_s0 = 0x40;
    }
    if (var_s0 < -0x40) {
        var_s0 = -0x40;
    }
    return var_s0;
}

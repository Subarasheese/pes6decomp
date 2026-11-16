/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001EEDA0(void *, u8);
extern f32 func_001BE080(s32, s32, f32);
extern char D_00398620[];

void func_001BDF00(void *arg0) {
    f32 sp90[3];
    char *var_s2;
    s32 temp_a2;
    s32 temp_f0;
    s32 temp_s7;
    s32 var_s6;
    s32 var_v0;
    s32 i;
    void *temp_s4;

    sp90[0] = 0; sp90[1] = 0; sp90[2] = 0;
    var_s6 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x20);
    temp_s7 = (s32) M2C_FIELD(arg0, f32 *, 0x2C);
    if (var_s6 != temp_a2) {
        if (var_s6 < temp_a2) {
            var_s6 += 0x18;
            if (temp_a2 < var_s6) {
                var_s6 = temp_a2;
            }
        } else if (temp_a2 < var_s6) {
            var_s6 -= 0x18;
            if (var_s6 < temp_a2) {
                var_s6 = temp_a2;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_s6;
    }
    var_s2 = D_00398620;
    for (i = 0; i < 2; i++) {
        temp_s4 = M2C_FIELD(arg0, void **, 8 + i * 4);
        if (temp_s4 != NULL) {
            temp_f0 = (s32) ((func_001BE080(M2C_FIELD(var_s2, s32 *, 4), M2C_FIELD(var_s2, s32 *, 0), (f32) temp_s7) * (f32) var_s6) / 100.0f);
            if (temp_f0 < 0x100) {
                var_v0 = temp_f0;
            } else {
                var_v0 = 0xFF;
            }
            func_001EEDA0(temp_s4, var_v0 & 0xFF);
            sp90[i] = (f32) temp_f0;
        }
        var_s2 += 8;
    }
}

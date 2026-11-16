/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002E0E90(void *, s32, s32);

void func_002DEF50(void *arg0, s32 arg1) {
    f32 var_f1;
    s32 temp_a3;

    if (arg0 != NULL) {
        if ((arg1 & 0xFF) == 0xFF) {
            M2C_FIELD(arg0, s8 *, 0xA) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0xA) = 1;
        }
        if (arg1 < 0) {
            temp_a3 = (s32) (((u32) arg1 >> 1) | (arg1 & 1));
            var_f1 = (f32) temp_a3;
            var_f1 = var_f1 + var_f1;
        } else {
            var_f1 = (f32) arg1;
        }
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) (var_f1 / 255.0f);
        temp_a3 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a3 == 3) {
            func_002E0E90(arg0, 0, arg1);
        } else if (temp_a3 == 7) {
            func_002E0E90(arg0, 0, 0x4C);
        } else if (temp_a3 == 5 || temp_a3 == 1) {
            func_002E0E90(arg0, 0, 0xFF);
        } else if (temp_a3 == 0) {
            func_002E0E90(arg0, 1, 0xFF);
        }
    }
}

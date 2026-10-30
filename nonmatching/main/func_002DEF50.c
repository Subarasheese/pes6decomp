/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E0E90(M2C_UNK, s32, s32);           /* extern */

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
            var_f1 = 2.0f * (f32) (((u32) arg1 >> 1) | (arg1 & 1));
        } else {
            var_f1 = (f32) arg1;
        }
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) (var_f1 / 255.0f);
        temp_a3 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_a3) {                          /* irregular */
        case 3:
            func_002E0E90(0, arg1, temp_a3);
            break;
        case 7:
            func_002E0E90(0, 0x4C, temp_a3);
            return;
        case 0:
            func_002E0E90(1, 0xFF, temp_a3);
            return;
        case 5:
        case 1:
            func_002E0E90(0, 0xFF, temp_a3);
            return;
        }
    }
}

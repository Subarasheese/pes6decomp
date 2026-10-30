/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002E1540(void *, void *);
M2C_UNK func_00212570(void *, f32 *);               /* extern */

void func_00211900(void *arg0, s32 arg1, s32 arg2) {
    f32 sp20;
    f32 var_f0;
    f32 var_f3;
    u8 temp_a3;

    temp_a3 = M2C_FIELD(arg0, u8 *, 0);
    switch (temp_a3) {                              /* irregular */
    case 3:
        M2C_FIELD(arg0, s8 *, 3) = (s8) (M2C_FIELD(arg0, s8 *, 3) + 1);
        func_002E1540(arg0 + 0x28, &sp20);
        if (M2C_FIELD(arg0, u8 *, 1) == 2) {
            var_f0 = 10.0f;
        } else {
            var_f0 = 0.0f;
        }
        sp20 = ((5.0f * (f32) M2C_FIELD(arg0, s8 *, 3)) / 4.0f) + (var_f0 - 5.0f);
        func_00212570(arg0, &sp20);
        if (M2C_FIELD(arg0, s8 *, 3) >= 4) {
            M2C_FIELD(arg0, u8 *, 0) = 0U;
        }
        return;
    case 1:
        M2C_FIELD(arg0, s8 *, 3) = (s8) (M2C_FIELD(arg0, s8 *, 3) + 1);
        func_002E1540(arg0 + 0x28, &sp20);
        if (M2C_FIELD(arg0, u8 *, 1) == 2) {
            var_f3 = 10.0f;
        } else {
            var_f3 = 0.0f;
        }
        sp20 = var_f3 - ((5.0f * (f32) M2C_FIELD(arg0, s8 *, 3)) / 4.0f);
        func_00212570(arg0, &sp20);
        if (M2C_FIELD(arg0, s8 *, 3) >= 4) {
            M2C_FIELD(arg0, u8 *, 0) = 2U;
            return;
        }
        break;
    case 0:
        if (arg1 == arg2) {
            M2C_FIELD(arg0, s8 *, 3) = 0;
            M2C_FIELD(arg0, u8 *, 0) = 1U;
            return;
        }
        break;
    case 2:
        if (arg1 != arg2) {
            M2C_FIELD(arg0, s8 *, 3) = 0;
            M2C_FIELD(arg0, u8 *, 0) = 3U;
            return;
        }
        break;
    }
}

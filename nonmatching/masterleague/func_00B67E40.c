/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226E70(void);
extern u32 func_00B68690(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u8 func_00949130(u8, M2C_UNK, s32, s32);            /* extern */
M2C_UNK func_00B67530(s32);                         /* extern */

s32 func_00B67E40(void) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_00B68690();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x150);
        switch (temp_v1) {                          /* irregular */
        case 4:
            var_s1 = 8;
            var_a2 = 8;
            break;
        default:
            var_s1 = 0x10;
            var_a2 = 8;
            break;
        case 5:
            if (func_00226E70() == 0) {
                var_v0 = 3;
            } else {
                var_v0 = 4;
            }
            var_s1 = var_v0 & 0xFF;
            if (func_00226E70() == 0) {
                var_v0_2 = 3;
            } else {
                var_v0_2 = 4;
            }
            var_a2 = var_v0_2 & 0xFF;
            break;
        }
        temp_v0_2 = func_00949130(M2C_FIELD(temp_v0, u8 *, 0x144), 2, var_a2, var_s1);
        M2C_FIELD(temp_v0, u8 *, 0x144) = temp_v0_2;
        func_00B67530(temp_v0_2 & 0xFF);
        func_0026E840(0x8400F802);
    }
    return 0;
}

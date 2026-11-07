/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001DEF70(s32, f32);                    /* extern */
s32 func_002F9630();                                /* extern */
void *func_002F96F0(s32, s32);                      /* extern */

void func_002FA450(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s1;
    void *temp_v0_2;

    temp_v0 = func_002F9630();
    var_s1 = 0;
    if (temp_v0 > 0) {
        do {
            temp_v0_2 = func_002F96F0(arg0, var_s1);
            if (temp_v0_2 != NULL) {
                func_001DEF70(M2C_FIELD(temp_v0_2, s32 *, 0xC), (f32) arg1);
            }
            var_s1 += 1;
        } while (var_s1 < temp_v0);
    }
}

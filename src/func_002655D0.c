/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_001BB370(void *);                        /* extern */
M2C_UNK func_00256DE0(s32, void *);                 /* extern */
void *func_00256E30(s32);                           /* extern */
s32 func_00265B40(s32, s32);                        /* extern */
s32 func_00265C70(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

s32 func_002655D0(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0_3;
    s32 var_s2;
    void *temp_v0;
    void *temp_v0_2;

    var_s2 = 0;
    if (arg0 != NULL) {
        temp_v0 = func_00256E30(*arg0);
        temp_v0_2 = func_001BB370(temp_v0);
        if (temp_v0_2 == NULL) {
            func_00256DE0(*arg0, temp_v0);
        }
        if (temp_v0_2 != NULL) {
            temp_v0_3 = func_00265B40(arg1, arg2);
            if (temp_v0_3 != 0) {
                M2C_FIELD(temp_v0_2, s32 *, 0x10) = arg1;
                M2C_FIELD(temp_v0_2, s32 *, 0x14) = arg2;
                M2C_FIELD(temp_v0_2, s32 *, 0x18) = temp_v0_3;
                var_s2 = func_00265C70(temp_v0_3, 0, 0, 0);
            } else if (temp_v0_2 != NULL) {
                func_00256DE0(*arg0, temp_v0_2);
            }
        }
    }
    return var_s2;
}

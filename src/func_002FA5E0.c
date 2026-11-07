/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001DF460(s32, void *);                 /* extern */
void *func_002F96F0(s32, s32);                      /* extern */

void func_002FA5E0(s32 arg0, s32 *arg1, s32 arg2) {
    s32 var_s1;
    s32 *var_s0;
    void *temp_v0;

    var_s1 = 0;
    if (arg2 > 0) {
        var_s0 = arg1;
        do {
            temp_v0 = func_002F96F0(arg0, *var_s0);
            if (temp_v0 != NULL) {
                func_001DF460(M2C_FIELD(temp_v0, s32 *, 0xC), var_s0 + 1);
            }
            var_s1 += 1;
            var_s0 += 2;
        } while (var_s1 < arg2);
    }
}

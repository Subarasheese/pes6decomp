/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001BB4F0(s32);                         /* extern */

void func_00256EF0(void *arg0, s32 arg1) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 4);
        if ((temp_a0 != 0) && (arg1 != 0)) {
            func_001BB4F0(temp_a0);
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
        }
    }
}

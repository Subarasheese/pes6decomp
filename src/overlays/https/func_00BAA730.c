/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, s32);

s32 func_00BAA730(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0);
    if (arg2 < temp_a2) {
        if (arg1 != 0) {
            func_001C4730(arg1, M2C_FIELD(arg0, s32 *, 4), arg2);
        }
        temp_a0 = M2C_FIELD(arg0, s32 *, 4);
        func_001C4730(temp_a0, temp_a0 + arg2, M2C_FIELD(arg0, s32 *, 0) - arg2);
        M2C_FIELD(arg0, s32 *, 0) = (s32)(M2C_FIELD(arg0, s32 *, 0) - arg2);
    } else {
        if (arg1 != 0) {
            func_001C4730(arg1, M2C_FIELD(arg0, s32 *, 4), temp_a2);
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    return arg2;
}

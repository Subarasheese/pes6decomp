/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002BE490(s32, s32);
extern s32 func_002928B0(s32);

s32 func_00BDBD60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_a3;
    s32 temp_v0;

    if ((arg1 == 0) || (arg2 == 0) || (arg3 == 0) || ((arg5 != 0) && (arg4 == 0))) {
        temp_s0 = (s16)func_002BE490(arg0 & 0xFF, 1);
        return temp_s0 - (s16)func_002BE490((arg0 ^ 1) & 0xFF, 1);
    }
    temp_s2 = (s16)func_002928B0(arg0);
    temp_s1 = (s16)func_002BE490(arg0 & 0xFF, 0);
    temp_s0_2 = (s16)func_002928B0(arg0 ^ 1);
    temp_a3 = (s16)func_002BE490((arg0 ^ 1) & 0xFF, 0);
    temp_v0 = (temp_s2 + temp_s1) - (temp_s0_2 + temp_a3);
    if (temp_v0 == 0) {
        return ((temp_s2 * ((arg0 != 0) ? 1 : 2)) + (temp_s1 * ((arg0 != 0) ? 2 : 1))) - ((temp_s0_2 * ((arg0 != 0) ? 2 : 1)) + (temp_a3 * ((arg0 != 0) ? 1 : 2)));
    }
    return temp_v0;
}

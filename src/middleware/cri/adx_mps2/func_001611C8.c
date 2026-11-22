/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_00178E50(s32, s32);

u32 func_001611C8(s8 *arg0, s32 arg1) {
    s32 value1;
    value1 = func_00178E50(((s32 *)(((s8 **)((((s32 *)(arg0))[3] + (arg1 << 2))))[2]))[1], 1);
    return ((u32)(value1) >> 1);
}

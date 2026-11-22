/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00A97C30(s32 value, s32 upper, s32 lower) {
    if (upper <= lower)
        return value;
    return value / (s32)((u32)upper - (u32)lower);
}

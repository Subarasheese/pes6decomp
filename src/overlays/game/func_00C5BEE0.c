/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_002C1FD0(u32 first, u32 last, s32 group, s32 filter);
extern u32 func_00C13840(void);
s32 func_00C5BEE0(u32 first, u32 last, s32 group, s32 (*test)(s32 *count)) {
    s32 result = 0;
    if (first != (u32)-1 && last != (u32)-1 && func_002C1FD0(first, last, group, 0x25)) {
        s32 count = func_002C1FD0(func_00C13840(), last, group, 0x24);
        result = test(&count);
    }
    return result;
}

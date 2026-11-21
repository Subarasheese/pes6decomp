/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

s32 func_00C27298(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        return ((u32)arg0 >> 0x1B) | (arg0 * 2);
    }
    return ((u32)arg0 >> 0x1A) | (arg0 * 4);
}

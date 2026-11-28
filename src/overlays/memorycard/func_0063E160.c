/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern u32 D_003EA184;

u32 func_0063E160(s32 slot, s32 offset) {
    u32 result = 0;
    if (slot >= 0 && slot < 36 && offset >= 0 && (u32)offset < 0x1400) {
        result = D_003EA184;
        result = result + (u32)(offset + slot * 0x1400);
    }
    return result;
}

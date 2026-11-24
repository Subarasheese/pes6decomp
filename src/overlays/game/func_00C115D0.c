/* compiler: mwcc-3.0.1b210 */
#include "types.h"
static inline s32 lowNibble(u8 value) { return value & 15; }
u8 func_00C115D0(u8 packed, u8 increment) {
    s32 byte = (u8)packed;
    s32 add = (u8)increment;
    s32 low = lowNibble(byte);
    s32 total = add + low;
    u8 clipped = total < 15 ? total : 15;
    return (u8)((byte >> 4) | ((u8)clipped & 15));
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_002C6F10(u8 *arg0, s32 *arg1) {
    s32 flags;
    s32 half;
    s32 result;

    half = ((arg0[9] & 0x7F) + 1) >> 1;
    flags = ((arg0[0x21] >> 5) & 1) + ((arg0[0x23] >> 2) & 1) + ((arg0[0x11] >> 7) & 1);
    result = flags * 5 + ((arg0[0x10] >> 7) & 1) * 10 + (arg0[0xB] & 0x7F) + 2 + (arg0[0xA] & 0x7F) + half;
    *arg1 += 0x113;
    return result;
}

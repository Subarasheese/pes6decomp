/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char Pes6MatchSquads[];

s32 func_009F42B0(u8 *arg0, s32 arg1) {
    s32 v;

    v = (Pes6MatchSquads[arg0[0x11] * 0x348 + arg0[0x12] * 0x6900 + 0x8C] & 0xFF) >> 2;
    v += 0x94;
    return (arg1 * v) / 183;
}

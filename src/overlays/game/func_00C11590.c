/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_pitch_grid.h"

u8 func_00C11590(u8 value, u8 increment) {
    s32 sum = (u8)increment + (u8)((u8)value >> 4);
    u8 nibble;
    nibble = (u8)(sum < 15 ? sum : 15);
    return (u8)(((u8)value & 15) | ((nibble & 15) << 4));
}

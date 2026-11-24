/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

f32 func_00C11250(const u8 *values) {
    s32 total = 0;
    s32 i;
    if (values) {
        for (i = 0; i < PITCH_CELLS / 2; ++i) {
            total += (u8)(values[i] >> 4);
            total += (values[i] & 15);
        }
    }
    return total;
}

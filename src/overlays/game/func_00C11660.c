/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

f32 func_00C11660(const u8 *values) {
    f32 total = 0;
    s32 i;
    if (values) {
        for (i = 0; i < PITCH_CELLS; ++i) {
            total += (f32)(u32)values[i];
        }
    }
    return total;
}

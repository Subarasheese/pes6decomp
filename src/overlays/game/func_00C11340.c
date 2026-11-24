/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

f32 func_00C11340(const PackedPitch *pitch, s32 column, s32 row) {
    s32 value = 0;
    int valid = pitch && (u32)column < PITCH_COLUMNS;
    if (valid)
        valid = (u32)row < PITCH_ROWS;
    if (valid) {
        const u8 *cell = &pitch->pairs[column][row / 2];
        value = (*cell >> (4 - 4 * (row & 1))) & 15;
    }
    return value;
}

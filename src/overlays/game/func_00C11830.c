/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

f32 func_00C11830(const BytePitch *pitch, s32 column, s32 row) {
    f32 value = 0;
    int valid = pitch && (u32)column < PITCH_COLUMNS;
    if (valid)
        valid = (u32)row < PITCH_ROWS;
    if (valid) {
        const u8 *cell = &pitch->cells[column][row];
        value = (f32)(u32)*cell;
    }
    return value;
}

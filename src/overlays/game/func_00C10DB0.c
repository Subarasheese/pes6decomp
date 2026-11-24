/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

void func_00C10DB0(FloatPitch *pitch, s32 column, s32 row, f32 value) {
    int valid = pitch && (u32)column < PITCH_COLUMNS;
    if (valid)
        valid = (u32)row < PITCH_ROWS;
    if (valid) {
        value = value > 0.f ? value : 0.f;
        pitch->cells[column][row] = value;
    }
}

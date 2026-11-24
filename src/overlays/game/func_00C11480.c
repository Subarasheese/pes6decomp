/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

extern u8 (*D_00CB33E8[])(u8 value, u8 increment);

void func_00C11480(PackedPitch *pitch, f32 x, f32 z) {
    if (pitch) {
        s32 column = pitchColumn(x);
        s32 row = pitchRow(z);
        u8 *cell = &pitch->pairs[column][row / 2];
        *cell = D_00CB33E8[row & 1](*cell, 1);
    }
}

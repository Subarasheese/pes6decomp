/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

extern u32 D_00CB3310[];

void func_00C119D0(BytePitch *pitch, f32 x, f32 z) {
    if (pitch) {
        s32 column = pitchColumn(x);
        s32 row = pitchRow(z);
        u8 *cell = &pitch->cells[column][row];
        if (*cell < D_00CB3310[0])
            ++*cell;
    }
}

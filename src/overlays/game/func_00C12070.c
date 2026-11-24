/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

extern f32 (*D_00CB33B0[])(void *field);

f32 func_00C12070(const PitchView *view) {
    f32 value = 0.f;
    if (view && view->kind < PITCH_VIEW_KINDS)
        value = D_00CB33B0[view->kind](view->field);
    return value;
}

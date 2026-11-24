/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_pitch_grid.h"
typedef void *(*SelectPitchGrid)(MatchPitchContext *, u8, u8, u8);
extern SelectPitchGrid D_00CB3330[PITCH_VIEW_KINDS];
void func_00C120C0(PitchView *view, u32 kind, u8 team, u8 slot, u8 period) {
    MatchPitchContext *state = &D_00CBDED0;
    if (view && (u32)kind < PITCH_VIEW_KINDS) {
        view->kind = kind;
        view->field = D_00CB3330[kind](state, team, slot, period);
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pitch_grid.h"
extern void func_00C120C0(PitchView *, u32, u8, u8, u8);
void func_002C3B20(PitchView *out, u32 kind, u8 team, u8 slot, u8 period) {
    PitchView view;
    func_00C120C0(&view, kind, team, slot, period);
    *out = view;
}
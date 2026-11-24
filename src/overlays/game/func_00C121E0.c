/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_pitch_grid.h"

void func_00C121E0(u8 team, u8 outgoing, u8 incoming) {
    MatchPitchContext *state = &D_00CBDED0;
    if (team < 2 && (u8)outgoing < 32 && (u8)incoming < 32) {
        u8 first = (u8)func_00C17E10(team, outgoing), second = (u8)func_00C17E10(team, incoming);
        if ((u8)first != 255 && (u8)second != 255) {
            state->assignment[team][first] = state->assignment[team][second];
            state->assignment[team][second] = 255;
        }
    }
}

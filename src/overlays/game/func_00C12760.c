/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

extern MatchPitchContext *D_003EA7BC;
extern void *func_001C48E8(void *dst, s32 byte, u32 size);

void func_00C12760(void) {
    s32 side, slot;
    D_003EA7BC = &D_00CBDED0;
    func_001C48E8(&D_00CBDED0, 0, sizeof(D_00CBDED0));
    for (side = 0; side < PITCH_SIDES; ++side) {
        for (slot = 0; slot < PITCH_PLAYERS; ++slot) {
            if (slot < PITCH_ON_FIELD)
                D_00CBDED0.assignment[side][slot] = (u8)slot;
            else
                D_00CBDED0.assignment[side][slot] = 255;
        }
    }
}

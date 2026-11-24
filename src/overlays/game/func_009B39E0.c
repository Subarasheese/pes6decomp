/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

void func_009B39E0(void) {
    s32 i;
    for (i = 0; i < REPLAY_FRAMES; i++)
        D_00CBAFD0[i].frame = &D_003E758C->frames[i];
    for (i = 1; i < REPLAY_FRAMES; i++)
        D_00CBAFD0[i].previous = &D_00CBAFD0[i - 1];
    for (i = 0; i < REPLAY_FRAMES - 1; i++)
        D_00CBAFD0[i].next = &D_00CBAFD0[i + 1];
    D_00CBAFD0[0].previous = &D_00CBAFD0[REPLAY_FRAMES - 1];
    D_00CBAFD0[REPLAY_FRAMES - 1].next = &D_00CBAFD0[0];
    D_00CBAFD0[D_00CBAA04[0]].previous = &D_00CBAFD0[D_00CBAA04[0]];
    D_00CBAFD0[D_00CBAA02[0]].next = &D_00CBAFD0[D_00CBAA02[0]];
}

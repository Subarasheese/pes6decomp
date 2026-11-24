/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_replay.h"

extern void func_009B5DB0(void);
extern void func_00255E40(u8);
extern void func_00270580(s32);

void func_009B5D20(void) {
    Pes6MatchPlayer *actor = Pes6MatchPlayers;
    u16 i;
    for (i = 0; i < REPLAY_SLOTS; i++, actor++)
        func_009B5FD0(actor, i);
    func_009B5DB0();
    func_00255E40(D_00CBAFD0[D_00CBAA00.current].next->frame->flag351);
    func_00270580(1);
}

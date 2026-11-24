/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u8 D_00591E4F[][2];
extern u8 D_00591E54[][2];
extern s32 func_00A14EC0(Pes6MatchPlayer *, Pes6MatchPlayer *);

Pes6MatchPlayer *func_009D8D90(Pes6MatchPlayer *actor, Pes6MatchPlayer *current) {
    Pes6MatchPlayer *selected = current;
    s32 best;
    Pes6MatchPlayer *candidate;
    if (func_00A14EC0(current, actor)) {
        best = keeperBall->decision.candidateFrame;
        candidate = Pes6MatchPlayer_Get(D_00591E54[actor->side ^ 1][0]);
        func_00A14EC0(candidate, actor);
        if (current == candidate || candidate->role == 7 ||
            best <= keeperBall->decision.candidateFrame) {
            candidate = Pes6MatchPlayer_Get(D_00591E4F[actor->side ^ 1][0]);
            if (candidate->role == 7 || current == candidate)
                return current;
            func_00A14EC0(candidate, actor);
            if (keeperBall->decision.candidateFrame < best)
                selected = candidate;
        } else
            selected = candidate;
    }
    return selected;
}

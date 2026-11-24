/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u16 home, away;
    s32 event;
} MatchTeamPair;
extern MatchTeamPair D_008CED40[];
extern void func_002918C0(s32 value);
extern s32 Pes6Team_ResolveSpecialId(u16 team);

void Pes6TeamPair_Apply(u16 home, u16 away) {
    s32 i = 0;
    func_002918C0(0);
    for (;; i++) {
        if (D_008CED40[i].home == (u16)Pes6Team_ResolveSpecialId(home) &&
            D_008CED40[i].away == (u16)Pes6Team_ResolveSpecialId(away)) {
            func_002918C0(D_008CED40[i].event);
            break;
        }
        if (D_008CED40[i].home == (u16)Pes6Team_ResolveSpecialId(away) &&
            D_008CED40[i].away == (u16)Pes6Team_ResolveSpecialId(home)) {
            func_002918C0(D_008CED40[i].event);
            break;
        }
        if (D_008CED40[i].home == 0xffff)
            break;
    }
}

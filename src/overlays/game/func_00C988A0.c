/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player.h"
#include "pes6/match_stats.h"

extern u8 D_00CBBE04[], D_00591E19[], D_00CBBE00[], D_00591BE4[], D_00592740[];
extern u32 D_00591E14[];
extern s32 Pes6MatchFlow_GetState(s32), func_009E62D0(s16 home, s16 away);
extern void func_00C98090(void), func_00C983D0(void), func_00C985F0(void), func_00C98780(void);

static inline s32 shootoutDecided(void) {
    return func_009E62D0(D_00CB3300[0][0].counters[6], D_00CB3300[0][1].counters[6]);
}

void func_00C988A0(void) {
    Pes6MatchPlayer *taker = Pes6MatchPlayer_Get(D_00CBBE04[0]);
    Pes6MatchPlayer *last = Pes6MatchPlayer_Get(D_00591E19[0]);
    if ((u8)Pes6MatchFlow_GetState(2) == 7) {
        func_00C98780();
        return;
    }
    if ((u8)Pes6MatchFlow_GetState(2) == 9) {
        if (D_00CBBE00[0] == 1 && !shootoutDecided()) {
            func_00C985F0();
        } else if ((D_00CBBE00[0] == 0 && !shootoutDecided()) ||
                   (D_00CBBE00[0] == 255 && D_00591E14[0] > (u32)(D_00591BE4[0] * 6))) {
            if (taker == last)
                func_00C983D0();
            else
                func_00C98090();
        }
    } else if ((u8)Pes6MatchFlow_GetState(2) == 10) {
        D_00592740[0] = 1;
    }
}

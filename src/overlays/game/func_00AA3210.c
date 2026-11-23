/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
extern u8 D_00591E53[];
extern s32 func_00987A80(s32, s32), func_009B33A0(void *, s32, s32);
s32 func_00AA3210(Pes6MatchPlayer *player, float x, float z) {
    u8 id;
    func_00987A80((u8)(player->side ^ 1), 1);
    id = D_00591E53[(player->side ^ 1) * 2];
    return func_009B33A0(Pes6MatchPlayer_Get(id), (s32)x, (s32)z);
}

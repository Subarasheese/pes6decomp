/* compiler: mwcc-3.0.1b151 */
#include "pes6/ball.h"
#include "pes6/match_player.h"
extern u8 D_00592294[], D_00592295[], D_00591E57[], D_00591E19[], D_00591E1A[], D_00591E64[],
    D_00591E79[], D_00591C09[];
extern f32 D_00591E58[], D_00591E5C[], D_00591E60[];
extern void func_00915000(s32), func_0092C0D0(void), func_00B267F0(void), func_009B4060(s32),
    func_00B26920(s32);
extern s32 func_00B29E20(void), func_00B29B90(void), func_00C00390(s32), func_002DCA30(void),
    func_009B1200(void);
extern void func_00C00440(s32, s32), func_00853220(s32, s32 (*callback)(void), void *, s32);
extern char D_00855180[];
void func_009B15F0(void) {
    Pes6MatchPlayer *player;
    s32 applies = D_00592294[0] != 0;
    if (applies)
        applies = D_00591E57[0] == D_00592295[0];
    if (applies)
        applies = Pes6Ball_Current->action == 11;
    if (applies) {
        D_00592294[0] = 0;
        player = Pes6MatchPlayer_Get(D_00592295[0]);
        D_00591E1A[0] = player->id;
        D_00591E19[0] = D_00591E00.state.sideActors[player->side ^ 1][0];
        D_00591E64[0] = D_00591E57[0] = D_00591E19[0];
        D_00591E00.state.lastSide[1] = D_00591E1A[0];
    }
    D_00591E58[0] = Pes6Ball_Current->pos[0];
    D_00591E5C[0] = Pes6Ball_Current->pos[1];
    D_00591E60[0] = Pes6Ball_Current->pos[2];
    func_00915000(55);
    if (D_00591C09[0] == 5) {
        if (func_00B29E20()) {
            if (!func_00B29B90()) {
                func_0092C0D0();
                func_00B267F0();
                func_009B4060(D_00591E79[0]);
                func_00C00440(3, func_00C00390(3));
                return;
            }
        }
    } else {
        func_00B26920(0);
    }
    func_00B267F0();
    func_00C00440(3, func_00C00390(3));
    if (func_002DCA30()) {
        func_00853220(-9, func_009B1200, D_00855180, 5);
    }
}

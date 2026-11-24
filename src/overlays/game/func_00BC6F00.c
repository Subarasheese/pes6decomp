/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

extern u8 D_00CBD5D1[];
extern u8 func_009B4050(void);
extern f32 D_00591E58[];
extern f32 D_00591E5C[];
extern f32 D_00591E60[];
extern u8 D_00591E64[];
extern u8 D_00591E57[];

static inline s32 magnitude(s32 value) { return value > 0 ? value : -value; }
void func_00BC6F00(void) {
    u8 actor = 255;
    s32 i, weight;
    u8 action;
    for (i = 0; i < 3; i++) {
        if (D_00591E00.state.lastSide[i] == 255)
            continue;
        {
            Pes6MatchPlayer *player = Pes6MatchPlayer_Get(D_00591E00.state.lastSide[i]);
            if (D_00591E58[0] < 0.f) {
                if (player->side == 1) {
                    actor = D_00591E64[i];
                    break;
                }
            } else if (player->side == 0) {
                actor = D_00591E64[i];
                break;
            }
        }
    }
    if (actor == 255)
        actor = D_00591E57[0];
    if (!D_00CBD5D1[0])
        return;
    action = func_009B4050();
    switch (action) {
    case 3:
        weight = Pes6Ball_Current->field1470 / 768 + 30;
        break;
    case 12:
        weight = Pes6Ball_Current->field1470 / 768 + 20;
        break;
    default:
        weight = Pes6Ball_Current->field1470 / 768 + 10;
    }
    if (weight > 40)
        weight = 40;
    if (D_00591E5C[0] > -880.f && (f32)magnitude((s32)D_00591E60[0]) < 1195.f && weight < 30)
        weight = 30;
    if ((D_00591E5C[0] < -1648.f || (f32)magnitude((s32)D_00591E60[0]) > 2987.f) && weight > 29)
        weight = 29;
    func_00BC71E0(D_003E758C, actor, 255, (u8)weight, 1, 0);
}

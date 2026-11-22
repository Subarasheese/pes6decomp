/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"
#include "pes6/kit.h"
typedef struct {
    u8 reserved0[12];
    s32 kind;
    u8 reserved10[4];
    Pes6MatchKit *kit;
} KitContext;
extern u8 D_003E9E88[2];
extern u8 D_003E7DBC[2][2];
static inline s32 sameKitColor(const Pes6KitColor *a, const Pes6KitColor *b) {
    return a->red == b->red && a->green == b->green && a->blue == b->blue && a->alpha == b->alpha;
}
s32 func_00BCC6C0(s32 playerId, s32 team) {
    s32 different = 0;
    const Pes6KitDefinition *kit;
    const Pes6MatchKit *active;
    const KitContext *state;
    Pes6MatchPlayer *player;
    s32 type;
    s32 which;
    s32 i;
    s32 variants[2];
    s32 model;
    if ((u16)team >= 204 && (u16)team != 0x126)
        return 0;
    player = Pes6MatchPlayer_Get(playerId);
    state = (const KitContext *)player->info->fieldState;
    active = state->kit;
    type = state->kind;
    which = D_003E9E88[player->team];
    if (type == 0)
        which = (which >> 3) & 1;
    else
        which &= 1;
    which <<= 1;
    kit = func_002F82B0(team, which | type);
    different |= kit->style[0] != active->parts[0];
    different |= kit->style[1] != active->parts[4];
    different |= kit->style[2] != active->parts[3];
    different |= kit->style[3] != active->parts[2];
    different |= kit->style[4] != active->parts[1];
    different |= kit->style[5] != active->parts[5];
    different |= kit->style[6] != active->parts[6];
    different |= kit->style[7] != active->parts[7];
    different |= kit->style[8] != active->flags[7];
    different |= kit->style[9] != active->flags[4];
    different |= kit->style[10] != active->flags[5];
    different |= kit->style[11] != active->flags[2];
    different |= kit->style[12] != active->flags[3];
    different |= kit->style[13] != active->flags[1];
    different |= kit->style[14] != active->flags[11];
    different |= kit->style[15] != active->flags[12];
    different |= !sameKitColor(&kit->colors[0], &active->colors[0]);
    different |= !sameKitColor(&kit->colors[1], &active->colors[4]);
    different |= !sameKitColor(&kit->colors[2], &active->colors[3]);
    different |= !sameKitColor(&kit->colors[3], &active->colors[2]);
    different |= !sameKitColor(&kit->colors[4], &active->colors[1]);
    different |= !sameKitColor(&kit->colors[5], &active->colors[5]);
    different |= !sameKitColor(&kit->colors[6], &active->colors[6]);
    different |= !sameKitColor(&kit->colors[7], &active->colors[7]);
    different |= !sameKitColor(&kit->colors[8], &active->colors[8]);
    different |= !sameKitColor(&kit->colors[9], &active->colors[9]);
    different |= !sameKitColor(&kit->colors[10], &active->colors[10]);
    different |= !sameKitColor(&kit->colors[11], &active->colors[11]);
    different |= !sameKitColor(&kit->colors[12], &active->colors[12]);
    different |= !sameKitColor(&kit->colors[13], &active->colors[13]);
    different |= !sameKitColor(&kit->colors[14], &active->colors[14]);
    different |= !sameKitColor(&kit->colors[15], &active->colors[15]);
    different |= !sameKitColor(&kit->colors[16], &active->colors[16]);
    different |= !sameKitColor(&kit->colors[17], &active->colors[17]);
    different |= !sameKitColor(&kit->colors[18], &active->colors[18]);
    different |= !sameKitColor(&kit->colors[19], &active->colors[19]);
    different |= !sameKitColor(&kit->colors[20], &active->colors[20]);
    if (kit->type == 1)
        model = kit->model;
    else {
        for (i = 0; i < 2; ++i) {
            variants[i] =
                func_002F82B0(team, i + 2 * ((D_003E9E88[player->team] >> ((!i) * 3)) & 1))
                    ->variant;
        }
        model = kit->model + D_003E7DBC[variants[0]][variants[1]];
    }
    return different | (model != active->model);
}

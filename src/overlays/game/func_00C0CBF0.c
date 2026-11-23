/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 pad00[0x11];
    u8 slot, team;
    u8 pad13[3];
    u8 role;
    u8 pad17[0xf];
    u16 heading;
} Player;
typedef struct {
    u8 pad00[0x72];
    u8 rating72;
    u8 pad73[0xd];
    u8 rating80, rating81;
    u8 pad82[0x2c6];
} SquadSlot;
typedef struct {
    u8 pad00[0x10];
    u32 level;
} MatchContext;
extern SquadSlot Pes6MatchSquads[2][32];
extern u8 D_00CB5382[], D_00591BE4[];
extern s32 func_00288670(s32, s32);
extern u16 func_009B3070(s32, u16);
extern u8 func_00952A50(s32);
s32 func_00C0CBF0(const Player *player, s32 heading, const MatchContext *context) {
    SquadSlot *slot;
    u16 distance;
    if (D_00CB5382[0] < 4)
        return 0;
    slot = &Pes6MatchSquads[player->team][player->slot];
    if (func_00288670(slot->rating81 & 127, 40) <= 49)
        return 0;
    slot = &Pes6MatchSquads[player->team][player->slot];
    if (func_00288670(slot->rating72 & 127, 40) <= 69)
        return 0;
    slot = &Pes6MatchSquads[player->team][player->slot];
    if (func_00288670(slot->rating80 & 127, 40) <= 69)
        return 0;
    distance = func_009B3070(heading, player->heading);
    if (player->role == 2 && context->level < D_00591BE4[0] && func_00952A50(heading) > 80) {
        if (distance > 0x1800 && distance < 0x4000)
            return 1;
    }
    return 0;
}

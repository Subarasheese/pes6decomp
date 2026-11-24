/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
#include "pes6/match_substitution.h"
#include "pes6/match_player_ratings.h"
extern s32 func_002BDE70(u8, u8, s32, s32, s32);
extern s16 func_002BE490(u8, s32);
typedef struct {
    u8 value, reserved01[0x347];
} SquadByte;
extern SquadByte D_00592A54[][32], D_00592A72[][32], D_00592A78[][32];
extern u8 D_00591EF6[], D_00591EF7[];
typedef struct {
    u8 : 4;
    u8 group : 4;
} PlayerGroup;
static inline u8 slotGroup(u8 side, u8 slot) {
    return ((const PlayerGroup *)&Pes6MatchSquads[side].setupPlayers[slot].current.base[1])->group;
}
static inline u8 highPriority(u8 side, u8 slot) {
    if (0 < (s16)func_002BDE70(side, slot, 0, 10, 0)) {
        if (func_00C222B0(side, slot) > 10)
            return 1;
        else
            return 0;
    } else {
        if (func_00C222B0(side, slot) > 16)
            return 1;
        else
            return 0;
    }
}
void func_00B80C70(SubstitutionRequest *request) {
    D_003EA764->count[0] = D_00591EF6[0];
    if (D_003EA764->count[0])
        D_003EA764->flags |= 1 << SUBST_SIDE_0_PENDING_BIT;
    D_003EA764->count[1] = D_00591EF7[0];
    if (D_003EA764->count[1])
        D_003EA764->flags |= 1 << SUBST_SIDE_1_PENDING_BIT;
    D_003EA764->incoming = request->incoming;
    D_003EA764->outgoing = request->outgoing;
    D_003EA764->outgoingGroup = slotGroup(request->side, request->outgoing);
    D_003EA764->incomingGroup = slotGroup(request->side, request->incoming);
    if (request->kind == 6)
        D_003EA764->flags |= 1 << SUBST_KIND_6_BIT;
    if (D_00592A54[request->side][request->incoming].value &&
        !D_00592A78[request->side][request->incoming].value) {
        u8 value = D_00592A72[request->side][request->incoming].value;
        if (value != 0 && value != 1 && value != 2)
            D_003EA764->flags |= 1 << SUBST_INCOMING_STATUS_BIT;
    } else
        D_003EA764->flags |= 1 << SUBST_INCOMING_UNAVAILABLE_BIT;
    if (request->kind == 4)
        D_003EA764->flags |= 1 << SUBST_HIGH_PRIORITY_BIT;
    if (request->side == 1)
        D_003EA764->flags |= 1 << SUBST_SIDE_1_BIT;
    {
        s32 own = func_002BE490(request->side, 1);
        s32 other = func_002BE490(request->side ^ 1, 1);
        if (own > other)
            D_003EA764->flags |= 1 << SUBST_LEADING_BIT;
    }
    if (Pes6MatchSquads[request->side].setupPlayers[request->outgoing].flagCF0)
        D_003EA764->flags |= 1 << SUBST_OUTGOING_CF0_BIT;
    if (request->kind == 5) {
        D_003EA764->flags |= 1 << SUBST_KIND_5_BIT;
        if (highPriority(request->side, request->incoming) == 1)
            D_003EA764->flags |= 1 << SUBST_HIGH_PRIORITY_BIT;
    }
    if (request->mode)
        D_003EA764->flags |= 1 << SUBST_OUTGOING_FIRST_BIT;
}

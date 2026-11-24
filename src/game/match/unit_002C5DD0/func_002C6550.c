/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

extern s32 func_002C7280(const SquadPlayerProfile *, s32);

static inline s32 weakFootFrequency(const SquadPlayerProfile *player, u8 foot) {
    if (player->attributes.preferredFoot != (foot ^ 1))
        return 7;
    return player->packed.extra[0].value1;
}

static inline s32 weakFootAccuracy(const SquadPlayerProfile *player, u8 foot) {
    if (player->attributes.preferredFoot != (foot ^ 1))
        return 7;
    return player->packed.extra[1].value1;
}

s32 func_002C6550(const SquadPlayerProfile *player, s32 role, s32 ability) {
    s32 alternate = 0;
    s32 accuracy, frequency, result;
    u8 foot;
    if ((1U << ability) & 0x1fe88df)
        return 100;
    switch (role) {
    case 8:
    case 15:
    case 18:
    case 22:
    case 25:
    case 29:
    case 32:
    case 37:
        if (func_002C7280(player, 1))
            return 100;
        alternate = 1;
        /* Fall through to the role on this side. */
    case 10:
    case 17:
    case 24:
    case 31:
    case 36:
        foot = 1;
        break;
    case 9:
    case 16:
    case 20:
    case 23:
    case 27:
    case 30:
    case 34:
    case 39:
        if (func_002C7280(player, 2))
            return 100;
        alternate = 1;
        /* Fall through to the role on this side. */
    case 14:
    case 21:
    case 28:
    case 35:
    case 40:
        foot = 0;
        break;
    default:
        return 100;
    }
    accuracy = weakFootAccuracy(player, foot) * 100 / 7;
    frequency = weakFootFrequency(player, foot) * 100 / 7;
    switch (ability) {
    case 5:
    case 8:
    case 9:
    case 10:
        result = accuracy * frequency * 100 / 10000;
        break;
    case 12:
    case 13:
    case 14:
    case 16:
        result = accuracy * frequency * 50 / 10000 + 50;
        break;
    default:
        return 100;
    }
    if (!alternate)
        result = 100 - (100 - result) / 5;
    return result;
}

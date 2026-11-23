/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/saved_roster.h"

u8 func_00223EB0(u8 slot, u16 playerId, u8 stat) {
    u32 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if ((u16)playerId == 0)
        return 0;
    for (i = 0; i < SAVED_SQUAD_SIZE; ++i) {
        u8 pos = savedLineupPosition(slot, i);
        SavedTeamPlayer *player = savedPlayerAt(slot, pos);
        if (!player)
            return 0;
        if (player->playerId == playerId) {
            u8 result;
            switch (stat) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 8:
            case 9:
            case 10:
            case 12:
            case 14:
            case 17:
            case 19:
            case 21:
            case 23:
            case 25:
            case 27:
            case 29:
            case 33:
            case 45:
            case 57:
            case 58:
                result = player->packedStat08 & 15;
                break;
            case 0:
            case 1:
            case 6:
            case 7:
            case 11:
            case 13:
            case 15:
            case 16:
            case 18:
            case 20:
            case 22:
            case 24:
            case 26:
            case 28:
            case 32:
            case 44:
            case 56:
                result = player->packedStat06 & 31;
                break;
            case 36:
            case 37:
            case 38:
            case 39:
                result = player->packedStat0A & 15;
                break;
            default:
                result = 0;
                break;
            }
            return result;
        }
    }
    return 0;
}

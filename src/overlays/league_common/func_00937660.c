/* compiler: mwcc-3.0.1b210 */
#include "pes6/master_player_ratings.h"
u8 func_00937660(u16 id, u8 field) {
    MasterLeagueData *league = Pes6SaveData_GetBlockE970();
    if (!league)
        return 0;
    switch (field) {
    case 0:
        return league->ratings[id].attack;
    case 1:
        return league->ratings[id].defence;
    case 2:
        return league->ratings[id].balance;
    case 3:
        return league->ratings[id].stamina;
    case 4:
        return league->ratings[id].speed;
    case 5:
        return league->ratings[id].accel;
    case 6:
        return league->ratings[id].response;
    case 7:
        return league->ratings[id].agility;
    case 8:
        return league->ratings[id].dribAcc;
    case 9:
        return league->ratings[id].dribSpe;
    case 10:
        return league->ratings[id].sPassAcc;
    case 11:
        return league->ratings[id].sPassSpe;
    case 12:
        return league->ratings[id].lPassAcc;
    case 13:
        return league->ratings[id].lPassSpe;
    case 14:
        return league->ratings[id].shotAcc;
    case 15:
        return league->ratings[id].shotPow;
    case 16:
        return league->ratings[id].shotTec;
    case 17:
        return league->ratings[id].fk;
    case 18:
        return league->ratings[id].curling;
    case 19:
        return league->ratings[id].heading;
    case 20:
        return league->ratings[id].jump;
    case 21:
        return league->ratings[id].tech;
    case 22:
        return league->ratings[id].aggress;
    case 23:
        return league->ratings[id].mental;
    case 24:
        return league->ratings[id].gkAbil;
    case 25:
        return league->ratings[id].team;
    case 26:
        return league->ratings[id].condition;
    case 27:
        return league->ratings[id].wfa;
    case 28:
        return league->ratings[id].wff;
    default:
        return 0;
    }
}

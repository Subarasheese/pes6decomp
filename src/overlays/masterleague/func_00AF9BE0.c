/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
#include "pes6/master_player_ratings.h"
extern const Pes6EditPlayerParams *Pes6Player_GetParams(u16 id);
void func_00AF9BE0(void) {
    u16 id;
    for (id = 1; id < 0x11f5; ++id) {
        MasterLeagueData *league = Pes6SaveData_GetBlockE970();
        const Pes6EditPlayerParams *source = Pes6Player_GetParams(id);
        if (league && source) {
            league->ratings[id].attack = source->attack;
            league->ratings[id].defence = source->defence;
            league->ratings[id].balance = source->balance;
            league->ratings[id].stamina = source->stamina;
            league->ratings[id].speed = source->speed;
            league->ratings[id].accel = source->accel;
            league->ratings[id].response = source->response;
            league->ratings[id].agility = source->agility;
            league->ratings[id].condition = source->condition;
            league->ratings[id].dribAcc = source->dribAcc;
            league->ratings[id].dribSpe = source->dribSpe;
            league->ratings[id].sPassAcc = source->sPassAcc;
            league->ratings[id].sPassSpe = source->sPassSpe;
            league->ratings[id].wfa = source->wfa;
            league->ratings[id].lPassAcc = source->lPassAcc;
            league->ratings[id].lPassSpe = source->lPassSpe;
            league->ratings[id].shotAcc = source->shotAcc;
            league->ratings[id].shotPow = source->shotPow;
            league->ratings[id].wff = source->wff;
            league->ratings[id].shotTec = source->shotTec;
            league->ratings[id].fk = source->fk;
            league->ratings[id].curling = source->curling;
            league->ratings[id].heading = source->heading;
            league->ratings[id].jump = source->jump;
            league->ratings[id].tech = source->tech;
            league->ratings[id].aggress = source->aggress;
            league->ratings[id].mental = source->mental;
            league->ratings[id].gkAbil = source->gkAbil;
            league->ratings[id].team = source->team;
            league->ratings[id].field22 = source->field_22;
            league->ratings[id].ageTens = source->age / 10;
            league->ratings[id].ageUnits = source->age % 10;
        }
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
#include "pes6/master_player_ratings.h"
typedef struct {
    u8 header[0x34];
    Pes6EditPlayerParams params;
} LeaguePlayer;
extern LeaguePlayer D_009C9700[];
extern void func_00937C00(u16 slot);
extern void func_00220240(LeaguePlayer *players, s32 group);
void func_0093B620(void) {
    u16 slot;
    MasterLeagueData *save;
    for (slot = 1; slot < 0x11f5; slot++) {
        save = Pes6SaveData_GetBlockE970();
        if (save) {
            func_00937C00(slot);
            D_009C9700[slot].params.attack = save->ratings[slot].attack;
            D_009C9700[slot].params.defence = save->ratings[slot].defence;
            D_009C9700[slot].params.balance = save->ratings[slot].balance;
            D_009C9700[slot].params.stamina = save->ratings[slot].stamina;
            D_009C9700[slot].params.speed = save->ratings[slot].speed;
            D_009C9700[slot].params.accel = save->ratings[slot].accel;
            D_009C9700[slot].params.response = save->ratings[slot].response;
            D_009C9700[slot].params.agility = save->ratings[slot].agility;
            D_009C9700[slot].params.condition = save->ratings[slot].condition;
            D_009C9700[slot].params.dribAcc = save->ratings[slot].dribAcc;
            D_009C9700[slot].params.dribSpe = save->ratings[slot].dribSpe;
            D_009C9700[slot].params.sPassAcc = save->ratings[slot].sPassAcc;
            D_009C9700[slot].params.sPassSpe = save->ratings[slot].sPassSpe;
            D_009C9700[slot].params.wfa = save->ratings[slot].wfa;
            D_009C9700[slot].params.lPassAcc = save->ratings[slot].lPassAcc;
            D_009C9700[slot].params.lPassSpe = save->ratings[slot].lPassSpe;
            D_009C9700[slot].params.shotAcc = save->ratings[slot].shotAcc;
            D_009C9700[slot].params.shotPow = save->ratings[slot].shotPow;
            D_009C9700[slot].params.wff = save->ratings[slot].wff;
            D_009C9700[slot].params.shotTec = save->ratings[slot].shotTec;
            D_009C9700[slot].params.fk = save->ratings[slot].fk;
            D_009C9700[slot].params.curling = save->ratings[slot].curling;
            D_009C9700[slot].params.heading = save->ratings[slot].heading;
            D_009C9700[slot].params.jump = save->ratings[slot].jump;
            D_009C9700[slot].params.tech = save->ratings[slot].tech;
            D_009C9700[slot].params.aggress = save->ratings[slot].aggress;
            D_009C9700[slot].params.mental = save->ratings[slot].mental;
            D_009C9700[slot].params.gkAbil = save->ratings[slot].gkAbil;
            D_009C9700[slot].params.team = save->ratings[slot].team;
            D_009C9700[slot].params.field_22 = save->ratings[slot].field22;
            D_009C9700[slot].params.age =
                save->ratings[slot].ageUnits + save->ratings[slot].ageTens * 10;
        }
    }
    func_00220240(D_009C9700, 2);
}

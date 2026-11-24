/* compiler: mwcc-3.0.1b210 */
#include "pes6/lineup_teamwork.h"
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x2c], team[2];
} LeagueSides;
extern u16 Pes6MatchLineups[2][32], Pes6MatchContext[];
extern s32 Pes6SceneStack[];
extern u8 D_00591C09[];
extern LeagueSides *D_003E77B0;
extern u32 func_00222D70(u32 player);
extern void *memset(void *, s32, u32);
extern void *memcpy(void *, const void *, u32);
extern s32 func_0024EC90(s32 team);
extern const void *func_00222850(s32 player, s32 variant), *func_002223E0(s32 player, s32 variant);
extern u8 func_00221D10(u16 team, u8 index, s32 kind);
extern u8 func_00842210(s32 index), func_00842110(s32 index);
extern int Pes6Player_GetNationality(int player);
extern s32 func_00221500(s32 player);
extern void func_00278170(void *state), func_00278150(void *state), func_00278130(void *state),
    func_00277E60(void *state);
extern void func_002CA620(s32 side, s32 slot);
extern s32 func_00230410(void);
extern s32 func_0096F230(s32, u8), func_0096F370(s32, u8), func_0096EA70(s32, u8),
    func_0096EBB0(s32, u8), func_0096EE50(s32, u8), func_0096EF90(s32, u8);
extern s32 func_0096F730(s32, u8), func_0096F700(s32), func_0096F6C0(s32), func_0096F680(s32),
    func_0096F640(s32);

static inline void fillProfile(Pes6LineupProfile *out, const Pes6ProfileParams *params,
                               u16 player) {
    memcpy(out, params, sizeof(out->base));
    out->profile.word.nationality = params->profile.word.nationality;
    out->age = params->profile.fields.age;
    out->weight = params->weight;
    out->profile.low.height = params->height;
    out->nationalityBelow31 = (out->profile.word.nationality < 31);
    out->nationalityIs26 = (out->profile.word.nationality == 26);
    switch (player) {
    default:
        out->profile.low.special = 0;
        break;
    case 0x0ea8:
    case 0x04cc:
        out->profile.low.special = 1;
        break;
    }
}

void Pes6MatchSetup_FillSquads(void) {
    s32 side, slot, other;
    for (side = 0; side < 2; side++) {
        for (slot = 0; slot < 32; slot++) {
            Pes6SquadSetupPlayer *row = &Pes6MatchSquads[side].setupPlayers[slot];
            s32 player = Pes6MatchLineups[side][slot];
            const Pes6LineupParams *params;
            row->playerId = func_00222D70(player);
            if ((u16)player >= 6000 && (u16)player < 0x7000)
                player = 0;
            memset(row->playerName, 0, sizeof(row->playerName));
            memcpy(row->playerName, func_00222850(player, func_0024EC90(Pes6MatchContext[side])),
                   sizeof(row->playerName) - 1);
            memset(row->shirtName, 0, sizeof(row->shirtName));
            memcpy(row->shirtName, func_002223E0(player, func_0024EC90(Pes6MatchContext[side])),
                   sizeof(row->shirtName) - 1);
            if (Pes6SceneStack[0] == 12)
                row->shirtNumber = func_00221D10(Pes6MatchContext[side], slot, 2);
            else if (Pes6SceneStack[0] == 15) {
                if (side == 0)
                    row->shirtNumber = func_00842210(slot);
                else
                    row->shirtNumber = func_00842110(slot);
            } else
                row->shirtNumber = func_00221D10(Pes6MatchContext[side], slot, 0);
            row->nationality = Pes6Player_GetNationality(player);
            row->emptyPlayer = func_00221500(player);
            row->field40 = 0;
            row->field41 = 0;
            row->field42 = 0;
            row->state = 2;
            row->field18 = 0;
            row->fieldC0 = 0;
            row->fieldC9 = 0;
            row->fieldC8 = 0;
            row->fieldC5 = 0;
            row->fieldD4 = 1;
            row->fieldD7 = 0;
            row->fieldD8 = 0;
            row->fieldD5 = 0;
            row->fieldD6 = 0;
            row->fieldE4 = 0;
            row->fieldE6 = 0;
            func_00278170(&row->extraE8);
            {
                Pes6SquadExtraState *extra = &row->extra;
                if (D_00591C09[0] != 1 && D_00591C09[0] != 2 && D_00591C09[0] != 4 &&
                    D_00591C09[0] != 14)
                    func_00278150(&extra->first);
                else
                    extra->first.bytes[3] = 0;

                func_00278130(&extra->second);
                func_00277E60(extra->last);
            }
            func_002CA620(side, slot);
            if (func_00210DF0()) {
                row->flagCF1 = func_0096F230(player, D_003E77B0->team[side % 2]);
                func_0096F370(player, D_003E77B0->team[side % 2]);
                row->flagCF3 = func_0096EA70(player, D_003E77B0->team[side % 2]);
                func_0096EBB0(player, D_003E77B0->team[side % 2]);
                row->flagCF4 = func_0096EE50(player, D_003E77B0->team[side % 2]);
                func_0096EF90(player, D_003E77B0->team[side % 2]);
                if (func_00210DF0() == 2 && func_00230410() == 1) {
                    row->fieldCA = func_0096F730(player, slot);
                    row->fieldCC = func_0096F700(player);
                    row->fieldCE = func_0096F6C0(player);
                    row->flagCF0 = func_0096F680(player);
                    row->flagCF2 = func_0096F640(player);
                    params = (const Pes6LineupParams *)func_00970870(player);
                } else {
                    row->fieldCA = -1;
                    row->fieldCC = -1;
                    row->fieldCE = -1;
                    row->flagCF0 = 0;
                    row->flagCF2 = 0;
                    params = (const Pes6LineupParams *)Pes6Player_GetParams(player);
                }
            } else {
                row->fieldCA = -1;
                row->fieldCC = -1;
                row->fieldCE = -1;
                row->flagCF0 = 0;
                row->flagCF1 = 0;
                row->flagCF2 = 0;
                row->flagCF3 = 0;
                row->flagCF4 = 0;
                params = (const Pes6LineupParams *)Pes6Player_GetParams(player);
            }
            row->equipment = params->kit.equipment;
            fillProfile(&row->current, &params->params, row->playerId);
            row->current.shirtNumber = row->shirtNumber;
            row->equipment.fields.shirtNumber = row->shirtNumber;
            row->saved = row->current;
        }
        for (slot = 0; slot < 32; slot++) {
            for (other = 0; other < 32; other++) {
                if (D_00591C09[0] == 4)
                    Pes6MatchSquads[side].setupPlayers[slot].teammate[other] =
                        func_0024EAC0(Pes6MatchLineups[side][slot], Pes6MatchLineups[side][other]);
                else
                    Pes6MatchSquads[side].setupPlayers[slot].teammate[other] =
                        func_0024EA00(Pes6MatchLineups[side][slot], Pes6MatchLineups[side][other]);
            }
        }
    }
}

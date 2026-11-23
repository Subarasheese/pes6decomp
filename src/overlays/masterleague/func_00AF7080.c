/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
typedef struct {
    u8 reserved[0x10bbc];
    Pes6EditPlayerParams added[37];
} LeagueSave;
extern Pes6EditPlayerParams *D_003EADCC;
extern LeagueSave *Pes6SaveData_GetBlockE970(void);
extern const Pes6EditPlayerParams *Pes6Player_GetParams(u16 playerId), *func_00970770(u16 playerId);
extern void *func_001C4730(void *dest, const void *source, u32 bytes);
void func_00AF7080(void) {
    Pes6EditPlayerParams *table = D_003EADCC;
    LeagueSave *save;
    u16 slot;
    u8 extra;
    if (!table)
        return;
    for (slot = 1; slot < 0x12b0; ++slot) {
        const Pes6EditPlayerParams *original = Pes6Player_GetParams(slot);
        const Pes6EditPlayerParams *league = func_00970770(slot);
        if (original && league) {
            func_001C4730((&table[slot]), original, sizeof(*original));
            func_001C4730((&table[slot]), league, 0x24);
            table[slot].registeredPosition = original->registeredPosition;
            table[slot].gk = original->gk;
            table[slot].cwp = original->cwp;
            table[slot].wb = original->wb;
            table[slot].cbt = original->cbt;
            table[slot].sb = original->sb;
            table[slot].dm = original->dm;
            table[slot].cm = original->cm;
            table[slot].sm = original->sm;
            table[slot].am = original->am;
            table[slot].cf = original->cf;
            table[slot].wg = original->wg;
            table[slot].wb = original->wb;
            table[slot].ss = original->ss;
            table[slot].favoredSide = original->favoredSide;
            table[slot].preferredFoot = original->preferredFoot;
            table[slot].injuryTolerance = original->injuryTolerance;
            table[slot].freeKickStyle = original->freeKickStyle;
            table[slot].penaltyStyle = original->penaltyStyle;
            table[slot].field_1F_0 = original->field_1F_0;
            table[slot].field_20_0 = original->field_20_0;
            table[slot].dribbleStyle = original->dribbleStyle;
            table[slot].dropKickStyle = original->dropKickStyle;
            table[slot].specialDribbling = original->specialDribbling;
            table[slot].postPlayer = original->postPlayer;
            table[slot].positioning = original->positioning;
            table[slot].reaction = original->reaction;
            table[slot].scoring = original->scoring;
            table[slot].playmaking = original->playmaking;
            table[slot].passing = original->passing;
            table[slot].penalties = original->penalties;
            table[slot].oneOnOneScoring = original->oneOnOneScoring;
            table[slot].longThrow = original->longThrow;
            table[slot].oneTouchPass = original->oneTouchPass;
            table[slot].marking = original->marking;
            table[slot].defensiveLineControl = original->defensiveLineControl;
            table[slot].oneOnOneStopper = original->oneOnOneStopper;
            table[slot].penaltyStopper = original->penaltyStopper;
            table[slot].outside = original->outside;
            table[slot].sliding = original->sliding;
            table[slot].tacticalDribble = original->tacticalDribble;
            table[slot].linePosition = original->linePosition;
            table[slot].side = original->side;
            table[slot].centre = original->centre;
            table[slot].covering = original->covering;
            table[slot].middleShooting = original->middleShooting;
            table[slot].injuryTolerance = original->injuryTolerance;
            table[slot].age = league->age;
            if (slot >= 0x11f5 && slot < 0x12a6)
                table[slot].age = 2;
        }
    }
    save = Pes6SaveData_GetBlockE970();
    if (!save)
        return;
    for (extra = 0; extra < 37; ++extra) {
        func_001C4730(&table[5000 + extra], &save->added[extra], sizeof(Pes6EditPlayerParams));
    }
}

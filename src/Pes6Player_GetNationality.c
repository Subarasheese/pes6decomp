/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_db.h"
extern int func_002242B0(int id);
extern int func_00210DF0(void);
extern u8 *func_00970870(int id);
extern u8 *func_00AF71D0(int id);
static inline u8 *getParams(int id) {
    Pes6PlayerRecord *record;
    if (func_002242B0(id)) {
        if (func_00210DF0() == 2) {
            return func_00970870(id);
        }
        if (func_00210DF0() == 1) {
            return func_00AF71D0(id);
        }
    }
    if ((id & 0xFFFF) == 0x6000) {
        return Pes6OptionData_GetPlayers()->params;
    }
    record = Pes6Player_FindRecord(id, 0);
    if (record == 0) {
        record = Pes6OptionData_GetPlayers();
    }
    return record->params;
}

/* Nationality index of a player (9-bit field of the word at params+0x3C). */
int Pes6Player_GetNationality(int id) {
    return *(u16 *)(getParams(id) + 0x3C) & 0x1FF;
}

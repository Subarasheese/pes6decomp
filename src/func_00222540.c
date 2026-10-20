/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_db.h"
extern Pes6PlayerRecord *func_00223C00(void);
extern Pes6PlayerRecord *func_0026D880(int id, int arg);
extern void *func_00237530(int id);

Pes6PlayerRecord *func_00222540(unsigned int id, int arg) {
    unsigned short pid = id;
    Pes6PlayerRecord *record;
    if (pid == 0) {
        record = func_00223C00();
    } else if (pid < 5000) {
        record = Pes6OptionData_GetPlayers() + (id & 0xFFFF);
        if (record->name[0] == 0) {
            record = func_0026D880(id, arg);
        }
    } else if (pid >= 0x8000 && pid < 0x80B8) {
        record = Pes6OptionData_GetEditedPlayers() + (pid - 0x8000);
    } else if (pid >= 0x7020 && pid < 0x7040) {
        record = (Pes6PlayerRecord *)((u8 *)func_00237530(0x126) + 0x174 + ((((id & 0xFFFF) - 0x7020) & 0xFFFF) * 124));
    } else {
        record = Pes6Player_FindRecord(id, 0);
        if (record != 0) {
            if (record->name[0] == 0)
                record = func_0026D880(id, arg);
        } else {
            record = 0;
        }
    }
    if (record == 0 || record->name[0] == 0)
        record = func_00223C00();
    return record;
}

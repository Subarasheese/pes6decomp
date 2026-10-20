/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_db.h"
extern Pes6PlayerRecord *func_00223A50(void);
extern Pes6PlayerRecord *func_00223A40(void);
extern int func_00210DF0(void);
extern Pes6PlayerRecord *func_00AF7230(int id);
extern Pes6PlayerRecord *func_002294A0(int id);
extern void *func_00237530(int id);

Pes6PlayerRecord *Pes6Player_FindRecord(unsigned int id, int source) {
    unsigned short pid = id;
    Pes6PlayerRecord *record = 0;
    if (pid < 5000) {
        if (source == 1) {
            record = func_00223A50();
        } else {
            record = Pes6OptionData_GetPlayers();
        }
        if (record != 0) {
            record = (Pes6PlayerRecord *)((u8 *)record + ((id & 0xFFFF) * 124));
        }
        goto done;
    }
    if (pid >= 6000 && pid < 6391) {
        if (func_00210DF0() == 1) {
            record = func_00AF7230(id);
        }
        goto done;
    }
    if (pid >= 0x7000 && pid < 0x7020) {
        record = func_002294A0(id);
        goto done;
    }
    if (pid >= 0x7020 && pid < 0x7040) {
        record = (Pes6PlayerRecord *)((u8 *)func_00237530(0x126) + 0x174 + ((((id & 0xFFFF) - 0x7020) & 0xFFFF) * 124));
        goto done;
    }
    if (pid >= 0x7040 && pid < 0x7060) {
        record = (Pes6PlayerRecord *)((u8 *)func_00237530(0x127) + 0x174 + ((((id & 0xFFFF) - 0x7040) & 0xFFFF) * 124));
        goto done;
    }
    if (pid >= 0x7060 && pid < 0x7080) {
        record = (Pes6PlayerRecord *)((u8 *)func_00237530(0x126) + 0x174 + ((((id & 0xFFFF) - 0x7060) & 0xFFFF) * 124));
        goto done;
    }
    if (pid >= 0x7080 && pid < 0x70A0) {
        record = (Pes6PlayerRecord *)((u8 *)func_00237530(0x127) + 0x174 + ((((id & 0xFFFF) - 0x7080) & 0xFFFF) * 124));
        goto done;
    }
    if (pid == 0x7FF0) {
        goto done;
    }
    if (pid >= 0x8000 && pid < 0x80B8) {
        if (source == 1) {
            record = func_00223A40();
        } else {
            record = Pes6OptionData_GetEditedPlayers();
        }
        if (record != 0) {
            record = (Pes6PlayerRecord *)((u8 *)record + ((pid - 0x8000) * 124));
        }
    }
done:
    return record;
}

/* compiler: mwcc-3.0.1b210 */
/* Like func_00222540, but copies the record to the shared buffer D_00539530
 * and returns that buffer; arg selects an alternate record set (arg == 4
 * returns the func_002228B0 result directly). */
#include "pes6/player_db.h"
extern Pes6PlayerRecord *func_00223C00(void);
extern Pes6PlayerRecord *func_0026D880(int id, int arg);
extern Pes6PlayerRecord *func_002228B0(unsigned int id, int set, int arg, int unk);
extern void *func_00237530(int id);
extern void func_001F85A0(Pes6PlayerRecord *src, void *dst);
extern char D_00539530[];

Pes6PlayerRecord *func_002226A0(unsigned int id, int arg) {
    unsigned short pid = id;
    Pes6PlayerRecord *record;
    if (pid == 0) {
        record = func_00223C00();
    } else if (pid < 5000) {
        record = Pes6OptionData_GetPlayers() + (id & 0xFFFF);
        if (record->name[0] == 0)
            record = func_0026D880(id, arg);
    } else if (pid >= 0x8000 && pid < 0x80B8) {
        record = Pes6OptionData_GetEditedPlayers() + (pid - 0x8000);
        if (record->name[0] == 0)
            record = func_00223C00();
    } else if (pid >= 0x7020 && pid < 0x7040) {
        record = (Pes6PlayerRecord *)((u8 *)func_00237530(0x126) + 0x174 + ((((id & 0xFFFF) - 0x7020) & 0xFFFF) * 124));
        if (record->name[0] == 0)
            record = func_00223C00();
    } else {
        record = func_002228B0(id, 0, arg, 0);
        if (arg != 4) {
            func_001F85A0(record, D_00539530);
            record = (Pes6PlayerRecord *)D_00539530;
        }
        return record;
    }
    if (record == 0)
        record = func_00223C00();
    func_001F85A0(record, D_00539530);
    return (Pes6PlayerRecord *)D_00539530;
}

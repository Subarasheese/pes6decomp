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


typedef struct {
    u8 bit0 : 1, bit1 : 1, bit2 : 1, bit3 : 1, bit4 : 1, bit5 : 1, bit6 : 1, bit7 : 1;
} Bits8;

/* 1 when the player's special abilities were edited (params+0x23 bit 4, the
 * option file's "ability edited" flag) or when bit 6 of params+0x3D is set. */
int func_00221780(int id) {
    u8 *params = getParams(id);
    if (((Bits8 *)(params + 0x23))->bit4 || ((Bits8 *)(params + 0x3D))->bit6) {
        return 1;
    }
    return 0;
}

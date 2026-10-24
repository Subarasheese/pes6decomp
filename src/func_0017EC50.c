/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Unit {
    u8 pad0[0x4];
    struct Unit *next;
    u8 pad8[0x4C];
    s32 id;
} Unit;

typedef struct {
    Unit *head;
    s32 count;
} UnitList;

extern UnitList D_00519E20[];

Unit *func_0017EC50(s32 team, s32 id) {
    Unit *unit = D_00519E20[team].head;

    if (unit == NULL) {
        return NULL;
    }
    do {
        if (unit->id == id) {
            return unit;
        }
        unit = unit->next;
    } while (unit != NULL);
    return NULL;
}

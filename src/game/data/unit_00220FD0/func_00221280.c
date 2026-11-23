/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_option_slots.h"

typedef struct {
    u8 reserved00[0x5C];
    MatchOptionSlot entries[MATCH_OPTION_SLOTS];
} OptionTable;

extern void *Pes6OptionData_GetBase(void);

MatchOptionSlot *func_00221280(s32 index) {
    OptionTable *table = Pes6OptionData_GetBase();
    if (!table)
        return 0;
    if (index >= MATCH_OPTION_SLOTS)
        return &table->entries[0];
    return &table->entries[index];
}

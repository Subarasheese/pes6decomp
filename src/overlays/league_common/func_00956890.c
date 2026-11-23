/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved[0x7E];
    u16 id;
} LeagueRecord;
extern LeagueRecord *func_002297F0(u8 slot);
s32 func_00956890(u16 id) {
    s32 slot;
    for (slot = 0; slot < 37; ++slot) {
        LeagueRecord *record = func_002297F0((u8)slot);
        if (record && (u16)id == record->id)
            return (u8)slot;
    }
    return 0xff;
}

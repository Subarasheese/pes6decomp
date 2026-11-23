/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved[0x4616];
    u8 values[8];
} LeagueSettings;
extern LeagueSettings *func_00229460(void);
u8 func_00983E20(s32 index) {
    LeagueSettings *settings = func_00229460();
    s32 slot = index & 255;
    if (slot >= 8)
        return 0;
    if ((u32)settings == 0U) {
        return 0;
    } else {
        return settings->values[slot];
    }
}

/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_lookup.h"
typedef struct {
    u8 reserved00[0x76];
    u8 : 7;
    u8 active : 1;
} SquadFlags;

s32 func_00311AD0(s32 id) {
    const SquadFlags *flags = (const SquadFlags *)matchSquadPlayer(id);
    if (flags->active)
        return 1;
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 reserved00, stadium, reserved02[18];
} StadiumCatalogEntry;
extern StadiumCatalogEntry Pes6StadiumTable[];
extern u8 Pes6Team_GetHomeStadium(s32 team, s32 color);

s32 func_0023B560(s32 team) {
    s32 i;
    for (i = 0; i < 36; i++)
        if (Pes6StadiumTable[i].stadium == (u8)Pes6Team_GetHomeStadium(team, 0))
            return i;
    return 0;
}

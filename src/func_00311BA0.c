/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 data[0x348];
} Ent;

extern char D_0058E5B0[];
extern Ent D_00592A54[][32];

u8 func_00311BA0(s32 index) {
    u8 *rec;

    if (index != 0xFF) {
        index = index % 23;
    } else {
        index = 1;
    }
    rec = (u8 *)D_0058E5B0 + index * 0x240;
    return D_00592A54[rec[0x12]][rec[0x11]].data[0];
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x20];
    s32 total;
    u8 pad24[0x2D0];
} Player;

extern Player *D_00CB3300[];
s32 func_00C12130(u8);

s32 func_003110E0(s32 *out, s32 id) {
    s32 r = func_00C12130((u8)id);

    if (D_00CB3300[0][(u8)id].total == 0) {
        *out = 0;
    } else {
        *out = r * 100 / D_00CB3300[0][(u8)id].total;
    }
    return 1;
}

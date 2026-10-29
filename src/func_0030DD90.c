/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    u8 kind;
    u8 pad11[0x22F];
} Rec240;

extern Rec240 Pes6MatchPlayers[];

s32 func_0030DD90(u8 *out, s32 index) {
    if ((u8)index != 0xFF) {
        index = (u8)index % 23;
    } else {
        index = 1;
    }
    *out = Pes6MatchPlayers[index].kind;
    return 1;
}

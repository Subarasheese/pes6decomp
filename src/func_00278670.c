/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    s32 ready;
} Inner;

typedef struct {
    Inner *inner;
    s32 count;
} Sub;

typedef struct {
    u8 id;
    u8 pad1[3];
    Sub *sub;
    u8 pad8[0x228];
    s32 extra;
    u8 pad234[0xC];
} Team;

extern Team Pes6MatchPlayers[];
extern u8 D_0058DA30[][0x80];
void func_0017B120(void);
Inner *func_001A5B10(s32);

void func_00278670(void) {
    s32 i;
    Team *team;
    u8 *buf;

    func_0017B120();
    for (team = Pes6MatchPlayers, i = 0, buf = D_0058DA30[0]; i < 23; i++, team++, buf += 0x80) {
        team->id = i;
        team->sub = (Sub *)buf;
        team->sub->inner = func_001A5B10(i);
        team->sub->inner->ready = 1;
        team->sub->count = 0;
        team->extra = 0;
    }
}

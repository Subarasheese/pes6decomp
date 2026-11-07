/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

#define SLOT(x) ((x) != 0xFF ? (x) % 23 : 1)

typedef struct {
    u8 pad0[0x30];
    u16 kit;
} Kit;

extern char Pes6MatchPlayers[];
extern char D_0058E5C6[];

s32 func_00311730(s32 a, s32 b) {
    s32 mb = b & 0xFF;
    s32 ma;
    u8 *rec = (u8 *)Pes6MatchPlayers + SLOT(mb) * 0x240;

    ma = a & 0xFF;
    if (*(u8 *)(D_0058E5C6 + SLOT(ma) * 0x240) == 13) {
        if ((*(Kit **)(rec + 4))->kit != 0x24F) {
            goto fail;
        }
        return 1;
    }
fail:
    return 0;
}

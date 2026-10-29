/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x94];
    u8 sub[0x2B4];
} Ent;

extern Ent Pes6MatchSquads[][32];

u8 *func_00288620(u8 a, u8 b) {
    return Pes6MatchSquads[a][b].sub;
}

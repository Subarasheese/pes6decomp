/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xF8];
    u8 sub[0x250];
} Ent;

extern Ent Pes6MatchSquads[][32];

u8 *func_00277D00(u8 *rec) {
    return Pes6MatchSquads[rec[0x12]][rec[0x11]].sub;
}

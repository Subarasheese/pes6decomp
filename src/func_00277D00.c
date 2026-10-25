/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xF8];
    u8 sub[0x250];
} Ent;

extern Ent D_00592980[][32];

u8 *func_00277D00(u8 *rec) {
    return D_00592980[rec[0x12]][rec[0x11]].sub;
}

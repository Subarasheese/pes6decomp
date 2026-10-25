/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x79];
    u8 lo : 7;
    u8 flag : 1;
    u8 pad7A[0x2CE];
} Ent;

extern char D_0058E5B0[];
extern Ent D_00592980[][32];

u8 func_0030E260(s32 index) {
    u8 *rec;
    Ent *ent;

    if (index != 0xFF) {
        index = index % 23;
    } else {
        index = 1;
    }
    rec = (u8 *)D_0058E5B0 + index * 0x240;
    ent = &D_00592980[rec[0x12]][rec[0x11]];
    return ent->flag;
}

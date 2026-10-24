/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 value;
    u8 pad1[0x347];
} Ent;

extern char D_0058E5B0[];
extern Ent D_00592995[][32];

u8 func_003119D0(s32 index) {
    s32 maskedIndex;
    u8 *rec;
    Ent *ent;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        index = maskedIndex % 23;
    } else {
        index = 1;
    }
    rec = (u8 *)D_0058E5B0 + index * 0x240;
    ent = &D_00592995[rec[0x12]][rec[0x11]];
    return ent->value;
}

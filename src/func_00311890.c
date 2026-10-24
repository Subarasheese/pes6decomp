/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xB1];
    u8 bits;
    u8 padB2[0x296];
} Ent;

extern char D_0058E5B0[];
extern Ent D_00592980[][32];

s32 func_00311890(s32 index) {
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
    ent = &D_00592980[rec[0x12]][rec[0x11]];
    return (ent->bits & 7) >= 6;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC0];
    s32 a;
    u8 padC4[0x14];
    s32 b;
    u8 padDC[0x26C];
} Ent;

extern Ent D_00592980[2][32];

void func_00270E10(void) {
    s32 i;
    s32 j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 32; j++) {
            D_00592980[i][j].b = D_00592980[i][j].a;
        }
    }
}

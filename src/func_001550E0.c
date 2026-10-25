/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x100];
    s32 active;
    u8 pad104[0x3C];
} Ent;

extern volatile u8 D_003E9839;
extern Ent D_0050D8C0[];

u8 func_001550E0(void) {
    s32 i;
    Ent *ent;

    D_003E9839 = 0;
    for (i = 0, ent = D_0050D8C0; i < 8; i++, ent++) {
        if (ent->active != 0) {
            D_003E9839 |= 1 << i;
        }
    }
    return D_003E9839;
}

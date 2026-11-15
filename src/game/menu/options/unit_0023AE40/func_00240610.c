/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

#define ABS(x) ((x) > 0 ? (x) : -(x))

typedef struct {
    u8 pad0[1];
    s8 v;
    s8 w;
    u8 pad[0x34 - 3];
} Rec;

extern Rec Pes6PadAssign[];
extern u8 Pes6FormationMenu_HumanPresent;

void func_00240610(void) {
    s32 i;
    Rec *p;
    Pes6FormationMenu_HumanPresent = 0;
    for (i = 0, p = Pes6PadAssign; i < 8; i++, p++) {
        s32 a = p->v;
        if (ABS(a) == 1 || ABS(a) == 2) {
            if (p->w == 0) {
                Pes6FormationMenu_HumanPresent = 1;
            }
        }
    }
}

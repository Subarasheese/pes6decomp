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
extern s32 Pes6MatchSelect_PadCheckRequest;

s32 Pes6MatchSelect_AnyPadAssigned(void) {
    s32 i;
    s32 r = 0;
    Rec *p;
    s32 t;
    if (Pes6MatchSelect_PadCheckRequest == 1) {
        for (i = 0, p = Pes6PadAssign; i < 8; i++, p++) {
            if (p->w == 0) {
                s32 a = p->v;
                if (ABS(a) == 1 || ABS(a) == 2) {
                    r = 1;
                }
            }
        }
        Pes6MatchSelect_PadCheckRequest = r;
    }
    t = Pes6MatchSelect_PadCheckRequest;
    Pes6MatchSelect_PadCheckRequest = 0;
    return t == 1;
}

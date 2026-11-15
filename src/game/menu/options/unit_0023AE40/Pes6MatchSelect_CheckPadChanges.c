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
extern s8 D_0053C3A0[];
extern s8 Pes6MatchSelect_PrevPadSide[];
extern s32 Pes6MatchSelect_PadCheckRequest;

void Pes6MatchSelect_CheckPadChanges(void) {
    s32 i;
    Rec *p;
    s8 *q1;
    s8 *q2;
    if (Pes6MatchSelect_PadCheckRequest == 0) {
        for (i = 0, p = Pes6PadAssign, q1 = D_0053C3A0, q2 = Pes6MatchSelect_PrevPadSide; i < 8; i++, p++, q1++, q2++) {
            if (p->w == 0) {
                s32 a = p->v;
                if (ABS(a) == 1 || ABS(a) == 2) {
                    if (*q1 != 0) {
                        Pes6MatchSelect_PadCheckRequest = 1;
                    }
                    if (*q2 != p->v) {
                        Pes6MatchSelect_PadCheckRequest = 1;
                    }
                }
            }
        }
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

#define ABS(x) ((x) > 0 ? (x) : -(x))

typedef struct {
    u8 pad0[1];
    s8 v;
    s8 w;
    u8 pad[0x34 - 3];
} Rec;

extern Rec D_003AA200[];
extern s32 D_003E9AA8;

s32 func_00240690(void) {
    s32 i;
    s32 r = 0;
    Rec *p;
    s32 t;
    if (D_003E9AA8 == 1) {
        for (i = 0, p = D_003AA200; i < 8; i++, p++) {
            if (p->w == 0) {
                s32 a = p->v;
                if (ABS(a) == 1 || ABS(a) == 2) {
                    r = 1;
                }
            }
        }
        D_003E9AA8 = r;
    }
    t = D_003E9AA8;
    D_003E9AA8 = 0;
    return t == 1;
}

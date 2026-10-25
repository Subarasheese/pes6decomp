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
extern u8 D_003E9AAC;

void func_00240610(void) {
    s32 i;
    Rec *p;
    D_003E9AAC = 0;
    for (i = 0, p = D_003AA200; i < 8; i++, p++) {
        s32 a = p->v;
        if (ABS(a) == 1 || ABS(a) == 2) {
            if (p->w == 0) {
                D_003E9AAC = 1;
            }
        }
    }
}

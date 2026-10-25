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
extern s8 D_0053C3A0[];
extern s8 D_0053C398[];
extern s32 D_003E9AA8;

void func_00240720(void) {
    s32 i;
    Rec *p;
    s8 *q1;
    s8 *q2;
    if (D_003E9AA8 == 0) {
        for (i = 0, p = D_003AA200, q1 = D_0053C3A0, q2 = D_0053C398; i < 8; i++, p++, q1++, q2++) {
            if (p->w == 0) {
                s32 a = p->v;
                if (ABS(a) == 1 || ABS(a) == 2) {
                    if (*q1 != 0) {
                        D_003E9AA8 = 1;
                    }
                    if (*q2 != p->v) {
                        D_003E9AA8 = 1;
                    }
                }
            }
        }
    }
}

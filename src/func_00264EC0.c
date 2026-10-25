/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Quad;

extern Quad D_003D9350[];
void func_001F43E0(s32, s32, s32, s32);

void func_00264EC0(void) {
    u32 i;
    Quad *q;

    for (i = 0, q = D_003D9350; i < 4; i++, q++) {
        func_001F43E0(q->a, q->b, q->c, q->d);
    }
}

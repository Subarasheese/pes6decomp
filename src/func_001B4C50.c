/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 on;
} Pair;

void func_001E59D0(s32, s32);

s32 func_001B4C50(Pair *p) {
    s32 old = 0;

    if (p != NULL) {
        old = p->on;
        func_001E59D0(p->a, 0);
        func_001E59D0(p->b, 0);
        p->on = 0;
    }
    return old;
}

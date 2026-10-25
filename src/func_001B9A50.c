/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

void func_001E59D0(s32, s32);

void func_001B9A50(Pair *p, s32 v) {
    func_001E59D0(p->a, v);
    func_001E59D0(p->b, v);
}

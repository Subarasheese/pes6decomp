/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 p[0x14]; s32 n; } P;
typedef struct { u8 p[0x3C]; P *q; } O;
void func_00338930(O *);

s32 func_0032A010(O *o) {
    P *q = o->q;
    if (q->n) {
        q->n--;
        return 0;
    }
    func_00338930(o);
    return 1;
}

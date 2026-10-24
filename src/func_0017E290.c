/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 *p0;
    u8 pad[0x40];
    s32 v44;
} Obj;

void func_0017E290(Obj *o) {
    s32 v = o->v44;
    if (o != NULL && o->p0 != NULL) {
        *o->p0 = v;
    }
}

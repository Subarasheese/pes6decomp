/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 start;
    s32 end;
    s32 pad8;
    u32 avail;
} Pool;

extern Pool *D_003FB420[];

void func_0012D570(s32 i) {
    Pool *pool = D_003FB420[i];

    if (pool != NULL) {
        pool->avail = pool->end - pool->start - 16;
    }
}

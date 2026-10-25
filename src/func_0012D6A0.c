/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u32 start;
    u32 end;
    s32 pad8;
    u32 avail;
} Pool;

extern Pool *D_003FB420[];

s32 func_0012D6A0(u32 addr) {
    u64 a = addr;
    s32 i;

    for (i = 0; i < 28; i++) {
        Pool *pool = D_003FB420[i];
        if (pool == NULL) continue;
        if ((u64)pool->end < a) continue;
        if ((u64)pool->start > a) continue;
        return i;
    }
    return -1;
}

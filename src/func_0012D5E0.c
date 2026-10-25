/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 start;
    s32 end;
    s32 pad8;
    u32 avail;
} Pool;

extern Pool *D_003FB420[];

void func_0012D5E0(s32 i, u32 n) {
    Pool *pool = D_003FB420[i];

    if (pool != NULL) {
        u32 max = pool->end - pool->start - 16;

        if (max < n) {
            n = max;
        }
        pool->avail = n;
    }
}

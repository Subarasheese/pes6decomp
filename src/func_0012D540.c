/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    u32 size;
} Pool;

extern Pool *D_003FB420[];

s32 func_0012D540(s32 index, u32 need) {
    Pool *pool = D_003FB420[index];

    if (pool != NULL) {
        return pool->size >= need;
    }
    return 0;
}

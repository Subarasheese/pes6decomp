/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 data[0x50000];
    s32 pos;
    s32 count;
    s32 size;
} Ring;

s32 func_001343D0(Ring *r, s32 n) {
    s32 size = r->size;
    s32 avail = size - r->count;

    n = n < avail ? n : avail;
    r->pos = (r->pos + n) % size;
    r->count += n;
    return n;
}

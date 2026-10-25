/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} Rect;

u64 func_001EB490(Rect *r) {
    return ((u64)r->z << 32) | ((u64)(s64)((r->x & ~0xF) - 1) | ((s64)((r->y & ~0xF) - 1) << 16));
}

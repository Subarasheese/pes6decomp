/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} Rect;

u64 func_001EB3E0(Rect *r) {
    return ((u64)r->z << 32) | ((u64)(s64)(r->x - 8) | ((s64)(r->y - 8) << 16));
}

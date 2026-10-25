/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} Rect;

void func_001EB380(Rect *src, u64 *dst, s32 n) {
    while (n != 0) {
        n--;
        *dst = (u64)(s64)(src->x - 8) | ((s64)(src->y - 8) << 16) | ((u64)src->z << 32);
        src++;
        dst++;
    }
}

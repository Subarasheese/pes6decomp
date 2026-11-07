/* compiler: ee-gcc-2.9 */
#include "types.h"

typedef struct {
    u64 bits;
    s64 cnt;
    u8 pad10[4];
    u8 *ptr;
    s32 avail;
    u8 *start;
    u8 *end;
} B;

#define SKIP(n) \
    b->bits <<= (n); \
    b->avail -= (n); \
    if (b->avail < 0x39) { \
        do { \
            u8 *q = b->ptr; \
            s32 a = b->avail; \
            b->bits |= (u64)*q << (0x38 - a); \
            q++; \
            b->ptr = q; \
            if ((u32)q >= (u32)b->end) { \
                b->ptr = b->start; \
            } \
            b->avail = a + 8; \
        } while (b->avail < 0x39); \
    } \
    b->cnt += (n);

s32 func_008FD790(B *b) {
    u64 t;
    SKIP(0x38)
    SKIP(0x28)
    if ((u32)(b->bits >> 32) >> 31 == 1) {
        do {
            SKIP(0x18)
            t = b->bits;
        } while ((u32)(t >> 32) >> 31 == 1);
    }
    return 1;
}

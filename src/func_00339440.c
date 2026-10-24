/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x64];
    s32 a;
    s32 b;
} Span;

s32 func_00339440(u8 *obj, s32 row, s32 col) {
    Span *span = (Span *)(obj + row * 20 + col * 8);

    return span->a - span->b;
}

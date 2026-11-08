/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

typedef struct H {
    struct H *next;
    volatile u32 id;
    s32 pad[2];
} H;

s32 func_001A5A08(u32);
extern H *D_012073C0;

s32 func_001A6680(s32 arg0) {
    H *h;
    s32 r;

    h = (H *)(((u32)arg0 >> 8) * sizeof(H));
    if (arg0 < 0 || ((arg0 ^ h->id) & 0xFF)) {
        return 0x80008002;
    }
    r = func_001A5A08(h->id);
    if (r == 0) {
        h->next = D_012073C0;
        D_012073C0 = h;
        h->id = 0;
    }
    return r;
}

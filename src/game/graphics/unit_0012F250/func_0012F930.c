/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x44];
    f32 v;
} Obj;

static inline f32 half_to_float(s32 h) {
    union {
        u32 i;
        f32 f;
    } u;

    if (h == 0) {
        return 0.0f;
    }
    u.i = (((h >> 15) & 1) << 31) | ((((h >> 10) & 0x1F) + 0x70) << 23) | ((h & 0x3FF) << 13);
    return u.f;
}

u16 *func_0012F930(Obj *o, u16 *p) {
    o->v = half_to_float(*p);
    return p + 1;
}

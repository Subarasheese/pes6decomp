/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w195_d.c (func_00402300). See THIRD_PARTY.md. */
#include "types.h"
typedef float f32;

typedef struct VT {
    u8 pad[0x24];
    s32 (*fn)(void *, s32);
} VT;
typedef struct Obj {
    VT *vt;
} Obj;

extern u8 D_003C8D40[];
extern void func_0015B478(u8 *);
extern s32 adxt_GetStat(u8 *);
extern s32 func_001662F0(u8 *);
extern s32 func_00166268(u8 *);

f32 func_00166F48(u8 *p) {
    f32 r = 0.0f;
    s32 a, b;
    Obj *o;
    if (p == 0) {
        func_0015B478(D_003C8D40);
        return -1.0f;
    }
    if (adxt_GetStat(p) >= 2) {
        o = *(Obj **)(p + 0x14);
        if (o != 0) {
            a = o->vt->fn(o, 1);
            b = func_001662F0(p);
            r = (f32)((a / (b * 18)) << 5) / (f32)func_00166268(p);
        }
    }
    return r;
}

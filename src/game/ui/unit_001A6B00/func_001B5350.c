/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *func_001EDD00(void *);
extern void func_001EF860(void *, void *);
extern void func_001EF900(void *, s32);
extern void func_001EE630(void *, s32);
extern void func_001EEAC0(void *, s32);
extern void func_001EF370(void *, s32);

typedef struct { f32 x, y; s32 z, w; } V4;
typedef struct { f32 x, y; } V2;

void *func_001B5350(s32 a0, s32 a1, void *a2, s32 a3, f32 fx, f32 fy) {
    V4 t;
    V2 v;
    void *o = func_001EDD00(a2);
    v.x = fx;
    v.y = fy;
    if (o != NULL) {
        if (&v != NULL) {
            t.x = v.x;
            t.z = 0;
            t.y = v.y;
            t.w = 0;
            func_001EF860(o, &t);
        }
        if (a0 != 0) func_001EF370(o, a0);
        if (a3 != 0) func_001EEAC0(o, a3);
        if (a1 != 0) func_001EE630(o, a1);
        func_001EF900(o, 1);
    }
    return o;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 f0;
} Obj;

typedef struct {
    u8 pad[0x18];
    s32 f18;
} Node;

extern s32 func_00256DC0(s32 a);
extern void func_001B9250(s32 a, void *fn);
extern void func_00265990(void);
extern s32 func_00265C70(s32 a, s32 b, s32 c, s32 d);
extern s32 D_0058D410[];
extern s32 D_0058D414[];
extern Node *D_0058D41C[];

s32 func_00265130(Obj *o, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 res = 0;
    if (o != 0) {
        s32 h = func_00256DC0(o->f0);
        D_0058D410[0] = a1;
        D_0058D414[0] = a2;
        D_0058D41C[0] = 0;
        func_001B9250(h, func_00265990);
        if (D_0058D41C[0] != 0) {
            res = func_00265C70(D_0058D41C[0]->f18, a3, 0, a4);
        }
    }
    return res;
}

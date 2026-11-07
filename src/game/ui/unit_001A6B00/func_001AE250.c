/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    void *handle;
    u8 pad14[0x1D];
    u8 f31;
    u8 pad32[0x1CC];
    u8 f1FE;
} Obj;

extern void func_0017DF40(void *h, s32 a, s32 b);
extern void func_0017DF20(void *h, s32 a, s32 b);

void func_001AE250(Obj *o) {
    void *h = o->handle;

    if (h == NULL) {
        return;
    }
    func_0017DF40(h, 0x65, 1000);
    if (o->f1FE == 0) {
        func_0017DF20(h, 0x65, o->f31 + 1001);
    } else {
        func_0017DF20(h, 0x65, o->f31 + 1005);
    }
}

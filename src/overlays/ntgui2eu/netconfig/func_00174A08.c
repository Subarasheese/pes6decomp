/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

typedef struct W W;
typedef struct {
    u8 pad[0x128];
    void (*x128)(W *, s32);
} WC;
struct W {
    u8 pad[0x4C];
    WC *cls;
    u8 pad50[0x918 - 0x50];
    s32 x918;
};

void func_00165CB0(W *);
extern s32 (*D_005C14A0)(W *, W *, W *);

s32 func_00174A08(W *arg0, W *arg1, W *arg2) {
    s32 r;
    s32 v;

    r = D_005C14A0(arg0, arg1, arg2);
    v = arg1->x918;
    if (v != arg2->x918) {
        if (arg0->cls->x128 != NULL) {
            arg0->cls->x128(arg0, v);
        } else {
            arg0->x918 = v;
        }
        func_00165CB0(arg0);
        r = 1;
    }
    return r;
}

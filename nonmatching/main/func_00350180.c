/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0030F1A0(void);
extern s32 func_0030E780(void);
extern s32 func_003387D0(void *, void *, void *);
extern s32 func_00333600(s32);
extern s32 func_00338750(void *, s32);
extern s32 func_0030EA70(void);
extern s8 D_003E9F80;
extern void func_00350A70(void);
extern char D_003E6408[];

s32 func_00350180(void *arg0) {
    s32 m;
    s32 t;

    m = func_0030EA70() % 45;
    if ((m != 0x2B) && (m != 0x22) && (m != 0x20) && (m != 0x13)) {
        if (func_0030E780() != 0) {
            return 0;
        }
        t = 1 & func_00333600(2);
        if ((t & func_0030F1A0()) == 0) {
            return 0;
        }
    }
    func_003387D0(arg0, (void *)func_00350A70, D_003E6408);
    func_00338750(arg0, 5);
    D_003E9F80 = 0;
    return 0;
}

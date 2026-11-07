/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0083F470(s32);
s8 func_00840E40(void);
extern s8 D_0058D7AB[];

void func_0087F550(void) {
    s8 r;
    s32 a;
    s32 b;
    s8 v;

    r = func_00840E40();
    a = func_0083F470(0);
    b = func_0083F470(1);
    if (r != 0) {
        v = 2;
    } else if ((a == 1) && (b == 1)) {
        v = 0;
    } else {
        v = 1;
    }
    D_0058D7AB[0] = v;
}

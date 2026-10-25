/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 f0, f4, f8, fC, kind, a4, flag, pad, a7, a3, s1, s2, s0;
} Args;

extern void func_00250BF0(Args *a);

void func_00251740(s32 a0, s32 a1) {
    Args a = {0};
    a.f8 = a0;
    a.a4 = a1;
    if (a1 > 0) {
        a.flag = 5;
    } else {
        a.flag = 4;
    }
    func_00250BF0(&a);
}

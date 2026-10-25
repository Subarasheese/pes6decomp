/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a0, a5, a1, a6, kind, a4, flag, pad, a7, a3, s1, s2, s0;
} Args;

extern void func_00250BF0(Args *a);

void func_002517B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 s0, s32 s1, s32 s2) {
    Args a;
    a.a0 = a0;
    a.a1 = a1;
    a.a5 = a5;
    a.a3 = a3;
    a.a4 = a4;
    a.a6 = a6;
    a.a7 = a7;
    a.s0 = s0;
    a.s1 = s1;
    a.s2 = s2;
    switch (a2) {
    case 10:
    case 11:
        a.kind = 0;
        break;
    case 12:
    case 13:
        a.kind = 1;
        break;
    case 14:
    case 15:
        a.kind = 2;
        break;
    }
    if (a4 > 0) {
        a.flag = 1;
    } else {
        a.flag = 0;
    }
    func_00250BF0(&a);
}

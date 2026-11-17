/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00223520(u16 *, u8 *);
s32 func_00223A00();
s32 func_00223A10();
void *func_00237530(u16);

struct Pair {
    u16 a;
    u8 pad;
    u8 b;
};

s32 func_002232E0(u16 arg0, u8 arg1) {
    struct Pair p;
    s32 temp_v0;
    s32 var_s0;

    p.a = arg0;
    var_s0 = 0;
    p.b = arg1;
    temp_v0 = func_00223520(&p.a, &p.b);
    if (temp_v0 == 3) {
        return var_s0;
    }
    if (temp_v0 == 2) {
        var_s0 = func_00223A00();
        if (var_s0 != 0) {
            p.a = *(u16 *)((char *)func_00237530(p.a) + 0x170);
            var_s0 += (p.b + (p.a << 5)) * 2;
        }
    } else if (temp_v0 == 1) {
        var_s0 = func_00223A00();
        if (var_s0 != 0) {
            var_s0 += (p.b + (p.a << 5)) * 2;
        }
    } else {
        var_s0 = func_00223A10();
        if (var_s0 != 0) {
            var_s0 += (p.b + p.a * 23) * 2;
        }
    }
    return var_s0;
}

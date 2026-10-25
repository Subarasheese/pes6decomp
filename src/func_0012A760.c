/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_00375B88[];
extern s32 D_00375B8C[];
s32 func_00105380(s32);
void func_001053A0(s32);

void func_0012A760(void) {
    s32 a = D_00375B88[0];
    s32 b = D_00375B8C[0];

    if (a >= 0 && b >= 0) {
        if (func_00105380(a) == a) {
            func_001053A0(b);
        }
    }
}

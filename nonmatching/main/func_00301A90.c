/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003B4F00[];
s32 func_00305C60(s32 a0, s32 a1);
void func_002D4C40(s32 a0);
void func_00305E60(s32 a0, void *a1);
void func_00301A00(void);

s32 func_00301A90(s32 a0) {
    s32 *s0 = *(s32 **)(a0 + 0x18);
    s32 idx;
    s0[9] = 0xFF;
    idx = 0xFF;
    if (s0[9] == idx) {
        return 0;
    }
    if (func_00305C60(a0, D_003B4F00[idx]) == 1) {
        s0[9] = 0xFF;
        return 0;
    }
    func_002D4C40(D_003B4F00[s0[9]]);
    s0[10] = D_003B4F00[s0[9]];
    func_00305E60(a0, (void *)func_00301A00);
    return 1;
}

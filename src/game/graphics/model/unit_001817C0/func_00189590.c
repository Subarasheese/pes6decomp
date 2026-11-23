/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#pragma no_branch_likely on
#include "types.h"
extern s32 func_00182000(s32 slot);
extern void func_00182050(s32 slot, float x, float y, float z);
extern float func_001A38A0(void), func_001A38B0(void), func_001A3890(void);
extern float D_005200D0[];
void func_00189590(void) {
    float x, y;
    if (func_00182000(0)) {
        y = 0.9f * func_001A38A0();
        x = D_005200D0[0] * func_001A38B0();
        func_00182050(0, x, y, D_005200D0[0] * func_001A3890());
    }
}

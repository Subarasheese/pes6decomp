/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/match_math.h"
#include "types.h"
extern float func_001A3830(void);
extern float func_001A3840(void);
extern void func_0019E670(float first, float second);
extern s32 D_005200F0[];
void func_00189A50(void) {
    if (D_005200F0[0] != 1) {
        float first = pes6_absf(func_001A3840());
        func_0019E670(first, pes6_absf(func_001A3830()));
        D_005200F0[0] = 1;
    }
}

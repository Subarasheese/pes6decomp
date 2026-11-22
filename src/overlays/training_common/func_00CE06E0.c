/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002133E0(s32);
extern s32 func_00213800(s32, s32);

extern s32 D_003EB2A0;

void func_00CE06E0(void) {
    s32 temp_v0;

    func_00213800(D_003EB2A0, 0);
    temp_v0 = func_002133E0(D_003EB2A0);
    D_003EB2A0 = temp_v0;
    func_00213800(temp_v0, 0);
}

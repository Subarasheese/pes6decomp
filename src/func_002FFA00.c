/* compiler: mwcc-3.0.1b210 */
#include "types.h"
void func_002FF8A0(void);
void func_00305E60(s32 arg0, void *arg1);
s32 func_002FFA00(s32 arg0) {
    s32 *p = *(s32 **)(arg0 + 0x18);
    p[6] = 0;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    func_00305E60(arg0, func_002FF8A0);
    return 0x1;
}

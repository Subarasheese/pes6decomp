/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
extern void *D_00A7D718[];
extern void func_002F39A0(void *), func_00817930(void), func_009858E0(s32);
void func_009858A0(s32 state, s32 close) {
    if (close) {
        func_002F39A0(D_00A7D718[0]);
        func_00817930();
    }
    func_009858E0(state);
}

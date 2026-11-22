/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int func_00308400(void);
s32 func_002691E0(s32);

s32 func_00269440(void) {
    if (func_00308400() != 0) {
        return 0;
    }
    func_002691E0(1);
    return 0;
}

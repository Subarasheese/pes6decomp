/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00AE3240(void);
s32 func_00AEA2E0(s32);

s32 func_00AEA260(void) {
    if (func_00AE3240() == 0) {
        return 0;
    }
    func_00AEA2E0(1);
    return 0;
}

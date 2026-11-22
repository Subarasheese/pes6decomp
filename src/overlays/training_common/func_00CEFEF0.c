/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001BE5B0(s32);
extern void func_00CE44E0(void);
extern void *D_003E7E1C;

s32 func_00CEFEF0(void) {
    if (func_001BE5B0(0) == 0) {
        return 0;
    }
    func_00CE44E0();
    M2C_FIELD(D_003E7E1C, s32 *, 4) = 0;
    return 1;
}

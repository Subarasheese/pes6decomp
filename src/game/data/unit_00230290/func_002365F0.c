/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);
s32 func_00234E00(s32);

s32 func_002365F0(s32 x) {
    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0;
    }
    return func_00234E00(x);
}

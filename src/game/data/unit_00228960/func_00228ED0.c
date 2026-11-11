/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);
s32 func_00228AD0(s32, s32, s32);

s32 func_00228ED0(s32 a, s32 b) {
    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0xFF;
    }
    return func_00228AD0(a, b, 0);
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *Pes6SaveData_GetHeaderBlock(void);
s32 Pes6SaveData_IsUnavailable(void);

s32 func_00226710(void) {
    u8 *info = Pes6SaveData_GetHeaderBlock();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0;
    }
    if (info == NULL) {
        return 0;
    }
    return info[2];
}

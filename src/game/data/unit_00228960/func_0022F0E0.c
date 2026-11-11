/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E74E0;
s32 Pes6SaveData_GetUnavailableFlag(void);

s32 func_0022F0E0(void) {
    s32 flag;

    flag = Pes6SaveData_GetUnavailableFlag() != 0;
    return flag == 1 ? 0 : D_003E74E0;
}

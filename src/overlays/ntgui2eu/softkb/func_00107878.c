/* compiler: ee-gcc-2.96-Os-G0 */
#include "pes6/m2c.h"


extern M2C_UNK (*D_002BFD28)(M2C_UNK, s32);

void func_00107878(s32 arg0) {
    if (D_002BFD28 != NULL) {
        D_002BFD28(7, arg0);
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_00154060(M2C_UNK, M2C_UNK);              /* extern */

void func_001B9750(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00154060(1, 0xC);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = arg0;
        M2C_FIELD(temp_v0, s32 *, 4) = arg1;
    }
}

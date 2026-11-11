/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *Pes6SaveData_GetHeaderBlock();                              /* extern */
s32 Pes6SaveData_IsUnavailable();                                /* extern */

void func_00226670(s8 arg0) {
    void *temp_s0;

    temp_s0 = Pes6SaveData_GetHeaderBlock();
    if ((Pes6SaveData_IsUnavailable() != 1) && (temp_s0 != NULL)) {
        M2C_FIELD(temp_s0, s8 *, 6) = arg0;
    }
}

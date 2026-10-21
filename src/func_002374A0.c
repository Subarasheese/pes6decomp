/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00223960();                              /* extern */

void func_002374A0(s32 arg0, s16 arg1) {
    void *temp_v0;

    temp_v0 = func_00223960();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s16 *, 0x170) = arg1;
    }
}

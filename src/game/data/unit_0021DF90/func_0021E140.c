/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00223960();                              /* extern */

void func_0021E140(s32 arg0, s8 arg1) {
    void *temp_v0;

    temp_v0 = func_00223960();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x173) = arg1;
    }
}

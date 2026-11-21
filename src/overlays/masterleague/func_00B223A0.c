/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

extern s32 *func_00994760(void);

void func_00B223A0(s32 arg0) {
    s32 *temp_v0;

    temp_v0 = func_00994760();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x61ABC) = M2C_FIELD(temp_v0, s32 *, 0x61ABC) + arg0;
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_00154060(M2C_UNK, s32);                  /* extern */

void *func_002F97E0(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00154060(1, 8);
    if ((temp_v0 != NULL) && (arg0 > 0)) {
        M2C_FIELD(temp_v0, void **, 0) = func_00154060(1, arg0 * 4);
        M2C_FIELD(temp_v0, s32 *, 4) = arg0;
    }
    return temp_v0;
}

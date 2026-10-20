/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F1EA0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */

s32 func_00211160(void *arg0) {
    s32 *temp_v0_2;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 **, 4);
    if (temp_v0_2 != NULL) {
        *temp_v0_2 = 0;
    }
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x5A0));
    func_001F1EA0(M2C_FIELD(arg0, s32 *, 0x590));
    return 1;
}

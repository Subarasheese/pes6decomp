/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK func_001CDAD0(s32);                         /* extern */

void func_0017E240(void *arg0) {
    s32 *temp_v1;
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x44);
    func_001CDAD0(temp_s0);
    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 **, 0);
        if (temp_v1 != NULL) {
            *temp_v1 = temp_s0;
        }
    }
}

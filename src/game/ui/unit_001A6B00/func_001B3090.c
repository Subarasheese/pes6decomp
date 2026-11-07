/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001B30C0();                            /* extern */

void func_001B3090(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    func_001B30C0();
    M2C_FIELD(temp_s0, s8 *, 0x64) = 2;
}

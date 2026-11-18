#include "pes6/m2c.h"
M2C_UNK ADXCRS_Lock();                            /* extern */
M2C_UNK ADXCRS_Unlock();                            /* extern */
M2C_UNK func_001672D0();                            /* extern */

void func_001672A8(void) {
    ADXCRS_Lock();
    func_001672D0();
    ADXCRS_Unlock();
}

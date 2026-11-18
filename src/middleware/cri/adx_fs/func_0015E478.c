#include "pes6/m2c.h"
M2C_UNK ADXCRS_Lock();                            /* extern */
M2C_UNK ADXCRS_Unlock();                            /* extern */
M2C_UNK func_0015E4A0();                            /* extern */

void func_0015E478(void) {
    ADXCRS_Lock();
    func_0015E4A0();
    ADXCRS_Unlock();
}

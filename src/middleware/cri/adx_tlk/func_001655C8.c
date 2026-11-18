#include "pes6/m2c.h"
M2C_UNK ADXCRS_Lock();                            /* extern */
M2C_UNK ADXCRS_Unlock();                            /* extern */
M2C_UNK func_001655F0();                            /* extern */

void func_001655C8(void) {
    ADXCRS_Lock();
    func_001655F0();
    ADXCRS_Unlock();
}

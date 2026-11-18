#include "pes6/m2c.h"
M2C_UNK ADXCRS_Lock();                            /* extern */
M2C_UNK ADXCRS_Unlock();                            /* extern */
M2C_UNK func_0015EF68();                            /* extern */

void func_0015EF40(void) {
    ADXCRS_Lock();
    func_0015EF68();
    ADXCRS_Unlock();
}

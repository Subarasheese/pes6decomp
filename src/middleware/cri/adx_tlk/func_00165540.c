#include "pes6/m2c.h"
M2C_UNK ADXCRS_Lock();                            /* extern */
M2C_UNK ADXCRS_Unlock();                            /* extern */
M2C_UNK func_00165568();                            /* extern */

void func_00165540(void) {
    ADXCRS_Lock();
    func_00165568();
    ADXCRS_Unlock();
}

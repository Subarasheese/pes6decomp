#include "pes6/m2c.h"
M2C_UNK ADXCRS_Lock();                            /* extern */
M2C_UNK ADXCRS_Unlock();                            /* extern */
M2C_UNK func_001671B8();                            /* extern */

void func_00167190(void) {
    ADXCRS_Lock();
    func_001671B8();
    ADXCRS_Unlock();
}

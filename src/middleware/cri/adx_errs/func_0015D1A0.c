#include "pes6/m2c.h"
M2C_UNK func_0015D1C8();                            /* extern */
M2C_UNK ADXF_Lock();                            /* extern */
M2C_UNK ADXF_Unlock();                            /* extern */

void func_0015D1A0(void) {
    ADXF_Lock();
    func_0015D1C8();
    ADXF_Unlock();
}

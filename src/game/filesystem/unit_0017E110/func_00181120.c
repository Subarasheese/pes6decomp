/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00155A00();                            /* extern */
M2C_UNK func_00155A10();                            /* extern */
M2C_UNK ADXF_Close(s32);                         /* extern */

void func_00181120(s32 arg0) {
    func_00155A10();
    ADXF_Close(arg0);
    func_00155A00();
}

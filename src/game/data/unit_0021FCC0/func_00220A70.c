/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *Pes6OptionData_GetBase();                              /* extern */

void func_00220A70(s8 arg0) {
    M2C_FIELD(Pes6OptionData_GetBase(), s8 *, 0x31B) = arg0;
}

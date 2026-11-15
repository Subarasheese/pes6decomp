/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Process_Destroy(s32);                         /* extern */
M2C_UNK Pes6Process_Unlink();                            /* extern */

void func_001BBC20(s32 arg0) {
    Pes6Process_Unlink();
    Pes6Process_Destroy(arg0);
}

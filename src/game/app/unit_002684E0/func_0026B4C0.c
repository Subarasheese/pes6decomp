#include "pes6/m2c.h"
s32 *Pes6Process_GetWork();                               /* extern */

void func_0026B4C0(s32 arg0) {
    if (arg0 != 0) {
        *Pes6Process_GetWork() = 1;
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
u8 *Pes6SaveData_GetBlockE970(void);
u8 func_0022F8D0(void) {
    u8 *p;
    p = Pes6SaveData_GetBlockE970();
    if (p != 0) {
        return *(u8 *)(p + 0x33EB0);
    }
    return 0;
}

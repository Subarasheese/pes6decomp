/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
u8 *func_00223960(void);
u8 func_002374D0(void) {
    u8 *p;
    p = func_00223960();
    if (p != 0) {
        return *(u8 *)(p + 0x172);
    }
    return 0;
}

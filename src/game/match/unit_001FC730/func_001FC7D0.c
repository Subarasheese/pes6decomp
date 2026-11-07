/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
u8 *func_001FC920(void);
s32 func_001FC7D0(void) {
    u8 *p;
    p = func_001FC920();
    if (p == 0) {
        return -1;
    }
    return *(s32 *)(p + 8);
}

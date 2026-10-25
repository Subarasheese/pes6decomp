/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_001FC920(void);

s32 func_001FC7A0(void) {
    u8 *info = func_001FC920();

    if (info != NULL) {
        return info[0xC] == 2;
    }
    return 0;
}

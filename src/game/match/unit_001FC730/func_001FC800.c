/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_001FCCE0(void);

s32 func_001FC800(void) {
    void *entry = func_001FCCE0();

    if (entry == NULL) {
        return 0;
    }
    return M2C_FIELD(entry, s32 *, 0x4);
}

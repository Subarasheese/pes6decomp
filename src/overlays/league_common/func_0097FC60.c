/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003EA970;

u8 func_0097FC60(void) {
    if (D_003EA970 == NULL) {
        return 0U;
    }
    return M2C_FIELD(D_003EA970, u8 *, 4102);
}

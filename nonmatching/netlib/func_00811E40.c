/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00884040(void);
M2C_UNK func_00841FE0();                            /* extern */
M2C_UNK func_00843690(M2C_UNK);                     /* extern */
M2C_UNK func_00846B60();                            /* extern */
M2C_UNK func_00857FA0();                            /* extern */

s32 func_00811E40(void *arg0) {
    if (func_00884040() == 0) {
        return 0;
    }
    func_00846B60();
    if (M2C_FIELD(arg0, s8 *, 3) != 0) {
        func_00843690(5);
        func_00841FE0();
        func_00857FA0();
    }
    return -1;
}

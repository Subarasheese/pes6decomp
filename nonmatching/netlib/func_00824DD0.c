/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00843800(M2C_UNK);                     /* extern */
M2C_UNK func_008439C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00843C00();                            /* extern */

s32 func_00824DD0(void) {
    func_00843C00();
    func_00843800(0);
    func_008439C0(1, 0x3E8);
    func_008439C0(2, 0x3E8);
    return 1;
}

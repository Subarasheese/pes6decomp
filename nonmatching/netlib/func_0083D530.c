/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00828160();                            /* extern */
s32 *func_00842650();                               /* extern */
M2C_UNK func_00842970(M2C_UNK);                     /* extern */
M2C_UNK func_008429F0(M2C_UNK);                     /* extern */

s32 func_0083D530(void) {
    s32 *temp_s0;

    temp_s0 = func_00842650();
    func_00828160();
    if (temp_s0 != NULL) {
        *temp_s0 = 0;
        func_00842970(1);
        func_008429F0(1);
    }
    return 0;
}

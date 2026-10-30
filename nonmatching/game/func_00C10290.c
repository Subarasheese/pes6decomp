/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C13870(s8 *);                        /* extern */

void func_00C10290(M2C_UNK arg0, void *arg1) {
    s8 sp10;
    u8 sp11;
    u8 sp12;
    u8 sp13;

    sp10 = 1;
    sp11 = M2C_FIELD(arg1, u8 *, 0);
    sp12 = M2C_FIELD(arg1, u8 *, 1);
    sp13 = M2C_FIELD(arg1, u8 *, 2);
    func_00C13870(&sp10);
}

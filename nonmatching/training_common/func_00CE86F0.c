/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CE5C00();                            /* extern */
M2C_UNK func_00CE84C0();                            /* extern */
M2C_UNK func_00CE9410();                            /* extern */
M2C_UNK func_00CE9F00(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_00CE86F0(void) {
    func_00CE9F00(1, 0xC, 0);
    func_00CE9F00(1, 0xD, 0);
    func_00CE9F00(1, 0, 0);
    func_00CE9F00(1, 1, 0);
    func_00CE84C0();
    func_00CE5C00();
    func_00CE9410();
}

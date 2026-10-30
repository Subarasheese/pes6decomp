/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008DFD80(void *);                      /* extern */
M2C_UNK func_008DFDC0();                            /* extern */

void func_008E02D0(void *arg0) {
    func_008DFDC0();
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    M2C_FIELD(arg0, s8 *, 0x51) = 0;
    M2C_FIELD(arg0, s8 *, 0x52) = 0;
    func_008DFD80(arg0);
}

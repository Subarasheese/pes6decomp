/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C8E30(void *);                      /* extern */
M2C_UNK func_008C91C0(void *);                      /* extern */
M2C_UNK func_008CBFF0(void *);                      /* extern */
M2C_UNK func_008E7F00(void *);                      /* extern */

void func_008CBFA0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x16) = arg1;
    func_008E7F00(arg0 + 0x6F0);
    func_008C91C0(arg0 + 0x77C);
    func_008C8E30(arg0 + 0x78C);
    func_008CBFF0(arg0);
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009496A0();                            /* extern */
M2C_UNK func_00949C00();                            /* extern */
M2C_UNK func_00984790(u8);                          /* extern */
extern void *D_003E77B0;

void func_0094A0E0(void) {
    func_00949C00();
    func_009496A0();
    func_00984790(M2C_FIELD(D_003E77B0, u8 *, 0x2C));
    func_00984790(M2C_FIELD(D_003E77B0, u8 *, 0x2D));
}

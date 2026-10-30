/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_00CEAD00(u32);
M2C_UNK func_00147F90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00CD5EA0();                            /* extern */

void func_00CEE640(void *arg0) {
    func_00147F90(1, 0x73, 0x50);
    func_00CD5EA0();
    func_00CEAD00(0x110U);
    func_00264790(arg0, 6U);
}

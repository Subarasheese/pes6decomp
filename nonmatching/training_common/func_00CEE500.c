/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_00CEAD00(u32);
M2C_UNK func_00CD5DE0();                            /* extern */

void func_00CEE500(void *arg0) {
    func_00CEAD00(0x111U);
    func_00CD5DE0();
    func_00264790(arg0, 0xBU);
}

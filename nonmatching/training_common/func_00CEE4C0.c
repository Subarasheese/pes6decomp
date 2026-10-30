/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
M2C_UNK func_00CEFB50();                            /* extern */
M2C_UNK func_00CEFC30();                            /* extern */

void func_00CEE4C0(void *arg0) {
    func_00CEFB50();
    func_00CEFC30();
    func_00264790(arg0, 0xCU);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C8E00(void *, s8);                  /* extern */
M2C_UNK func_008D21F0(void *);                      /* extern */
M2C_UNK func_008E7280(void *, s8);                  /* extern */

void func_008C9CB0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
    func_008D21F0(arg0 + 0x480);
    func_008E7280(arg0 + 0x28, arg1);
    func_008C8E00(arg0 + 0x78C, arg1);
}

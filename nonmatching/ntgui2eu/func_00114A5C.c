/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00113374(void *);                      /* extern */
M2C_UNK func_00114590(void *, s32);                 /* extern */
M2C_UNK func_00114940(void *);                      /* extern */
M2C_UNK func_001149E8();                            /* extern */

void func_00114A5C(void *arg0) {
    func_001149E8();
    func_00114940(arg0);
    func_00114590(arg0, M2C_FIELD(arg0, s32 *, 0x54));
    func_00113374(arg0);
}

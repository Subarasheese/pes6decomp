/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00197358();                                /* extern */
s32 func_00197410();                                /* extern */
M2C_UNK func_001977B8(s32, s32);                    /* extern */

void func_00197850(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_00197358();
    func_001977B8(arg0, temp_s1 + ((func_00197410() * 0x3C) - 0x21C));
}

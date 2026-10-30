/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016F9C8(void *);                      /* extern */
M2C_UNK func_0016FA18();                            /* extern */

void func_0016F968(void *arg0, s64 arg1) {
    s64 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s64 *, 0x930);
    M2C_FIELD(arg0, s64 *, 0x930) = arg1;
    M2C_FIELD(arg0, s64 *, 0x920) = temp_v0;
    func_0016FA18();
    if (M2C_FIELD(arg0, s64 *, 0x920) != M2C_FIELD(arg0, s64 *, 0x930)) {
        func_0016F9C8(arg0);
    }
}

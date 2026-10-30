/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010C7C0();                            /* extern */
M2C_UNK func_0010C910();                            /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, s32);              /* extern */
extern char D_005F76C0[];

void func_00108078(s32 arg0) {
    if (arg0 == -1) {
        func_0010C910();
    } else {
        func_0010C7C0();
    }
    func_0019DBD0(((void *)D_005F76C0), arg0);
}

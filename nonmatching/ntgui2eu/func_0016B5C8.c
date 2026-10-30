/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018C438(f32);                             /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, s32);              /* extern */
extern char D_005FD468[];
extern f32 (*D_011F6C18)();

f32 func_0016B5C8(void) {
    f32 temp_f0;

    if (D_011F6C18 != NULL) {
        temp_f0 = D_011F6C18();
        func_0019DBD0(((void *)D_005FD468), func_0018C438(temp_f0));
        return temp_f0;
    }
    return 1.0f;
}

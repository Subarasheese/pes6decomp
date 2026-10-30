/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586E0();                            /* extern */
extern char D_011E2320[];

void func_00156AE8(void *arg0) {
    M2C_UNK (*temp_v1)(s32);

    func_001586E0();
    temp_v1 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 8);
    if (temp_v1 != NULL) {
        temp_v1((*(s32 *)D_011E2320));
    }
}

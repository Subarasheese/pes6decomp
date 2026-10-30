/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E9600(void *);                      /* extern */
M2C_UNK func_009E97C0(void *);                      /* extern */

s32 func_00976C30(void *arg0) {
    M2C_UNK (*temp_v0)(s32);
    void *temp_v1;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 8) != 0) {
        func_009E9600(arg0 + 0x10);
    } else {
        func_009E97C0(arg0 + 0x10);
    }
    temp_v1 = M2C_FIELD(arg0, void **, 0x54);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK (**)(s32), 8);
    if (temp_v0 != NULL) {
        temp_v0(M2C_FIELD(temp_v1, s32 *, 0));
    }
    return 1;
}

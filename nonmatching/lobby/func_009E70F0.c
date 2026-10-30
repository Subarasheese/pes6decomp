/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E8910(void *);                      /* extern */
M2C_UNK func_009E9B40(s32);                         /* extern */

s32 func_009E70F0(void *arg0) {
    M2C_UNK (*temp_v0)(s32);
    void *temp_v1;

    func_009E9B40(arg0 + 0x10);
    temp_v1 = M2C_FIELD(arg0, void **, 0x54);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK (**)(s32), 8);
    if (temp_v0 != NULL) {
        temp_v0(M2C_FIELD(temp_v1, s32 *, 0));
    }
    func_009E8910(arg0);
    return 1;
}

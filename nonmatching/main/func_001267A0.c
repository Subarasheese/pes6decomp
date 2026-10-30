/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00124590(s32, void *);                 /* extern */

s32 func_001267A0(void *arg0) {
    s32 temp_a0;
    void *temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x24);
        if ((temp_v1 != NULL) && (M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C) != NULL)) {
            temp_a0 = M2C_FIELD(temp_v1, s32 *, 0x20);
            if (temp_a0 != 0) {
                func_00124590(temp_a0, arg0);
            }
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, void **, 0x24) = NULL;
            return 0;
        }
    }
    return -2;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E88F0(void *);                      /* extern */
M2C_UNK func_009E8930(void *);                      /* extern */
M2C_UNK func_009E9980(void *);                      /* extern */
M2C_UNK func_009E9D00(void *);                      /* extern */

s32 func_009E8340(void *arg0) {
    M2C_UNK (*temp_v0)(s32);
    M2C_UNK (*temp_v0_2)(s32);
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;

    temp_a0 = arg0 + 0x10;
    if (M2C_FIELD(arg0, s32 *, 0x50) == 0) {
        func_009E9D00(temp_a0);
        temp_v1 = M2C_FIELD(arg0, void **, 0x54);
        temp_v0 = M2C_FIELD(temp_v1, M2C_UNK (**)(s32), 8);
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(temp_v1, s32 *, 0));
        }
        func_009E8930(arg0);
    } else {
        func_009E9980(temp_a0);
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x54);
        temp_v0_2 = M2C_FIELD(temp_v1_2, M2C_UNK (**)(s32), 8);
        if (temp_v0_2 != NULL) {
            temp_v0_2(M2C_FIELD(temp_v1_2, s32 *, 0));
        }
        func_009E88F0(arg0);
    }
    return 1;
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D0A120(s32);                         /* extern */
M2C_UNK func_00D11310(s32);                         /* extern */

s32 func_00D09F30(void *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    if (arg0 != NULL) {
        func_00D11310(arg0 + 0x10);
        if (arg0 != NULL) {
            temp_v1 = M2C_FIELD(arg0, void **, 0x54);
            if (temp_v1 != NULL) {
                M2C_FIELD(temp_v1, void **, 0x50) = (void *) M2C_FIELD(arg0, void **, 0x50);
            }
            temp_v1_2 = M2C_FIELD(arg0, void **, 0x50);
            if (temp_v1_2 != NULL) {
                M2C_FIELD(temp_v1_2, void **, 0x54) = (void *) M2C_FIELD(arg0, void **, 0x54);
            }
            M2C_FIELD(arg0, void **, 0x50) = NULL;
            M2C_FIELD(arg0, void **, 0x54) = NULL;
        }
        func_00D0A120(M2C_FIELD(arg0, s32 *, 4));
        return 0;
    }
    return 1;
}

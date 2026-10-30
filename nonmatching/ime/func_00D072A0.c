/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0080A280(s32, s32);                    /* extern */

s32 func_00D072A0(s32 arg0, void *arg1) {
    void *temp_v1;
    void *temp_v1_2;

    if (arg1 == NULL) {
        return 1;
    }
    if (arg1 != NULL) {
        temp_v1 = M2C_FIELD(arg1, void **, 0x154);
        if (temp_v1 != NULL) {
            M2C_FIELD(temp_v1, void **, 0x150) = (void *) M2C_FIELD(arg1, void **, 0x150);
        }
        temp_v1_2 = M2C_FIELD(arg1, void **, 0x150);
        if (temp_v1_2 != NULL) {
            M2C_FIELD(temp_v1_2, void **, 0x154) = (void *) M2C_FIELD(arg1, void **, 0x154);
        }
        M2C_FIELD(arg1, void **, 0x150) = NULL;
        M2C_FIELD(arg1, void **, 0x154) = NULL;
    }
    if (arg1 != NULL) {
        func_001C48E8(arg1 + 0x18, 0, 0x21);
    }
    if (arg1 != NULL) {
        func_001C48E8(arg1 + 0x39, 0, 0x101);
    }
    func_0080A280(arg0, M2C_FIELD(arg1, s32 *, 4));
    return 0;
}

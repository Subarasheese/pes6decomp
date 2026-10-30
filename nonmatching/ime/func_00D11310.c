/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00D10EE0(void *);                      /* extern */

s32 func_00D11310(void *arg0) {
    void *temp_a0;

    if (arg0 == NULL) {
        return 1;
    }
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x20);
        if (temp_a0 != NULL) {
            func_001D7F10(temp_a0);
            M2C_FIELD(arg0, void **, 0x20) = NULL;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s8 *, 0x3D) = 1;
        M2C_FIELD(arg0, s8 *, 0x3E) = 1;
    }
    func_00D10EE0(arg0);
    func_001C48E8(arg0, 0, 0x40);
    return 0;
}

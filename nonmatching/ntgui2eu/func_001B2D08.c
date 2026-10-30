/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B2AF8(void *, M2C_UNK, M2C_UNK, void *); /* extern */
extern M2C_UNK func_001B2CC8;

void func_001B2D08(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x1E4;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &func_001B2CC8;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    func_001B2AF8(temp_s1, 4, 0, arg0);
    func_001B2AF8(arg0 + 0x23C, 9, 1, arg0);
    func_001B2AF8(arg0 + 0x294, 0xA, 2, arg0);
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
    M2C_FIELD(arg0, void **, 0x1E0) = temp_s1;
    M2C_FIELD(arg0, s32 *, 0x1DC) = 3;
}

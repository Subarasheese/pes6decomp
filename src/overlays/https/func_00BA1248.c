/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00BA1248(void *arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(arg1, void **, 0x18) = temp_v1;
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, u8 *, 0x16) = (u8)(M2C_FIELD(temp_v1, u8 *, 0x16) | 8);
    }
    M2C_FIELD(arg1, void **, 0x1C) = (void *)M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
}

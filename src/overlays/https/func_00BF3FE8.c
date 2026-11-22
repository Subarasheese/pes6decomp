/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BE6488(void *);
M2C_UNK func_00BED188(void *);
s32 func_00BF4130(void *);
M2C_UNK func_00BF5DD0(void *);

void func_00BF3FE8(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        if (func_00BF4130(temp_s0) == 0) {
            M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
            func_00BE6488(temp_s0 + 0x14);
            func_00BED188(temp_s0);
            func_00BF5DD0(temp_s0);
        }
        *arg0 = NULL;
    }
}

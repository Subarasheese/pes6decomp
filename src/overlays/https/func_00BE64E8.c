/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

s32 func_00BE6610(void *);
M2C_UNK func_00BECC30(void *);
M2C_UNK func_00BF5DD0(void *);

void func_00BE64E8(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    if (func_00BE6610(temp_s0) == 0) {
        M2C_FIELD(temp_s0, s32 *, 0x34) = 0;
        func_00BECC30(temp_s0);
        func_00BF5DD0(temp_s0);
    }
    *arg0 = NULL;
}

/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BBDD68(s32);

s32 func_00BAE468(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != 0) {
        func_00BBDD68(temp_a0);
    }
    return 0;
}

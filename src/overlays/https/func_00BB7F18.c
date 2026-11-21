/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00BB7F18(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_v1, s32 *, 8) = (s32)(M2C_FIELD(temp_v1, s32 *, 8) + 1);
}

/* compiler: ee-gcc-2.96-nsa-G0 */
#include "pes6/m2c.h"

void func_00BB7EF8(void *arg0) {
    void *temp_v1;

    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8) = 0;
    temp_v1 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_v1, s32 *, 0x14) = (s32)(M2C_FIELD(temp_v1, s32 *, 0x14) | 0xD);
}

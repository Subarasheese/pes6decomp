/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_005C00F4)();

void func_0017D078(void *arg0) {
    s64 temp_a0;
    s64 temp_v1;

    D_005C00F4();
    temp_a0 = M2C_FIELD(arg0, s64 *, 0x940);
    temp_v1 = M2C_FIELD(arg0, s64 *, 0x948);
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
    M2C_FIELD(arg0, s64 *, 0x930) = temp_a0;
    M2C_FIELD(arg0, s64 *, 0x938) = temp_v1;
    M2C_FIELD(arg0, s64 *, 0x950) = temp_a0;
    M2C_FIELD(arg0, s64 *, 0x958) = temp_v1;
}

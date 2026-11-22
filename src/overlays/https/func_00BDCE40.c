/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BE2708(s32);

s32 func_00BDCE40(void *arg0) {
    void *temp_a0;

    if ((arg0 == NULL) || (temp_a0 = M2C_FIELD(arg0, void **, 4), (temp_a0 == NULL))) {
        return 0;
    }
    return func_00BE2708(M2C_FIELD(temp_a0, s32 *, 0x18));
}

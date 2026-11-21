/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00BDCBB0(s32, s32);

s32 func_00BDCB58(void *arg0, void *arg1) {
    return func_00BDCBB0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x14),
                         M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x14));
}

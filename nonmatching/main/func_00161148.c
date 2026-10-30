/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u32 func_00161148(void *arg0, s32 arg1) {
    void **temp_a0;
    void *temp_a2;

    temp_a0 = M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xC) + (arg1 * 4)), void **, 8), void ***, 8);
    temp_a2 = *temp_a0;
    return M2C_FIELD(temp_a2, u32 (**)(void **, M2C_UNK, void *), 0x24)(temp_a0, 1, temp_a2) >> 1;
}

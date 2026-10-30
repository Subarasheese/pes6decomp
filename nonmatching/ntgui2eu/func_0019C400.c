/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_01201380[];

M2C_UNK *func_0019C400(s32 arg0) {
    void *temp_a0;

    M2C_FIELD(((void *)D_01201380), s32 *, 0) = arg0;
    temp_a0 = ((void *)D_01201380) + 0x10;
    M2C_FIELD(((void *)D_01201380), void **, 8) = temp_a0;
    M2C_FIELD(((void *)D_01201380), s32 *, 4) = 0;
    M2C_FIELD(((void *)D_01201380), void **, 0xC) = temp_a0;
    return ((void *)D_01201380);
}

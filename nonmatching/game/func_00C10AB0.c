/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C18700(void);
extern char D_00CBD8E0[];

void func_00C10AB0(s32 arg0) {
    s16 *temp_a0;
    void *temp_s0;

    temp_s0 = ((void *)D_00CBD8E0) + ((arg0 & 0xFF) * 0x2F4);
    temp_a0 = temp_s0 + ((func_00C18700() & 0xFF) * 2);
    *temp_a0 += 1;
    M2C_FIELD(temp_s0, s16 *, 8) = (s16) (M2C_FIELD(temp_s0, s16 *, 8) + 1);
}

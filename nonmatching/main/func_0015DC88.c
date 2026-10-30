/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0015DD00(void *);
void func_0015DC88(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_0015DD00(arg0);
    temp_v0_2 = temp_v0 + 0x7FF;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((s32) ((temp_v0_2 < 0) ? (temp_v0 + 0xFFE) : temp_v0_2) >> 0xB);
}

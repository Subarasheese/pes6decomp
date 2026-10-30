/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016DCA0(void *arg0) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x5D4);
    M2C_FIELD(arg0, s32 *, 0x828) = (s32) (M2C_FIELD(arg0, s32 *, 0x810) + M2C_FIELD(arg0, s32 *, 0x880) + (temp_a2 + M2C_FIELD(arg0, s32 *, 0x5A0)) + M2C_FIELD(arg0, s32 *, 0x878));
    M2C_FIELD(arg0, s32 *, 0x82C) = (s32) (M2C_FIELD(arg0, s32 *, 0x814) + M2C_FIELD(arg0, s32 *, 0x888) + (temp_a2 + M2C_FIELD(arg0, s32 *, 0x5A4)) + M2C_FIELD(arg0, s32 *, 0x87C));
}

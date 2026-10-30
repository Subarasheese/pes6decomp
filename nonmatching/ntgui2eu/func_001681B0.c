/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001681B0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x9C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C0) + M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0x9C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C4) + M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x9C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C8) + M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x9CC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

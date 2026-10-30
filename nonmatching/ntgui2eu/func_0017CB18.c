/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0017CB18(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6) {
    if (M2C_FIELD(arg0, s32 *, 0x944) == 0) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x974) - M2C_FIELD(arg0, s32 *, 0x5A0);
        *arg2 = M2C_FIELD(arg0, s32 *, 0x978) - M2C_FIELD(arg0, s32 *, 0x5A4);
        *arg5 = M2C_FIELD(arg0, s32 *, 0x98C);
        *arg3 = 0;
        *arg4 = 0;
        *arg6 = M2C_FIELD(arg0, s32 *, 0x988);
        return;
    }
    *arg1 = 0;
    *arg2 = 0;
    *arg5 = M2C_FIELD(arg0, s32 *, 0x988);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x974) - M2C_FIELD(arg0, s32 *, 0x5A0);
    *arg4 = M2C_FIELD(arg0, s32 *, 0x978) - M2C_FIELD(arg0, s32 *, 0x5A4);
    *arg6 = M2C_FIELD(arg0, s32 *, 0x98C);
}

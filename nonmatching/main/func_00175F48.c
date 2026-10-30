/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038DBD0[];
extern char D_0038DBD8[];

void func_00175F48(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) {
        temp_v0 = (arg2 >= -0xF) ? arg2 : -0xF;
        M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x40) = (s32) ((temp_v0 >= 0x10) ? 0xF : temp_v0);
    }
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00126850();                            /* extern */
s32 func_001B0444(s64);                             /* extern */
extern char D_011D4424[];
extern char D_011D4428[];
extern char D_011D442C[];

void func_00126C98(s32 arg0, s64 arg1) {
    s64 temp_s0;

    if (M2C_FIELD(((void *)D_011D4424), s32 *, 0) != 0) {
        func_00126850();
    }
    temp_s0 = (s64) (arg1 << 0x20) >> 0x20;
    if (func_001B0444(temp_s0) != 0) {
        M2C_FIELD(((void *)D_011D4424), s32 *, 0x4424) = arg0;
        (*(s32 *)D_011D4428) = (s32) temp_s0;
        (*(s32 *)D_011D442C) = 0x10;
    }
}

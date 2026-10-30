/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002781A0(s32);                             /* extern */
s32 func_008BC3B0();                                /* extern */
extern char D_008EE190[];

s32 func_008B9450(s32 arg0) {
    s64 temp_a0;

    if (func_008BC3B0() != 0) {
        return 0;
    }
    temp_a0 = (s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30;
    switch (temp_a0) {                              /* irregular */
    case 7:
        return 0;
    case 6:
    case 8:
        return 0;
    default:
        return func_002781A0(arg0 & 0xFF);
    }
}

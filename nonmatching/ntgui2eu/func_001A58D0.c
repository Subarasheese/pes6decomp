/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778(s64 *);                       /* extern */
extern char D_005CBB98[];

s64 func_001A58D0(void) {
    s32 temp_a4_2;
    s32 temp_v0;
    s64 temp_a4;
    s64 var_a6;

    temp_v0 = func_001A4728();
    temp_a4_2 = M2C_FIELD((void *)0x10001000, s32 *, 0x10);
    var_a6 = (*(s64 *)D_005CBB98);
    if (temp_a4_2 & 0x800) {
        var_a6 += 1;
    }
    temp_a4 = temp_a4_2 & 3;
    if (temp_v0 != 0) {
        func_001A4778(((void *)D_005CBB98));
    }
    return (M2C_FIELD((void *)0x10001000, u32 *, 0) | (var_a6 << 0x10)) << (((temp_a4 == 0) ? 0 : 2) << temp_a4);
}

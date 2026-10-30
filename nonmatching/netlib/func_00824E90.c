/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00831920(s32, M2C_UNK *);                  /* extern */
extern char D_008A4398[];
extern char D_008AA018[];

s32 func_00824E90(s32 arg0) {
    M2C_UNK *var_a2;
    s32 temp_a1;

    if ((*(s32 *)D_008A4398) == 0) {
        var_a2 = NULL;
    } else {
        var_a2 = ((void *)D_008AA018);
    }
    if ((*(s32 *)D_008A4398) == 0) {
        return 1;
    }
    if (var_a2 != NULL) {
        temp_a1 = arg0 & 0xFFFF;
        if (temp_a1 != 0xDD) {
            if (temp_a1 < 0x101) {
                return (*(var_a2 + (((u32) temp_a1 >> 3) & 0xFFFF)) & ((0x80 >> ((temp_a1 % 8) & 0xFFFF)) & 0xFF)) != 0;
            }
            return 0;
        }
        return ((s64) (func_00831920(temp_a1, var_a2) << 0x38) >> 0x38) == 1;
    }
    return 0;
}

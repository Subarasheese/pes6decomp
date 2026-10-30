/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CFDF50[];
extern char D_00CFE1A0[];

s32 func_00CE4A30(s32 arg0, s32 arg1) {
    s32 *var_v0;

    switch (arg0) {                                 /* irregular */
    case 8:
        var_v0 = ((void *)D_00CFE1A0) + (arg1 * 0xC);
block_8:
        return *var_v0;
    case 5:
    case 6:
        var_v0 = ((void *)D_00CFDF50) + (arg1 * 0xC);
        goto block_8;
    default:
        return 0;
    }
}

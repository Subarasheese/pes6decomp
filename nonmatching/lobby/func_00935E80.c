/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A5F70[];
extern char D_008A94EC[];
extern char D_008A94F0[];

s32 func_00935E80(void) {
    s16 *var_v1;
    s32 var_a0;

    (*(s32 *)D_008A94EC) = 0;
    var_a0 = 1;
    (*(s32 *)D_008A94F0) = 0;
    (*(s16 *)D_008A5F70) = 0x29;
    var_v1 = &(((void *)D_008A5F70))[1];
    do {
        var_a0 += 1;
        *var_v1 = 0;
        var_v1 += 2;
    } while (var_a0 < 5);
    return 4;
}

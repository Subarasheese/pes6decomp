/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008DC270[];

s32 func_008B39E0(s32 arg0) {
    s32 *temp_a0;

    temp_a0 = ((void *)D_008DC270) + (arg0 * 4);
    if (*temp_a0 != 4) {
        *temp_a0 = 0x200000;
    }
    return 0;
}

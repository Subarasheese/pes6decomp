/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008ED740[];

void *func_008C92D0(s32 arg0) {
    s32 var_a2;
    u16 *var_a0;

    var_a2 = 0;
    if ((*(u16 *)D_008ED740) != 0xFFFF) {
        var_a0 = ((void *)D_008ED740);
loop_2:
        if ((arg0 & 0xFFFF) != *var_a0) {
            var_a0 += 0xE;
            var_a2 += 1;
            if (*var_a0 == 0xFFFF) {
                goto block_8;
            }
            goto loop_2;
        }
        return ((void *)D_008ED740) + (var_a2 * 0xE);
    }
block_8:
    return NULL;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(s32, void *);                     /* extern */
extern char D_0052B260[];

void *func_001F42F0(s32 arg0) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_0052B260);
loop_1:
    if (M2C_FIELD(var_s0, u8 *, 0x14) != 0) {
        if (func_001C7E10(arg0, var_s0 + 0x10) == 0) {
            return ((void *)D_0052B260) + (var_s1 * 0x18);
        }
        goto block_4;
    }
block_4:
    var_s1 += 1;
    var_s0 += 0x18;
    if (var_s1 >= 8) {
        return NULL;
    }
    goto loop_1;
}

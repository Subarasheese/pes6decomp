/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002ABE90(M2C_UNK *, s32);              /* extern */
extern char D_005E2FD4[];

s32 func_002BA060(void *arg0) {
    s32 temp_a1;
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        temp_a1 = M2C_FIELD(var_s0, s32 *, 4);
        if (temp_a1 == 0) {

        } else {
            func_002ABE90(((void *)D_005E2FD4), temp_a1);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    return 0;
}

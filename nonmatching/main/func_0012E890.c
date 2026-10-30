/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003FB780[];

s32 func_0012E890(s32 arg0) {
    s32 var_v0;
    void *temp_a1;

    var_v0 = 0;
    if (arg0 >= 0) {
        temp_a1 = (*(s32 *)D_003FB780) + (arg0 * 0x78);
        if (M2C_FIELD(temp_a1, s16 *, 2) != -1) {
            var_v0 = M2C_FIELD(temp_a1, s32 *, 0x14);
        }
    }
    return var_v0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00115720(void *);                          /* extern */
extern char D_002BA0C0[];

s32 func_00109CB8(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00115720((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 0xE90) + (((void *)D_002BA0C0) + 0x470));
    var_a0 = -1;
    if (temp_v0 > 0) {
        if (temp_v0 < 3) {
            var_a0 = 0;
        } else if (temp_v0 < 0x83) {
            if (temp_v0 >= 0x80) {
                var_a0 = 1;
            }
        }
    }
    return var_a0;
}

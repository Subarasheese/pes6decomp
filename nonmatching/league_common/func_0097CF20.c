/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
extern char D_00591C09[];

s32 func_0097CF20(void) {
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v0;
    void *temp_v0_2;

    if ((*(u8 *)D_00591C09) == 0xE) {
        temp_v0 = func_00229380();
        if (temp_v0 != NULL) {
            if (!(M2C_FIELD(temp_v0, u8 *, 4) & 8)) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            return 1;
        }
        temp_v0_2 = func_00229380();
        if (temp_v0_2 != NULL) {
            if (!(M2C_FIELD(temp_v0_2, u8 *, 4) & 4)) {
                var_v0_2 = 0;
            } else {
                var_v0_2 = 1;
            }
        } else {
            var_v0_2 = 0;
        }
        if (var_v0_2 != 0) {
            return 1;
        }
        goto block_22;
    }
block_22:
    return 0;
}

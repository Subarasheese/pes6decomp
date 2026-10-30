/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCB690[];

void func_00C37790(s32 arg0, u8 **arg1) {
    s32 var_v0;
    void *var_a1;

    var_v0 = 0;
    var_a1 = ((void *)D_00CCB690) + ((arg0 - 1) * 0x94);
loop_1:
    if (**arg1 != M2C_FIELD(var_a1, u8 *, 0x70)) {
        var_v0 += 1;
        var_a1 += 1;
        if (var_v0 >= 8) {

        } else {
            goto loop_1;
        }
    }
}

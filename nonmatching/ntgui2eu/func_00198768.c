/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 *D_011FEE58;
extern char D_011FEF00[];

s32 func_00198768(void) {
    s32 var_a1;
    u8 *var_a0;
    u8 *var_v1;
    u8 temp_v0;

    var_a0 = ((void *)D_011FEF00);
    var_v1 = D_011FEE58;
    if (M2C_FIELD(((void *)D_011FEF00), u8 *, 6) != 0) {
        return -1;
    }
    var_a1 = 6;
    do {
        temp_v0 = *var_a0;
        var_a1 -= 1;
        var_a0 += 1;
        *var_v1 = temp_v0;
        var_v1 += 1;
    } while (var_a1 >= 0);
    return 0;
}

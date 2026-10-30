/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D15D80(M2C_UNK, M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern char D_008A4370[];
extern char D_008A43F0[];

s32 func_008261E0(void) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_a4;
    s32 var_a5;
    void **temp_v0;
    void *var_a0;

    var_a5 = 0;
    do {
        var_a4 = 0;
        temp_a3 = var_a5 * 5;
loop_2:
        temp_a0 = var_a4 + temp_a3;
        if (temp_a0 < 0) {
            var_a0 = NULL;
        } else if (temp_a0 >= 0xA) {
            var_a0 = NULL;
        } else if (((void *)D_008A43F0) != NULL) {
            var_a0 = ((void *)D_008A43F0) + (temp_a0 << 6) + 1;
        } else {
            var_a0 = NULL;
        }
        temp_v0 = ((void *)D_008A4370) + (var_a5 * 0x14) + (var_a4 * 4);
        var_a4 += 1;
        *temp_v0 = var_a0;
        if (var_a4 < 5) {
            goto loop_2;
        }
        var_a5 += 1;
    } while (var_a5 < 2);
    func_00D15D80(4, ((void *)D_008A4370), ((void *)D_008A4370), temp_a3, var_a4, var_a5);
    return 1;
}

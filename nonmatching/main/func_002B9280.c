/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003DA360[];
extern char D_00591970[];

s32 func_002B9280(s32 arg0, s32 arg1) {
    s32 *var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_v0;
    u8 *var_a4;
    void *temp_v1;

    temp_v1 = ((void *)D_00591970) + (arg0 * 0x24);
    var_v0 = arg1 & 0x0FF000FF;
    if (temp_v1 != NULL) {
        var_a7 = 0;
        if (0 < 2) {
            do {
                var_a6 = 0;
                var_a5 = ((void *)D_003DA360) + (var_a7 << 5);
                var_a4 = temp_v1 + 0xF + (var_a7 * 8);
loop_4:
                if (arg1 & (1 << *var_a5)) {
                    var_v0 |= 1 << *var_a4;
                }
                var_a6 += 1;
                var_a5 += 4;
                var_a4 += 1;
                if (var_a6 < 8) {
                    goto loop_4;
                }
                var_a7 += 1;
            } while (var_a7 < 2);
        }
    } else {
        var_v0 = arg1;
    }
    return var_v0;
}

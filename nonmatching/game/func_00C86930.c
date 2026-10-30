/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D5410(void);
extern char D_00591BD1[];
extern char D_00CB4E70[];

s32 func_00C86930(void) {
    s32 *var_v0;
    s32 temp_v0;
    u8 var_v0_2;

    temp_v0 = func_002D5410();
    if (temp_v0 != 0) {
        var_v0 = ((void *)D_00CB4E70) + (temp_v0 * 4);
    } else {
        var_v0_2 = (*(u8 *)D_00591BD1);
        if ((s32) var_v0_2 >= 0x10) {
            var_v0_2 = 0xF;
        } else if ((s32) var_v0_2 < 0) {
            var_v0_2 = 0;
        }
        var_v0 = ((void *)D_00CB4E70) + (var_v0_2 * 4);
    }
    return *var_v0;
}

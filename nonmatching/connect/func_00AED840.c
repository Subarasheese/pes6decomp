/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AEC200(s32, f32 *);                  /* extern */

void func_00AED840(s32 *arg0, f32 fparg0, f32 fparg1) {
    f32 sp10;
    f32 sp14;
    f32 *var_v1;
    s32 var_v0;

    if (arg0 != NULL) {
        var_v1 = &sp10;
        var_v0 = 0x10;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp10 = fparg0;
        sp14 = fparg1;
        func_00AEC200(*arg0, &sp10);
    }
}

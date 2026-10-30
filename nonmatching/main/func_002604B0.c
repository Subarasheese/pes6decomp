/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D340[];
extern char D_0058D350[];
extern char D_0058D352[];
extern char D_0058D354[];
extern char D_0058D356[];

void func_002604B0(void *arg0) {
    s16 var_a1;
    s16 var_a4;

    if (arg0 != NULL) {
        var_a4 = 2;
        (*(s16 *)D_0058D350) = M2C_FIELD(arg0, s16 *, 0);
        (*(s16 *)D_0058D352) = M2C_FIELD(arg0, s16 *, 2);
        if ((*(s16 *)D_0058D350) >= 0) {
loop_2:
            if (var_a4 < (*(s16 *)D_0058D350)) {
                var_a4 *= 2;
                goto loop_2;
            }
        } else {
            var_a4 = 0;
        }
        var_a1 = 2;
        (*(s16 *)D_0058D354) = var_a4;
        if ((*(s16 *)D_0058D352) >= 0) {
loop_8:
            if (var_a1 < (*(s16 *)D_0058D352)) {
                var_a1 *= 2;
                goto loop_8;
            }
        } else {
            var_a1 = 0;
        }
        (*(s16 *)D_0058D356) = var_a1;
        (*(s32 *)D_0058D340) = (*(s16 *)D_0058D354) * (*(s16 *)D_0058D356);
    }
}

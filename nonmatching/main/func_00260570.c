/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D334[];
extern char D_0058D344[];
extern char D_0058D346[];
extern char D_0058D348[];
extern char D_0058D34A[];
extern char D_0058D34C[];
extern char D_0058D34E[];

void func_00260570(void *arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a1;
    s16 var_t0;

    if (arg0 != NULL) {
        (*(s16 *)D_0058D344) = M2C_FIELD(arg0, s16 *, 0);
        (*(s16 *)D_0058D346) = M2C_FIELD(arg0, s16 *, 2);
        (*(s16 *)D_0058D348) = M2C_FIELD(arg0, s16 *, 4);
        (*(s16 *)D_0058D34A) = M2C_FIELD(arg0, s16 *, 6);
        temp_v1 = M2C_FIELD(arg0, s16 *, 4);
        var_t0 = 2;
        if (temp_v1 >= 0) {
loop_2:
            if (var_t0 < temp_v1) {
                var_t0 *= 2;
                goto loop_2;
            }
        } else {
            var_t0 = 0;
        }
        (*(s16 *)D_0058D34C) = var_t0;
        temp_v1_2 = M2C_FIELD(arg0, s16 *, 6);
        var_a1 = 2;
        if (temp_v1_2 >= 0) {
loop_7:
            if (var_a1 < temp_v1_2) {
                var_a1 *= 2;
                goto loop_7;
            }
        } else {
            var_a1 = 0;
        }
        (*(s16 *)D_0058D34E) = var_a1;
        (*(s32 *)D_0058D334) = (*(s16 *)D_0058D34C) * (*(s16 *)D_0058D34E) * 4;
    }
}

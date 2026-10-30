/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00115FF8(int, int, void *, void *, void *);
extern void *D_00538200;
extern char D_00538204[];
extern char D_00538224[];

s32 func_0021C7F0(s32 arg0, s32 *arg1, void *arg2) {
    s16 sp2C;
    s16 sp2E;
    s16 temp_a0;
    s16 var_a0;
    s32 temp_a0_3;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s0;
    s64 temp_a0_2;
    void *var_a4;
    void *var_a5;

    var_a3 = *arg1;
    var_s0 = 0;
    if (var_a3 < -0xA) {
        var_a3 = -0xA;
    }
    switch (arg0) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        var_s0 = -0x7E;
        switch (var_a3) {                           /* switch 2; irregular */
        case -2:                                    /* switch 2 */
        case -1:                                    /* switch 2 */
        case 0:                                     /* switch 2 */
            break;
        case -10:                                   /* switch 2 */
            temp_a0 = M2C_FIELD(arg2, s16 *, 0xE);
            var_a5 = NULL;
            sp2E = temp_a0;
            sp2C = M2C_FIELD(arg2, s16 *, 0xC);
            if ((*(s32 *)D_00538204) > 0) {
                var_a5 = D_00538200;
            }
            var_a4 = NULL;
            var_a3_2 = 0;
            if (D_00538200 != NULL) {
                var_a3_2 = (*(s32 *)D_00538204);
            }
            if (sp2C != -1) {
                temp_a0_2 = (s64) ((s64) temp_a0 << 0x30) >> 0x30;
                if (temp_a0_2 != -1) {
                    var_a2 = 0;
                    if (var_a3_2 > 0) {
loop_17:
                        if ((M2C_FIELD(var_a5, s16 *, 2) == temp_a0_2) && (M2C_FIELD(var_a5, s16 *, 0) == sp2C)) {
                            var_a4 = var_a5;
                        } else {
                            var_a2 += 1;
                            var_a5 += 0x10;
                            if (var_a2 < var_a3_2) {
                                goto loop_17;
                            }
                        }
                    }
                }
            }
            var_a0 = -1;
            if (var_a4 != NULL) {
                var_a0 = M2C_FIELD(var_a4, s16 *, 6);
            }
            if (var_a0 == 2) {
                temp_a0_3 = (*(s32 *)D_00538224) + 1;
                (*(s32 *)D_00538224) = temp_a0_3;
                var_s0 = -0x7E;
                if (temp_a0_3 >= 4) {

                } else if (func_00115FF8((s32) M2C_FIELD(arg2, s16 *, 0xC), (s32) M2C_FIELD(arg2, s16 *, 0xE), arg2 + 0x24, arg2 + 0x28, arg2 + 0x2C) == 0) {
                    var_s0 = 0;
                }
            }
            break;
        }
        break;
    case -1:                                        /* switch 1 */
        var_s0 = -0x7E;
        *arg1 = -9;
        break;
    }
    return var_s0;
}

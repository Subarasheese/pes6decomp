/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00862040(void *, s32);                     /* extern */
s32 func_00868310(s32, s32);                        /* extern */
s32 func_00868430(s32, s32, void *);                /* extern */
s32 func_008684C0(s32, void *);                     /* extern */
s32 func_008685A0(s32, void *, void *);             /* extern */
s32 func_00868690(s32, void *);                     /* extern */
s32 func_00868770(s32, s32 *);                      /* extern */
s32 func_008688A0(s32, void *);                     /* extern */
s32 func_00868990(s32, void *);                     /* extern */
s32 func_00868AD0(s32, void *, void *);             /* extern */

void func_00865E00(void *arg0) {
    s32 *temp_v1_3;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_v0;
    void *temp_v1;

    var_v0 = 0x2103;
    temp_v1 = M2C_FIELD(arg0, void **, 0x37E0);
    temp_a1 = temp_v1 + 0x480;
    temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 0x480);
    switch (temp_v1_2) {                            /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_v0 = 0x2203;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 0x2203:                                /* switch 2 */
            break;
        default:                                    /* switch 2 */
            var_v0 = 0x200B;
            switch (temp_v1_2) {                    /* switch 3; irregular */
            case 0x200B:                            /* switch 3 */
                break;
            default:                                /* switch 3 */
                var_v0 = 0x2004;
                switch (temp_v1_2) {                /* switch 4; irregular */
                case 0x6:                           /* switch 4 */
                case 0x4401:                        /* switch 4 */
                case 0x5:                           /* switch 4 */
                case 0x4:                           /* switch 4 */
                    var_v0 = func_00862040(arg0, temp_a1);
                    break;
                case 0x2002:                        /* switch 4 */
                    var_v0 = func_00868AD0(temp_a1, arg0 + 0x238, arg0 + 0x4830);
                    break;
                case 0x2003:                        /* switch 4 */
                    var_v0 = func_00868990(temp_a1, arg0 + 0x238);
                    break;
                default:                            /* switch 4 */
                    var_v0 = -0x46;
                    break;
                }
                break;
            case 0x2009:                            /* switch 3 */
                var_v0 = func_008688A0(temp_a1, arg0 + 0x4830);
                temp_v1_3 = M2C_FIELD(arg0, s32 **, 0x4864);
                if (temp_v1_3 != NULL) {
                    *temp_v1_3 = 0;
                }
                break;
            case 0x200A:                            /* switch 3 */
                var_v0 = func_00868770(temp_a1, M2C_FIELD(arg0, s32 **, 0x4864));
                break;
            }
            break;
        case 0x2007:                                /* switch 2 */
            var_v0 = func_00868690(temp_a1, arg0 + 0x37D4);
            break;
        case 0x2201:                                /* switch 2 */
            var_v0 = func_008685A0(temp_a1, arg0 + 0x37D8, arg0 + 0x4830);
            break;
        case 0x2202:                                /* switch 2 */
            var_v0 = func_008684C0(temp_a1, arg0 + 0x343C);
            break;
        }
        break;
    case 0x2101:                                    /* switch 1 */
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4868);
        if (temp_v0 != 0) {
            var_v0 = func_00868430(temp_a1, temp_v0, arg0 + 0x4830);
        } else {
            var_v0 = -0x1B;
            M2C_FIELD(arg0, s32 *, 0x4830) = -0x1B;
        }
        break;
    case 0x2102:                                    /* switch 1 */
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x4868);
        if (temp_v0_2 != 0) {
            var_v0 = func_00868310(temp_a1, temp_v0_2);
        } else {
            var_v0 = -0x1B;
            M2C_FIELD(arg0, s32 *, 0x4830) = -0x1B;
        }
        break;
    case 0x2103:                                    /* switch 1 */
        if (M2C_FIELD(arg0, s32 *, 0x4868) != 0) {

        } else {
            var_v0 = -0x1B;
            M2C_FIELD(arg0, s32 *, 0x4830) = -0x1B;
        }
        break;
    }
    if (var_v0 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = 0;
    }
}

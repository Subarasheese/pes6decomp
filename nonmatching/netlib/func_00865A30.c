/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00867810(void *, s32, void *);
s32 func_0085F780(void *, void *);                  /* extern */
s32 func_00861F40(void *, void *, M2C_UNK);         /* extern */
s32 func_00862040(void *, void *);                  /* extern */
s32 func_00866820(void *, void *);                  /* extern */
s32 func_008668A0(void *, s32);                     /* extern */
s32 func_00866970(void *, void *);                  /* extern */
s32 func_008669F0(void *, s32 *);                   /* extern */
s32 func_00866B10(void *, void *);                  /* extern */
s32 func_00866C00(void *, void *);                  /* extern */
s32 func_00866D00(void *, void *);                  /* extern */
s32 func_00867250(void *, void *, s32, void *);     /* extern */
s32 func_008672B0(void *, s32, void *);             /* extern */
s32 func_00867570(void *, void *, s32);             /* extern */
s32 func_00867670(void *, void *, void *);          /* extern */
s32 func_00867A10(void *, void *);                  /* extern */
s32 func_00867B10(void *, void *, void *, void *);  /* extern */
s32 func_00867D40(void *, void *, void *);          /* extern */
s32 func_00877570(void *, void *, void *, void *, void *); /* extern */

s32 func_00865A30(void *arg0) {
    s32 *temp_v1_3;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_v0;
    void *temp_a1;
    void *temp_v1;

    var_v0 = 0x3135;
    temp_v1 = M2C_FIELD(arg0, void **, 0x37E0);
    temp_a1 = temp_v1 + 0x900;
    temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 0x900);
    var_s0 = 0;
    switch (temp_v1_2) {                            /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_v0 = 0x3123;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 0x6:                                   /* switch 2 */
        case 0x4401:                                /* switch 2 */
        case 0x5:                                   /* switch 2 */
        case 0x4:                                   /* switch 2 */
            var_v0 = func_00862040(arg0, temp_a1);
            break;
        case 0x3004:                                /* switch 2 */
        case 0x3002:                                /* switch 2 */
            var_v0 = func_00861F40(arg0, temp_a1, 2);
            break;
        case 0x3008:                                /* switch 2 */
            var_v0 = func_00877570(temp_a1, arg0 + 0x483C, arg0 + 0x4840, arg0 + 0x4851, arg0 + 0x4830);
            break;
        case 0x3012:                                /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0x4BB8) = 0;
            var_v0 = func_00867D40(temp_a1, arg0 + 0x486C, arg0 + 0x4830);
            break;
        case 0x3022:                                /* switch 2 */
            var_v0 = func_00867A10(temp_a1, arg0 + 0x4830);
            break;
        case 0x3042:                                /* switch 2 */
            var_v0 = func_00867B10(temp_a1, arg0 + 0x49EC, arg0 + 0x153B4, arg0 + 0x4830);
            break;
        case 0x3052:                                /* switch 2 */
            var_v0 = func_00867810(temp_a1, (s32) (arg0 + 0x4998), arg0 + 0x4830);
            break;
        case 0x3062:                                /* switch 2 */
            var_v0 = func_00867670(temp_a1, arg0 + 0x4B8C, arg0 + 0x4830);
            break;
        case 0x3071:                                /* switch 2 */
            var_v0 = func_00867570(temp_a1, arg0 + 0x4830, M2C_FIELD(arg0, s32 *, 0x4BB4));
            break;
        case 0x3072:                                /* switch 2 */
            var_v0 = func_008672B0(temp_a1, M2C_FIELD(arg0, s32 *, 0x4BB4), arg0 + 0x4830);
            break;
        case 0x3073:                                /* switch 2 */
            var_v0 = func_00867250(temp_a1, arg0 + 0x4830, M2C_FIELD(arg0, s32 *, 0x4BB4), arg0 + 0x4BB8);
            break;
        case 0x308D:                                /* switch 2 */
        case 0x308B:                                /* switch 2 */
        case 0x3089:                                /* switch 2 */
        case 0x3088:                                /* switch 2 */
        case 0x3087:                                /* switch 2 */
            var_v0 = func_0085F780(arg0, temp_a1);
            break;
        case 0x3091:                                /* switch 2 */
            var_v0 = func_00866D00(temp_a1, arg0 + 0x4830);
            break;
        case 0x3101:                                /* switch 2 */
            var_v0 = func_00866C00(temp_a1, arg0 + 0x4830);
            break;
        case 0x3121:                                /* switch 2 */
            var_v0 = func_00866B10(temp_a1, arg0 + 0x4830);
            temp_v1_3 = M2C_FIELD(arg0, s32 **, 0x4864);
            if (temp_v1_3 != NULL) {
                *temp_v1_3 = 0;
            }
            break;
        case 0x3122:                                /* switch 2 */
            var_v0 = func_008669F0(temp_a1, M2C_FIELD(arg0, s32 **, 0x4864));
            break;
        default:                                    /* switch 2 */
            var_s0 = -0x46;
            var_v0 = -0x46;
            break;
        }
        break;
    case 0x3131:                                    /* switch 1 */
        var_v0 = func_00866820(temp_a1, arg0 + 0x4830);
        break;
    case 0x3133:                                    /* switch 1 */
        if (M2C_FIELD(arg0, s32 *, 0x4868) != 0) {
            var_v0 = func_00866970(temp_a1, arg0 + 0x4830);
        } else {
            var_v0 = -0x1B;
            M2C_FIELD(arg0, s32 *, 0x4830) = -0x1B;
        }
        break;
    case 0x3134:                                    /* switch 1 */
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4868);
        if (temp_v0 != 0) {
            var_v0 = func_008668A0(temp_a1, temp_v0 + 0x10204);
        } else {
            var_v0 = -0x1B;
            M2C_FIELD(arg0, s32 *, 0x4830) = -0x1B;
        }
        break;
    case 0x3135:                                    /* switch 1 */
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
    return var_s0;
}

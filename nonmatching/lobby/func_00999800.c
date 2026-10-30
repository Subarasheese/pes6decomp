/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00930540(void);
M2C_UNK func_008187D0();                            /* extern */
s32 func_00819280(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00822640(M2C_UNK);                     /* extern */
s32 func_00831260(s16);                             /* extern */
M2C_UNK func_0093FBD0();                            /* extern */
s32 func_0093FC20(s16);                             /* extern */
extern char D_008A5F70[];
extern char D_008A5F72[];

s32 func_00999800(void) {
    s16 *var_v1;
    s16 *var_v1_10;
    s16 *var_v1_2;
    s16 *var_v1_3;
    s16 *var_v1_4;
    s16 *var_v1_5;
    s16 *var_v1_6;
    s16 *var_v1_7;
    s16 *var_v1_8;
    s16 *var_v1_9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a0_10;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_a0_9;

    switch ((*(s16 *)D_008A5F72)) {                           /* switch 1; irregular */
    case 0x66:                                      /* switch 1 */
        var_a0 = 2;
        (*(s16 *)D_008A5F72) = 0;
        if (2 < 5) {
            var_v1 = &(((void *)D_008A5F70))[2];
            do {
                var_a0 += 1;
                *var_v1 = 0;
                var_v1 += 2;
            } while (var_a0 < 5);
        }
        (*(s16 *)D_008A5F70) = 4;
        var_a0_2 = 1;
        var_v1_2 = &(((void *)D_008A5F70))[1];
        do {
            var_a0_2 += 1;
            *var_v1_2 = 0;
            var_v1_2 += 2;
        } while (var_a0_2 < 5);
        break;
    case 0x65:                                      /* switch 1 */
        temp_v0 = func_00819280(0x01F50006, -1);
        switch (temp_v0) {                          /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            break;
        default:                                    /* switch 4 */
        case 3:                                     /* switch 4 */
        case 2:                                     /* switch 4 */
        case 1:                                     /* switch 4 */
            func_008187D0();
            var_a0_3 = 2;
            (*(s16 *)D_008A5F72) = 0x66;
            if (2 < 5) {
                var_v1_3 = &(((void *)D_008A5F70))[2];
                do {
                    var_a0_3 += 1;
                    *var_v1_3 = 0;
                    var_v1_3 += 2;
                } while (var_a0_3 < 5);
            }
            break;
        }
        break;
    case 0x2:                                       /* switch 1 */
        var_a0_4 = 2;
        (*(s16 *)D_008A5F72) = 0;
        if (2 < 5) {
            var_v1_4 = &(((void *)D_008A5F70))[2];
            do {
                var_a0_4 += 1;
                *var_v1_4 = 0;
                var_v1_4 += 2;
            } while (var_a0_4 < 5);
        }
        (*(s16 *)D_008A5F70) = 6;
        var_a0_5 = 1;
        var_v1_5 = &(((void *)D_008A5F70))[1];
        do {
            var_a0_5 += 1;
            *var_v1_5 = 0;
            var_v1_5 += 2;
        } while (var_a0_5 < 5);
        break;
    case 0x1:                                       /* switch 1 */
        var_a0_6 = 2;
        (*(s16 *)D_008A5F72) += 1;
        if (2 < 5) {
            var_v1_6 = &(((void *)D_008A5F70))[2];
            do {
                var_a0_6 += 1;
                *var_v1_6 = 0;
                var_v1_6 += 2;
            } while (var_a0_6 < 5);
        }
        break;
    default:                                        /* switch 1 */
        var_a0_7 = 2;
        (*(s16 *)D_008A5F72) = 0x64;
        if (2 < 5) {
            var_v1_7 = &(((void *)D_008A5F70))[2];
            do {
                var_a0_7 += 1;
                *var_v1_7 = 0;
                var_v1_7 += 2;
            } while (var_a0_7 < 5);
        }
        break;
    case 0x0:                                       /* switch 1 */
        temp_v0_2 = func_0093FC20((*(s16 *)D_008A5F72));
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 4:                                     /* switch 2 */
            var_a0_8 = 2;
            (*(s16 *)D_008A5F72) += 1;
            if (2 < 5) {
                var_v1_8 = &(((void *)D_008A5F70))[2];
                do {
                    var_a0_8 += 1;
                    *var_v1_8 = 0;
                    var_v1_8 += 2;
                } while (var_a0_8 < 5);
            }
            break;
        default:                                    /* switch 2 */
        case 2:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            var_a0_9 = 2;
            (*(s16 *)D_008A5F72) = 0x64;
            if (2 < 5) {
                var_v1_9 = &(((void *)D_008A5F70))[2];
                do {
                    var_a0_9 += 1;
                    *var_v1_9 = 0;
                    var_v1_9 += 2;
                } while (var_a0_9 < 5);
            }
            break;
        }
        break;
    case 0x64:                                      /* switch 1 */
        temp_v0_3 = func_00831260((*(s16 *)D_008A5F72));
        switch (temp_v0_3) {                        /* switch 3; irregular */
        case 2:                                     /* switch 3 */
        case 0:                                     /* switch 3 */
            break;
        default:                                    /* switch 3 */
        case 1:                                     /* switch 3 */
            func_00930540();
            break;
        }
        func_00822640(0x9A08840D);
        func_0093FBD0();
        var_a0_10 = 2;
        (*(s16 *)D_008A5F72) = 0x65;
        if (2 < 5) {
            var_v1_10 = &(((void *)D_008A5F70))[2];
            do {
                var_a0_10 += 1;
                *var_v1_10 = 0;
                var_v1_10 += 2;
            } while (var_a0_10 < 5);
        }
        break;
    }
    return 1;
}

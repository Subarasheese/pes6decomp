/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BE4D0(s32);
extern s32 func_0094C4A0(void);
extern s32 func_00987E10(void);
extern s32 func_00987B90(s32);
extern s32 func_009317C0(s32, s32);
extern s32 func_0099C590(void);
extern s32 func_0017F900(void);
extern s32 func_00981280(void);
M2C_UNK func_0081CA90();                            /* extern */
s32 func_0081CAD0();                                /* extern */
M2C_UNK func_00820F10(M2C_UNK);                     /* extern */
M2C_UNK func_008210C0(M2C_UNK);                     /* extern */
M2C_UNK func_008240B0();                            /* extern */
s64 func_008241E0();                                /* extern */
M2C_UNK func_00824220(M2C_UNK);                     /* extern */
M2C_UNK func_0082B810();                            /* extern */
M2C_UNK func_0082B990(M2C_UNK, s16);                /* extern */
s32 func_00835730();                                /* extern */
s32 func_00835A40();                                /* extern */
s32 func_008375D0();                                /* extern */
M2C_UNK func_0083C560();                            /* extern */
M2C_UNK func_00841D90();                            /* extern */
M2C_UNK func_00841DB0();                            /* extern */
M2C_UNK func_00841DD0();                            /* extern */
M2C_UNK func_00842330();                            /* extern */
M2C_UNK func_00842970(M2C_UNK);                     /* extern */
M2C_UNK func_00843690(M2C_UNK);                     /* extern */
M2C_UNK func_009310E0();                            /* extern */
s32 func_0094C4E0(M2C_UNK);                         /* extern */
s32 func_00987E60(M2C_UNK, s16);                    /* extern */
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FD20();                            /* extern */
M2C_UNK func_00D0FD80(M2C_UNK);                     /* extern */
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_008A5F74[];
extern char D_008A6110[];

s32 func_00991B40(void) {
    s16 *var_v1;
    s16 *var_v1_10;
    s16 *var_v1_11;
    s16 *var_v1_12;
    s16 *var_v1_13;
    s16 *var_v1_14;
    s16 *var_v1_15;
    s16 *var_v1_16;
    s16 *var_v1_2;
    s16 *var_v1_3;
    s16 *var_v1_4;
    s16 *var_v1_5;
    s16 *var_v1_6;
    s16 *var_v1_7;
    s16 *var_v1_8;
    s16 *var_v1_9;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_10;
    s32 var_a0_11;
    s32 var_a0_12;
    s32 var_a0_13;
    s32 var_a0_14;
    s32 var_a0_15;
    s32 var_a0_16;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_a0_9;
    s32 var_v0;

    func_0082B810();
    func_00841DB0();
    switch ((*(s16 *)D_008A5F72)) {                           /* switch 1; irregular */
    case -100:                                      /* switch 1 */
        func_0082B990(3, (*(s16 *)D_008A5F72));
        var_a0 = 2;
        (*(s16 *)D_008A5F72) = -1;
        if (2 < 5) {
            var_v1 = &(((void *)D_008A5F70))[2];
            do {
                var_a0 += 1;
                *var_v1 = 0;
                var_v1 += 2;
            } while (var_a0 < 5);
        }
        break;
    case 0:                                         /* switch 1 */
        switch ((*(s16 *)D_008A5F74)) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (func_00987E60(3, (*(s16 *)D_008A5F72)) == 1) {
                func_00D0FD80(5);
                func_00D0FD80(6);
                func_00D0FD80(7);
                func_00D0FD80(8);
                var_a0_2 = 3;
                (*(s16 *)D_008A5F74) += 1;
                if (3 < 5) {
                    var_v1_2 = &(((void *)D_008A5F70))[3];
                    do {
                        var_a0_2 += 1;
                        *var_v1_2 = 0;
                        var_v1_2 += 2;
                    } while (var_a0_2 < 5);
                }
            }
            break;
        default:                                    /* switch 2 */
            var_a0_3 = 3;
            (*(s16 *)D_008A5F74) = 0;
            if (3 < 5) {
                var_v1_3 = &(((void *)D_008A5F70))[3];
                do {
                    var_a0_3 += 1;
                    *var_v1_3 = 0;
                    var_v1_3 += 2;
                } while (var_a0_3 < 5);
            }
            break;
        case 1:                                     /* switch 2 */
            if (func_0017F900() != 0) {
                var_a0_4 = 3;
                (*(s16 *)D_008A5F74) += 1;
                if (3 < 5) {
                    var_v1_4 = &(((void *)D_008A5F70))[3];
                    do {
                        var_a0_4 += 1;
                        *var_v1_4 = 0;
                        var_v1_4 += 2;
                    } while (var_a0_4 < 5);
                }
            }
            break;
        case 2:                                     /* switch 2 */
            if (func_00987E10() == 1) {
                var_a0_5 = 2;
                (*(s16 *)D_008A5F72) += 1;
                if (2 < 5) {
                    var_v1_5 = &(((void *)D_008A5F70))[2];
                    do {
                        var_a0_5 += 1;
                        *var_v1_5 = 0;
                        var_v1_5 += 2;
                    } while (var_a0_5 < 5);
                }
                func_00D0F680(0);
                func_00D0FBE0(0);
                func_00D0FD20();
            }
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        if (func_0017F900() != 0) {
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
        }
        break;
    case 2:                                         /* switch 1 */
        if (func_00987B90(2) == 1) {
            func_00841DD0();
            func_0099C590();
            func_00820F10(1);
            func_008210C0(7);
            func_00981280();
            if ((func_008375D0() == 0) && (func_00835730() == 0)) {
                func_009310E0();
            }
            var_a0_7 = 2;
            (*(s16 *)D_008A5F72) = 0x28;
            if (2 < 5) {
                var_v1_7 = &(((void *)D_008A5F70))[2];
                do {
                    var_a0_7 += 1;
                    *var_v1_7 = 0;
                    var_v1_7 += 2;
                } while (var_a0_7 < 5);
            }
        }
        break;
    case 40:                                        /* switch 1 */
        if (func_008375D0() != 1) {
            var_v0 = func_009317C0(3, 1);
        } else {
            var_v0 = func_009317C0(3, 0);
        }
        if (var_v0 != 0) {
            if (var_v0 <= 0) {
                var_a0_8 = 2;
                (*(s16 *)D_008A5F72) = -1;
                if (2 < 5) {
                    var_v1_8 = &(((void *)D_008A5F70))[2];
                    do {
                        var_a0_8 += 1;
                        *var_v1_8 = 0;
                        var_v1_8 += 2;
                    } while (var_a0_8 < 5);
                }
            } else {
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
            }
        }
        break;
    case 100:                                       /* switch 1 */
        if (((s64) (func_008241E0() << 0x38) >> 0x38) != 1) {
            temp_v0 = func_0094C4E0(0);
            switch (temp_v0) {                      /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                break;
            case 4:                                 /* switch 3 */
                var_a0_10 = 2;
                (*(s16 *)D_008A5F72) = 0x1E;
                if (2 < 5) {
                    var_v1_10 = &(((void *)D_008A5F70))[2];
                    do {
                        var_a0_10 += 1;
                        *var_v1_10 = 0;
                        var_v1_10 += 2;
                    } while (var_a0_10 < 5);
                }
                break;
            default:                                /* switch 3 */
            case 3:                                 /* switch 3 */
            case 2:                                 /* switch 3 */
            case 1:                                 /* switch 3 */
                var_a0_11 = 2;
                (*(s16 *)D_008A5F72) = -1;
                if (2 < 5) {
                    var_v1_11 = &(((void *)D_008A5F70))[2];
                    do {
                        var_a0_11 += 1;
                        *var_v1_11 = 0;
                        var_v1_11 += 2;
                    } while (var_a0_11 < 5);
                }
                break;
            }
        } else if (func_00835A40() == 1) {
            var_a0_12 = 2;
            (*(s16 *)D_008A5F72) = -0x64;
            if (2 < 5) {
                var_v1_12 = &(((void *)D_008A5F70))[2];
                do {
                    var_a0_12 += 1;
                    *var_v1_12 = 0;
                    var_v1_12 += 2;
                } while (var_a0_12 < 5);
            }
        } else {
            func_0083C560();
            var_a0_13 = 2;
            (*(s16 *)D_008A5F72) = 0x1E;
            if (2 < 5) {
                var_v1_13 = &(((void *)D_008A5F70))[2];
                do {
                    var_a0_13 += 1;
                    *var_v1_13 = 0;
                    var_v1_13 += 2;
                } while (var_a0_13 < 5);
            }
        }
        break;
    case 30:                                        /* switch 1 */
        func_00841D90();
        func_00843690(3);
        func_00843690(4);
        func_00843690(5);
        if (func_0081CAD0() == 1) {
            func_0081CA90();
        }
        func_008240B0();
        func_00842330();
        func_00842970(1);
        var_a0_14 = 2;
        (*(s16 *)D_008A5F72) = 0;
        if (2 < 5) {
            var_v1_14 = &(((void *)D_008A5F70))[2];
            do {
                var_a0_14 += 1;
                *var_v1_14 = 0;
                var_v1_14 += 2;
            } while (var_a0_14 < 5);
        }
        (*(s32 *)D_008A6110) = 0;
        func_0094C4A0();
        func_00824220(0);
        (*(s16 *)D_008A5F70) = 0x1B;
        var_a0_15 = 1;
        var_v1_15 = &(((void *)D_008A5F70))[1];
        do {
            var_a0_15 += 1;
            *var_v1_15 = 0;
            var_v1_15 += 2;
        } while (var_a0_15 < 5);
        break;
    default:                                        /* switch 1 */
        if (func_001BE4D0(0) == 1) {
            func_00841D90();
            func_00843690(3);
            func_00843690(4);
            func_00843690(5);
            if (func_0081CAD0() == 1) {
                func_0081CA90();
            }
            func_0094C4A0();
            func_00824220(0);
            (*(s16 *)D_008A5F70) = 0x28;
            var_a0_16 = 1;
            var_v1_16 = &(((void *)D_008A5F70))[1];
            do {
                var_a0_16 += 1;
                *var_v1_16 = 0;
                var_v1_16 += 2;
            } while (var_a0_16 < 5);
        }
        break;
    }
    return 1;
}

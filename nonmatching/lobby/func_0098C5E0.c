/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
M2C_UNK func_008178E0();                            /* extern */
s32 func_008190C0();                                /* extern */
M2C_UNK func_00820F10(M2C_UNK);                     /* extern */
s32 func_00828160();                                /* extern */
s32 func_0095AEC0();                                /* extern */
s32 func_009602B0(s32 *);                           /* extern */
s32 func_00962E80();                                /* extern */
M2C_UNK func_0099C590();                            /* extern */
M2C_UNK func_0099C760(M2C_UNK);                     /* extern */
s32 func_0099C7F0(M2C_UNK);                         /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C540();                            /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_00814FB0[];
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_008A5F74[];
extern char D_008A5F84[];
extern char D_00A02020[];
extern char D_00A7D760[];
extern char D_00A7D770[];
extern char D_00A7D780[];
extern char D_00A7D790[];
extern char D_00A7D7A8[];
extern char D_00A7D7B8[];
extern char D_00A7D7C0[];

s32 func_0098C5E0(void) {
    s16 *var_v1;
    s16 *var_v1_2;
    s16 *var_v1_3;
    s16 *var_v1_4;
    s16 *var_v1_5;
    s16 *var_v1_6;
    s16 *var_v1_7;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_v0;

    switch ((*(s16 *)D_008A5F74)) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_00820F10(1);
        (*(s32 *)D_008A5F84) = 6;
        (*(s32 *)D_00A7D7A8) = func_00828160();
        if ((*(s32 *)D_00A7D770) == 1) {
            var_v0 = (*(s32 *)D_00A7D7C0);
        } else {
            var_v0 = func_009602B0(((void *)D_00A7D7A8));
        }
        (*(s32 *)D_00A7D7B8) = var_v0;
        (*(s32 *)D_00A7D760) = func_0099C7F0(0x18);
        var_a0 = 3;
        (*(s16 *)D_008A5F74) += 1;
        if (3 < 5) {
            var_v1 = ((void *)D_008A5F70) + (3 * 2);
            do {
                var_a0 += 1;
                *var_v1 = 0;
                var_v1 += 2;
            } while (var_a0 < 5);
        }
        break;
    case 1:                                         /* switch 1 */
        func_0099C760(1);
        func_008178E0();
        func_0099C590();
        func_0099D030(1);
        var_a0_2 = 3;
        (*(s16 *)D_008A5F74) += 1;
        if (3 < 5) {
            var_v1_2 = ((void *)D_008A5F70) + (3 * 2);
            do {
                var_a0_2 += 1;
                *var_v1_2 = 0;
                var_v1_2 += 2;
            } while (var_a0_2 < 5);
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = func_00962E80();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            if (func_0095AEC0() == 5) {
                func_0099D030(0);
                var_a0_3 = 2;
                (*(s16 *)D_008A5F72) = 1;
                if (2 < 5) {
                    var_v1_3 = ((void *)D_008A5F70) + (2 * 2);
                    do {
                        var_a0_3 += 1;
                        *var_v1_3 = 0;
                        var_v1_3 += 2;
                    } while (var_a0_3 < 5);
                }
            } else {
                (*(s32 *)D_00A7D780) = 0;
                var_a0_4 = 2;
                (*(s32 *)D_00A7D790) = 1;
                (*(s16 *)D_008A5F72) = 2;
                if (2 < 5) {
                    var_v1_4 = ((void *)D_008A5F70) + (2 * 2);
                    do {
                        var_a0_4 += 1;
                        *var_v1_4 = 0;
                        var_v1_4 += 2;
                    } while (var_a0_4 < 5);
                }
            }
            func_00815B70(0);
            func_00D10140(3);
            func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00A02020));
            func_00D0CB50();
            break;
        case 3:                                     /* switch 2 */
            /* fallthrough */
        case 1:                                     /* switch 2 */
            func_0099D030(0);
            func_00815B70(0);
            func_00D10140(3);
            func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00A02020));
            func_00D0CB50();
            func_0026E840(0x8C008005);
            var_a0_5 = 3;
            (*(s16 *)D_008A5F74) += 1;
            if (3 < 5) {
                var_v1_5 = ((void *)D_008A5F70) + (3 * 2);
                do {
                    var_a0_5 += 1;
                    *var_v1_5 = 0;
                    var_v1_5 += 2;
                } while (var_a0_5 < 5);
            }
            break;
        case 2:                                     /* switch 2 */
            func_0099D030(0);
            func_00815B70(0);
            func_00D10140(3);
            func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00A02020));
            func_00D0CB50();
            var_a0_6 = 2;
            (*(s16 *)D_008A5F72) = 0xB;
            if (2 < 5) {
                var_v1_6 = ((void *)D_008A5F70) + (2 * 2);
                do {
                    var_a0_6 += 1;
                    *var_v1_6 = 0;
                    var_v1_6 += 2;
                } while (var_a0_6 < 5);
            }
            break;
        }
        break;
    case 3:                                         /* switch 1 */
        if (func_008190C0() != 0) {
            func_00D0C540();
            var_a0_7 = 2;
            (*(s16 *)D_008A5F72) = 0xA;
            if (2 < 5) {
                var_v1_7 = ((void *)D_008A5F70) + (2 * 2);
                do {
                    var_a0_7 += 1;
                    *var_v1_7 = 0;
                    var_v1_7 += 2;
                } while (var_a0_7 < 5);
            }
        }
        break;
    }
    return 1;
}

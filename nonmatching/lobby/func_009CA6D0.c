/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BE4D0(s32);
extern void func_009CB7A0(void);
s32 func_00814FC0(M2C_UNK *, s16);                  /* extern */
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK, s16);                /* extern */
M2C_UNK func_0081D200(M2C_UNK);                     /* extern */
M2C_UNK func_00820F10(M2C_UNK);                     /* extern */
M2C_UNK func_008210C0(M2C_UNK);                     /* extern */
s32 func_00821570(s16);                             /* extern */
M2C_UNK func_0099C590();                            /* extern */
M2C_UNK func_0099C6D0(M2C_UNK);                     /* extern */
s32 func_009CA540(s16);                             /* extern */
M2C_UNK func_009CB400();                            /* extern */
M2C_UNK func_00D0BF70(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C980();                            /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_00814FB0[];
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_008A5F74[];
extern char D_00A02E70[];
extern char D_00A02E90[];
extern char D_00A7DD98[];

s32 func_009CA6D0(void) {
    s16 *temp_v0;
    s16 *temp_v0_2;
    s16 *temp_v0_3;
    s16 *temp_v0_4;
    s16 *temp_v0_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1;

    switch ((*(s16 *)D_008A5F72)) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        switch ((*(s16 *)D_008A5F74)) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            func_00815B70(0, (*(s16 *)D_008A5F72));
            func_00D0BF70(0);
            func_00D10140(6);
            func_0099C6D0(1);
            func_0099C590();
            func_00820F10(1);
            func_008210C0(7);
            func_0081D200(0);
            func_009CB7A0();
            var_a0 = 3;
            (*(s16 *)D_008A5F74) = 1;
loop_11:
            if (var_a0 < 5) {
                temp_v0 = &(((void *)D_008A5F70))[var_a0];
                var_a0 += 1;
                *temp_v0 = 0;
                goto loop_11;
            }
            break;
        case 1:                                     /* switch 2 */
            if (func_00821570((*(s16 *)D_008A5F72)) == 1) {
                if (func_001BE4D0(0) == 0) {

                } else {
                    func_00D0CB50();
                    (*(s16 *)D_008A5F72) = 1;
                    var_a0_2 = 2;
loop_21:
                    if (var_a0_2 < 5) {
                        temp_v0_2 = &(((void *)D_008A5F70))[var_a0_2];
                        var_a0_2 += 1;
                        *temp_v0_2 = 0;
                        goto loop_21;
                    }
                    func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00A02E70));
                }
            }
            break;
        }
        return 0;
    case 1:                                         /* switch 1 */
        return func_009CA540((*(s16 *)D_008A5F72));
    case 2:                                         /* switch 1 */
        if (func_00814FC0(((void *)D_00A02E90), (*(s16 *)D_008A5F72)) == 0) {
            return 0;
        }
        func_00D0C980();
        func_009CB400();
        switch ((*(s32 *)D_00A7DD98)) {                       /* switch 3; irregular */
        case 4:                                     /* switch 3 */
            (*(s16 *)D_008A5F70) = 0x28;
            var_a0_3 = 1;
loop_41:
            if (var_a0_3 < 5) {
                temp_v0_3 = &(((void *)D_008A5F70))[var_a0_3];
                var_a0_3 += 1;
                *temp_v0_3 = 0;
                goto loop_41;
            }
            return 3;
        default:                                    /* switch 3 */
            var_a1 = 1;
            if ((*(s32 *)D_00A7DD98) == 1) {
                (*(s16 *)D_008A5F70) = 0x1E;
loop_37:
                if (var_a1 < 5) {
                    temp_v0_4 = &(((void *)D_008A5F70))[var_a1];
                    var_a1 += 1;
                    *temp_v0_4 = 0;
                    goto loop_37;
                }
                return 1;
            }
        case 2:                                     /* switch 3 */
            (*(s16 *)D_008A5F70) = 0x1B;
            var_a0_4 = 1;
loop_45:
            if (var_a0_4 < 5) {
                temp_v0_5 = &(((void *)D_008A5F70))[var_a0_4];
                var_a0_4 += 1;
                *temp_v0_5 = 0;
                goto loop_45;
            }
            return 2;
        }
        break;
    default:                                        /* switch 1 */
        return 0;
    }
}

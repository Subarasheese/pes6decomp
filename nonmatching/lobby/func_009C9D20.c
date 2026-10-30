/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BE4D0(s32);
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_008214E0();                                /* extern */
M2C_UNK func_00824B80(M2C_UNK);                     /* extern */
M2C_UNK func_00824B90(M2C_UNK);                     /* extern */
M2C_UNK func_00824BC0(M2C_UNK);                     /* extern */
M2C_UNK func_00824BE0(M2C_UNK);                     /* extern */
M2C_UNK func_00824F90();                            /* extern */
s32 func_0082B810();                                /* extern */
M2C_UNK func_0082BE30(M2C_UNK);                     /* extern */
M2C_UNK func_00841D20();                            /* extern */
M2C_UNK func_00951B40();                            /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
s32 func_009C9660(s32);                             /* extern */
s32 func_009C9910(s32);                             /* extern */
s32 func_009C9C70(s32);                             /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
extern char D_00814FB0[];
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_008A5F74[];
extern char D_00A02D80[];

void func_009C9D20(void) {
    s16 *temp_v0_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;

    temp_v0 = func_0082B810();
    if ((temp_v0 == 0) || (func_008214E0() != 0)) {
        switch ((*(s16 *)D_008A5F72)) {                       /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            var_v0 = func_009C9660(temp_v0);
block_28:
            var_s0 = var_v0;
            break;
        case 1:                                     /* switch 1 */
            var_v0 = func_009C9910(temp_v0);
            goto block_28;
        default:                                    /* switch 1 */
            var_s0 = 0;
            break;
        case 0:                                     /* switch 1 */
            switch ((*(s16 *)D_008A5F74)) {                   /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                if (func_001BE4D0(0) == 0) {

                } else {
                    func_00D0CB50();
                    (*(s16 *)D_008A5F72) = 1;
                    var_a0 = 2;
loop_22:
                    if (var_a0 < 5) {
                        temp_v0_2 = ((void *)D_008A5F70) + (var_a0 * 2);
                        var_a0 += 1;
                        *temp_v0_2 = 0;
                        goto loop_22;
                    }
                    func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00A02D80));
                }
            default:                                /* switch 2 */
                var_s0 = 0;
                break;
            case 0:                                 /* switch 2 */
                var_s0 = func_009C9C70(temp_v0);
                break;
            }
            break;
        }
        if (var_s0 != 0) {
            func_00824F90();
            func_00951B40();
            func_0099D030(0);
            func_008187D0();
            func_00824BE0(0);
            func_00824BC0(0);
            func_00824B90(0);
            func_00824B80(0);
            switch (var_s0) {                       /* switch 3; irregular */
            case 2:                                 /* switch 3 */
                func_00841D20();
                return;
            case 3:                                 /* switch 3 */
                func_0082BE30(3);
                break;
            }
        }
    }
}

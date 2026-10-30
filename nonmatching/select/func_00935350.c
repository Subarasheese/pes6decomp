/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00152130(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0026DA40(M2C_UNK);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00934A80();                                /* extern */
s32 func_00934BE0();                                /* extern */
M2C_UNK func_00934F60();                            /* extern */
s32 func_00935230();                                /* extern */
extern s8 D_003EAA60;
extern char D_008DC270[];

s32 func_00935350(void) {
    s32 var_v1;
    s32 var_v1_2;

    switch (D_003EAA60) {                           /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        if ((func_00152130(0, 8) == 1) && (func_0026DA40(1) == 0)) {
            func_0026E840(0x9A088423);
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 1) {
            D_003EAA60 += 1;
        }
block_32:
    default:                                        /* switch 1 */
        return 0;
    case 0:                                         /* switch 1 */
        if (func_00935230() == 1) {
            D_003EAA60 += 1;
        }
        goto block_32;
    case 1:                                         /* switch 1 */
        func_00934F60();
        D_003EAA60 += 1;
        goto block_32;
    case 3:                                         /* switch 1 */
        switch ((*(s32 *)D_008DC270)) {                       /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            func_0026E840(0x84008401);
block_26:
            var_v1_2 = 1;
            break;
        case 1:                                     /* switch 2 */
            func_0026E840(0x84028400);
            goto block_26;
        default:                                    /* switch 2 */
            var_v1_2 = 0;
            break;
        }
        if ((var_v1_2 == 1) || (func_00934BE0() == 1)) {
            D_003EAA60 += 1;
        }
        goto block_32;
    case 4:                                         /* switch 1 */
        if (func_00934A80() == 1) {
            D_003EAA60 = 0;
            return 1;
        }
        goto block_32;
    }
}

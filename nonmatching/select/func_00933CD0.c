/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00152130(M2C_UNK, M2C_UNK);                /* extern */
s32 func_001B68B0();                                /* extern */
s32 func_001BE4D0(M2C_UNK);                         /* extern */
s32 func_00932420(M2C_UNK);                         /* extern */
M2C_UNK func_00932560();                            /* extern */
s32 func_00932AB0(M2C_UNK);                         /* extern */
extern s32 D_003E9A8C;
extern s32 D_003EAA0C;
extern s32 D_003EAA10;
extern s32 D_003EAA20;
extern s32 D_003EAA40;
extern char D_0053C300[];

s32 func_00933CD0(void) {
    switch (D_003EAA20) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        switch (D_003EAA40) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (func_00932AB0(1) == 1) {
                M2C_FIELD(((void *)D_0053C300), s16 *, 6) = 0;
                D_003EAA20 = 1;
            }
            break;
        case 1:                                     /* switch 2 */
            if (func_00932420(1) == 1) {
                M2C_FIELD(((void *)D_0053C300), s16 *, 6) = 1;
                D_003EAA20 = 1;
            }
            break;
        case 2:                                     /* switch 2 */
            if (func_00932420(1) == 1) {
                M2C_FIELD(((void *)D_0053C300), s16 *, 6) = 2;
                D_003EAA40 = 2;
                func_00932560();
                D_003EAA20 = 1;
            }
            break;
        }
block_23:
    default:                                        /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        if (func_001BE4D0(0) != 0) {
            if ((D_003E9A8C == 6) && (D_003EAA0C == 2) && (D_003EAA10 == 3)) {
                if (func_00152130(0, 0x15) == 1) {
                    D_003EAA20 = 0;
                    return 1;
                }
                goto block_23;
            }
            if (func_001B68B0() == 1) {
                D_003EAA20 = 0;
                return 1;
            }
            goto block_23;
        }
        goto block_23;
    }
}

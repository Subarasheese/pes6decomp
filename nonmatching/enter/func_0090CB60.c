/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00288570(void);
extern s32 func_001A5BB0(s32);
extern s32 func_0017F900(void);
M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */
extern char D_0092F042[];

s32 func_0090CB60(s32 arg0) {
    u8 var_v1;

    switch ((*(u8 *)D_0092F042)) {                           /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        return 1;
    case 1:                                         /* switch 1 */
        var_v1 = (*(u8 *)D_0092F042) + 1;
block_40:
        (*(u8 *)D_0092F042) = var_v1;
block_41:
    default:                                        /* switch 1 */
        return 0;
    case 0:                                         /* switch 1 */
        switch (arg0) {                             /* switch 2; irregular */
        case 0x400:                                 /* switch 2 */
            if (func_001A5BB0(3) == 0) {
                func_001A5E00(3);
            default:                                /* switch 2 */
block_36:
                var_v1 = 1;
                goto block_40;
            }
            (*(u8 *)D_0092F042) = 3;
            return 1;
        case 0x200:                                 /* switch 2 */
            if (func_001A5BB0(2) == 0) {
                func_001A5E00(2);
                goto block_36;
            }
            (*(u8 *)D_0092F042) = 3;
            return 1;
        case 0x100:                                 /* switch 2 */
            if (func_001A5BB0(1) == 0) {
                func_001A5E00(1);
                func_00288570();
                goto block_36;
            }
            (*(u8 *)D_0092F042) = 3;
            return 1;
        }
        break;
    case 2:                                         /* switch 1 */
        if (func_0017F900() != 0) {
            var_v1 = (*(u8 *)D_0092F042) + 1;
            goto block_40;
        }
        goto block_41;
    }
}

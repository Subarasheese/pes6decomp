/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0023E0E0(M2C_UNK);                     /* extern */
s32 func_002E8C60();                                /* extern */
M2C_UNK func_002E8CB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002E9170(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002E92D0(M2C_UNK);                     /* extern */
M2C_UNK func_00363BD0();                            /* extern */
M2C_UNK func_00363C40();                            /* extern */
extern u8 D_003EABE4;
extern char D_0053C318[];

s32 func_00941B40(void) {
    switch (D_003EABE4) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        switch ((*(s32 *)D_0053C318)) {                       /* switch 2; irregular */
        case 0x39:                                  /* switch 2 */
            /* fallthrough */
        case 0x0:                                   /* switch 2 */
        case 0x2E:                                  /* switch 2 */
        case 0x30:                                  /* switch 2 */
            func_002E92D0(1);
            break;
        default:                                    /* switch 2 */
            func_0023E0E0(0x1F);
            break;
        }
        if (((*(s32 *)D_0053C318) == 2) || ((*(s32 *)D_0053C318) == 3) || ((*(s32 *)D_0053C318) == 5) || ((*(s32 *)D_0053C318) == 2) || ((*(s32 *)D_0053C318) == 0xF) || ((*(s32 *)D_0053C318) == 8) || ((*(s32 *)D_0053C318) == 9) || ((*(s32 *)D_0053C318) == 0x10)) {
            func_002E9170(0, 1);
        }
        func_00363BD0();
        D_003EABE4 += 1;
block_27:
    default:                                        /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        func_002E8CB0((*(s32 *)D_0053C318), 0);
        D_003EABE4 = D_003EABE4;
        goto block_27;
    case 2:                                         /* switch 1 */
        if (func_002E8C60() == 1) {
            D_003EABE4 += 1;
        }
        goto block_27;
    case 3:                                         /* switch 1 */
        func_0023E0E0(2);
        func_00363C40();
        D_003EABE4 = 0;
        return 1;
    }
}

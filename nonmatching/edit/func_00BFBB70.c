/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00B9F830();                                /* extern */
s32 func_00B9F840();                                /* extern */
M2C_UNK func_00BC7390(M2C_UNK);                     /* extern */
M2C_UNK func_00BC9B60(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BCC580(s32);                         /* extern */
M2C_UNK func_00BFA1F0(M2C_UNK);                     /* extern */
M2C_UNK func_00BFBCB0(M2C_UNK *);                   /* extern */
M2C_UNK func_00BFBFF0(M2C_UNK *, s32);              /* extern */
extern char D_00CEB8A8[];
extern char D_00CEB8B0[];

s32 func_00BFBB70(s32 arg0) {
    switch ((*(s32 *)D_00CEB8A8)) {                           /* irregular */
    case 0:
        if (func_00B9F840() != 0) {
            func_00BFBFF0(((void *)D_00CEB8B0), arg0);
            func_00BC7390(0xF);
            func_00B91440(0x29);
            func_00B91490(0x2B);
            func_00BFA1F0(1);
            func_00BC9B60(2, 0x14);
            (*(s32 *)D_00CEB8A8) = 1;
        case 1:
            if (func_00B9F830() != 0) {
                (*(s32 *)D_00CEB8A8) = 2;
            case 2:
                func_00BFBCB0(((void *)D_00CEB8B0));
            }
        }
block_12:
    default:
        return 0;
    case 3:
        if (func_00B9F840() != 0) {
            func_00B91440(0x2B);
            func_00B91490(0x29);
            func_00BC9B60(2, 0x14);
            func_00BCC580(M2C_FIELD(((void *)D_00CEB8B0), s32 *, 0));
            func_00BFA1F0(1);
            (*(s32 *)D_00CEB8A8) = 0;
            return M2C_FIELD(((void *)D_00CEB8B0), s32 *, 0x10);
        }
        goto block_12;
    }
}

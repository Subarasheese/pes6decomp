/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008F76D0();                                /* extern */
M2C_UNK func_008F7940(M2C_UNK);                     /* extern */
M2C_UNK func_008F7970();                            /* extern */
M2C_UNK func_008F7DA0();                            /* extern */
M2C_UNK func_008F8B80();                            /* extern */
M2C_UNK func_008F8EC0();                            /* extern */
s32 func_008F92C0();                                /* extern */
extern s32 D_003EA620;
extern char D_008FA9E0[];

s32 func_008F75B0(void) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    func_008F7970();
    func_008F7DA0();
    func_008F7940(0);
    switch (D_003EA620) {                           /* irregular */
    default:
        if (func_008F76D0() != 0) {
            D_003EA620 = 1;
        } else {
block_20:
            var_s0 = 1;
        }
        break;
    case 1:
        if (func_008F92C0() != 0) {
            D_003EA620 = 2;
        }
        break;
    case 2:
        if ((*(s32 *)D_008FA9E0) != 0x100) {
            var_v0 = 0;
        } else {
            func_0026E840(0x84028400);
            var_v0 = 1;
        }
        if (var_v0 != 0) {
            D_003EA620 = 3;
        }
        break;
    case 3:
        if (func_008F92C0() != 0) {
            D_003EA620 = 4;
        case 4:
            func_008F8EC0();
            D_003EA620 = 0;
            goto block_20;
        }
        break;
    }
    func_008F8B80();
    return var_s0;
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001907F8(s32, M2C_UNK, s32 *);         /* extern */
extern char D_011FD1C0[];
extern char D_011FD1C4[];
extern char D_011FD1C8[];

s32 func_001901F0(s32 arg0, u32 arg1) {
    s32 *var_a3;
    s32 temp_v1;
    u32 temp_a1;
    u32 var_a1;

    var_a1 = arg1;
    temp_v1 = 4 - (arg0 & 3);
    if (temp_v1 != 0) {
        var_a3 = ((void *)D_011FD1C0);
        (*(s32 *)D_011FD1C0) = arg0 - temp_v1;
        var_a1 -= temp_v1;
    } else {
        var_a3 = (s32 *)0x01200000;
    }
    temp_a1 = var_a1 >> 2;
    (*(u32 *)D_011FD1C8) = temp_a1;
    M2C_FIELD(var_a3, s32 *, -0x2E40) = arg0;
    (*(s32 *)D_011FD1C4) = arg0 + (temp_a1 * 4);
    func_001907F8(temp_a1 - 1, 0, var_a3);
    return 0;
}

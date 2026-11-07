/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0025E130(M2C_UNK, M2C_UNK);            /* extern */
extern char D_0058D1E0[];

void func_0025E560(void) {
    s32 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_0058D1E0);
    do {
        func_00153FA0(M2C_FIELD(var_s0, s32 *, 8));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    func_00153FA0((*(s32 *)D_0058D1E0));
    func_001C48E8(((void *)D_0058D1E0), 0, 0x20);
    func_0025E130(8, 0);
}

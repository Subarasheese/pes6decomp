/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern s32 func_001F08B0(s32);
M2C_UNK sprintf(s8 *, s32, s32, s32);         /* extern */
extern char D_00A03220[];

s32 func_009E3BA0(void *arg0, s32 arg1, s32 arg2) {
    s8 sp40;
    s8 *var_a1;

    sprintf(&sp40, func_001F08B0(0x670028), arg1, arg2);
    var_a1 = &sp40;
    if (arg0 == NULL) {
        return 0;
    }
    if ((var_a1 == NULL) || (sp40 == 0)) {
        var_a1 = ((void *)D_00A03220);
    }
    func_001DF820(M2C_FIELD(arg0, void **, 0xC), (s32) var_a1);
    return 1;
}

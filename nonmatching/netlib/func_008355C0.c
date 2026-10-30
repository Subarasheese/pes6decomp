/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00827BF0(s32);                         /* extern */
s32 func_00828140();                                /* extern */
extern char D_008A5F7A[];
extern char D_008A5F80[];

void func_008355C0(void) {
    if ((*(s8 *)D_008A5F7A) != 1) {
        return;
    }
    func_00827BF0((*(s32 *)D_008A5F80) + func_00828140());
}

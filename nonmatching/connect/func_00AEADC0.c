/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B66C0(s32);                         /* extern */
M2C_UNK func_00AEE910();                            /* extern */
extern char D_00B00500[];

void func_00AEADC0(void) {
    func_001B66C0((*(s32 *)D_00B00500));
    func_00AEE910();
}

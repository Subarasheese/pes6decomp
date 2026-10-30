/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C668();                            /* extern */
M2C_UNK func_00190750();                            /* extern */
extern char D_005C5CCC[];

void func_0018C6E8(void) {
    func_0018C668();
    func_00190750();
    (*(s32 *)D_005C5CCC) = 1;
}

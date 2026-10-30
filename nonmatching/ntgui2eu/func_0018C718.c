/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C588();                            /* extern */
M2C_UNK func_0018C5F8();                            /* extern */
M2C_UNK func_00193100(M2C_UNK, M2C_UNK);            /* extern */
extern char D_005C5CCC[];

void func_0018C718(void) {
    func_0018C588();
    func_00193100(0, 0);
    (*(s32 *)D_005C5CCC) = 0;
    func_0018C5F8();
}

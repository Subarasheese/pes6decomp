/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00120298(M2C_UNK);                     /* extern */
M2C_UNK func_00125D48();                            /* extern */
M2C_UNK func_0015DF20();                            /* extern */
extern char D_011E6B60[];

void func_0015DBA0(void) {
    func_0015DF20();
    func_00120298(1);
    func_00125D48();
    (*(s32 *)D_011E6B60) = 2;
}

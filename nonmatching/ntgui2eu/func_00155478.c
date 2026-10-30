/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586C8();                            /* extern */
M2C_UNK func_00158A50();                            /* extern */
extern char D_011E0D54[];

void func_00155478(void) {
    func_001586C8();
    (*(s32 *)D_011E0D54) = 3;
    func_00158A50();
}

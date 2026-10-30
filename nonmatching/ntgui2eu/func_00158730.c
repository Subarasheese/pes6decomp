/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586C8();                            /* extern */
extern char D_011E3940[];

void func_00158730(void) {
    func_001586C8();
    (*(s32 *)D_011E3940) = 3;
}

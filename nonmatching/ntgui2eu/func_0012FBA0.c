/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00125D48();                            /* extern */
M2C_UNK func_0012F350();                            /* extern */
M2C_UNK func_00152000();                            /* extern */
extern char D_011D4D58[];

void func_0012FBA0(void) {
    func_0012F350();
    (*(s32 *)D_011D4D58) = 2;
    func_00152000();
    func_00125D48();
}

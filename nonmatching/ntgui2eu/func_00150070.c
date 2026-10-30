/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129588(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_001503B8();                            /* extern */
extern char D_011E0B38[];

void func_00150070(void) {
    (*(s32 *)D_011E0B38) = func_00129588(func_00135080(0x136), 0, 0, 0);
    func_001503B8();
}

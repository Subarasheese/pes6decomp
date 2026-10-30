/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012BD20();                            /* extern */
M2C_UNK func_00131760(s32);                         /* extern */
extern char D_011DB898[];

void func_00141888(void) {
    func_00131760((*(s32 *)D_011DB898));
    func_0012BD20();
}

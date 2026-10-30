/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00124BA0();                            /* extern */
M2C_UNK func_00153F78(M2C_UNK *, s32);              /* extern */
extern char D_005FCC60[];

void func_00150108(s32 arg0) {
    func_00153F78(((void *)D_005FCC60), arg0);
    func_00124BA0();
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00153FD0(M2C_UNK *, s32);              /* extern */
extern char D_005BD984[];
extern char D_005FCB60[];

void func_0014EF68(void) {
    func_00153FD0(((void *)D_005FCB60), (*(s32 *)D_005BD984));
    if ((*(s32 *)D_005BD984) == 0) {
        func_00136FD8(1, 0x11);
        return;
    }
    func_00136FD8(1, 0x10);
}

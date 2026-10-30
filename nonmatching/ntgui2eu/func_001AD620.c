/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD608();                            /* extern */
M2C_UNK func_001AD8E8(s32, M2C_UNK *, s32, s32);    /* extern */
extern void *D_005CC508;
extern char D_006012C0[];

void func_001AD620(s32 arg0, s32 arg1) {
    func_001AD8E8(M2C_FIELD(D_005CC508, s32 *, 0xC), ((void *)D_006012C0), arg0, arg1);
    func_001AD608();
}

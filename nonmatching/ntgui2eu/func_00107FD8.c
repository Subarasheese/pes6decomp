/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001104DC(s32);                         /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, s32);              /* extern */
extern char D_002BA0C0[];
extern char D_005F7688[];

void func_00107FD8(void) {
    if (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C50) != -1) {
        func_001104DC(M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C50));
        M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C50) = -1;
    } else {
        func_001104DC(5);
    }
    func_0019DBD0(((void *)D_005F7688), M2C_FIELD((((void *)D_002BA0C0) - 0x5F40), s32 *, 0x5C50));
}

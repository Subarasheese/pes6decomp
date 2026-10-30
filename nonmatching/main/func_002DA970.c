/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002D9D28();                            /* extern */
M2C_UNK func_002DB028(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern char D_003B31F8[];
extern char D_005E5F00[];
extern char D_005E5F40[];

void func_002DA970(s32 arg0) {
    func_002D9D28();
    M2C_FIELD(((void *)D_005E5F40), s32 *, 8) = arg0;
    M2C_FIELD(((void *)D_005E5F40), s32 *, 4) = (s32) (*(s32 *)D_003B31F8);
    func_002DB028(((void *)D_005E5F00), ((void *)D_005E5F40), 0x67);
}

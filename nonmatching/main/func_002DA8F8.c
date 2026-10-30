/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002D9D28();                            /* extern */
M2C_UNK func_002DB028(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
extern char D_005E5F00[];
extern char D_005E5F40[];

void func_002DA8F8(s32 arg0) {
    func_002D9D28();
    (*(s32 *)D_005E5F40) = arg0;
    func_002DB028(((void *)D_005E5F00), ((void *)D_005E5F40), 0x65);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C7F58(void *, s32);                 /* extern */
M2C_UNK func_002D9D28();                            /* extern */
M2C_UNK func_002DB028(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern char D_005E5F00[];
extern char D_005E5F40[];

void func_002DA018(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002D9D28();
    func_001C7F58(((void *)D_005E5F40) + 0x10, arg0);
    M2C_FIELD(((void *)D_005E5F40), s32 *, 0) = arg3;
    M2C_FIELD(((void *)D_005E5F40), s32 *, 8) = arg1;
    M2C_FIELD(((void *)D_005E5F40), s32 *, 0xC) = arg2;
    func_002DB028(((void *)D_005E5F00), ((void *)D_005E5F40), 1);
}

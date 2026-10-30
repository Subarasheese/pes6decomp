/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019AD70(s32, s32, s32, s32);          /* extern */
M2C_UNK func_001A4C08(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_001A4D20();                            /* extern */
extern char D_005CBF38[];
extern char D_006007E0[];

void func_001A4D28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001A4C08(((void *)D_006007E0), arg2, arg3);
    func_001A4D20();
    func_0019AD70(arg0, arg1, arg2, (*(s32 *)D_005CBF38) + 4);
}

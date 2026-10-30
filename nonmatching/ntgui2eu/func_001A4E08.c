/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B540(s32, s32);                    /* extern */
M2C_UNK func_001A4C08(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_001A4D20();                            /* extern */
extern char D_005CBF38[];
extern char D_006007E0[];

void func_001A4E08(s32 arg0, s32 arg1) {
    func_001A4C08(((void *)D_006007E0), arg0, arg1);
    func_001A4D20();
    func_0019B540(arg0, (*(s32 *)D_005CBF38) + 4);
}

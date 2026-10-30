/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0015AC08(s32 *, s32 *, s32 *, s32 *);  /* extern */
M2C_UNK func_00162230(s32, s32, s32);               /* extern */
extern char D_011E6B00[];
extern char D_011E6B0C[];
extern char D_011E6B2C[];
extern char D_011E6B38[];
extern char D_011E6B3C[];
extern char D_011E6B40[];

void func_001598A8(s32 arg0, s32 arg1) {
    func_00162230((*(s32 *)D_011E6B0C), arg0, arg1);
    (*(s32 *)D_011E6B2C) = arg1;
    (*(s32 *)D_011E6B00) = 1;
    (*(s32 *)D_011E6B38) = 0;
    (*(s32 *)D_011E6B3C) = 0;
    (*(s32 *)D_011E6B40) = 0;
    func_0015AC08(((void *)D_011E6B3C), ((void *)D_011E6B40), ((void *)D_011E6B2C), ((void *)D_011E6B00));
}

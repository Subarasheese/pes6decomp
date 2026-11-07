/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


s32 func_0019AD70(s32, s32, s32, s32);          /* extern */
void func_001A4C08(M2C_UNK *, s32, s32);         /* extern */
void func_001A4D20(void);                            /* extern */
extern char D_005CBF38[];
extern char D_006007E0[];

s32 func_001A4D28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001A4C08(((void *)D_006007E0), arg2, arg3);
    func_001A4D20();
    return func_0019AD70(arg0, arg1, arg2, (*(s32 *)D_005CBF38) + 4);
}

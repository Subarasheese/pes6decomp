/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018FE88(s32, s32, s32);                   /* extern */
M2C_UNK func_0018FF78(s32, s32, s32, s16, s16, s16); /* extern */
s32 func_00193068(M2C_UNK);                         /* extern */
extern char D_005C8D60[];
extern char D_005C8D64[];
extern char D_005C8D68[];

s32 func_00190090(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_v0;

    (*(s32 *)D_005C8D60) += 1;
    temp_v0 = func_00193068(0) == 0;
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x28) = temp_v0;
    (*(s32 *)D_005C8D64) = temp_v0;
    temp_s2 = func_0018FE88(arg0, arg1, (*(s32 *)D_005C8D60));
    func_0018FF78(arg0, arg1, (*(s32 *)D_005C8D60), M2C_FIELD(((void *)D_005C8D68), s16 *, 0x20), M2C_FIELD(((void *)D_005C8D68), s16 *, 0x24), (s16) (*(s32 *)D_005C8D64));
    return temp_s2;
}

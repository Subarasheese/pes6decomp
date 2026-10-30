/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C4A8();                            /* extern */
M2C_UNK func_001901F0(s32);                         /* extern */
M2C_UNK func_00190628(s32);                         /* extern */
extern char D_005C5CC0[];
extern char D_005C5CC4[];
extern char D_005C5D40[];

void func_0018C760(s32 arg0, s32 arg1) {
    (*(s32 *)D_005C5D40) = arg0;
    (*(s32 *)D_005C5CC0) = arg1;
    func_001901F0(arg1);
    func_00190628((*(s32 *)D_005C5CC4));
    func_0018C4A8();
}

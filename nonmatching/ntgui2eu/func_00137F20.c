/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
extern char D_005B3744[];
extern char D_005BC6C4[];
extern M2C_UNK func_00137CB0;

void func_00137F20(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        (*(s32 *)D_005BC6C4) = 3;
        return;
    case 1:
        func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x68), &func_00137CB0, (*(s32 *)D_005B3744));
        (*(s32 *)D_005BC6C4) = 0;
        break;
    }
}

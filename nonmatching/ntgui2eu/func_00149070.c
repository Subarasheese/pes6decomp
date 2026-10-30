/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
extern char D_005B3744[];
extern char D_005BD428[];
extern M2C_UNK func_00148EB8;

void func_00149070(void) {
    switch ((*(s32 *)D_005BD428)) {                           /* irregular */
    case 1:
        func_0012DD30(3, 0x1F4, 0xFA, func_00135080(0x18), &func_00148EB8, (*(s32 *)D_005B3744));
        return;
    case 2:
        func_0012DD30(3, 0x1F4, 0xFA, func_00135080(0x19), &func_00148EB8, (*(s32 *)D_005B3744));
        return;
    case 3:
        func_0012DD30(3, 0x1F4, 0xFA, func_00135080(0x1A), &func_00148EB8, (*(s32 *)D_005B3744));
        return;
    }
}

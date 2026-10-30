/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
extern char D_005B3744[];
extern char D_011D78AC[];
extern M2C_UNK func_00137CB0;
extern M2C_UNK func_00137CD8;

void func_00137DC8(void) {
    if ((*(s32 *)D_011D78AC) != 0) {
        func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x66), &func_00137CB0, (*(s32 *)D_005B3744));
        return;
    }
    func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x67), &func_00137CD8, (*(s32 *)D_005B3744));
}

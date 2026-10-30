/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165AC0(s32);                         /* extern */
extern char D_011D4D9C[];
extern char D_011D4DA0[];

void func_0012FB48(void) {
    s32 temp_a0;

    if ((*(s32 *)D_011D4D9C) != 0) {
        func_00165AC0((*(s32 *)D_011D4D9C));
    }
    if ((*(s32 *)D_011D4DA0) != 0) {
        func_00165AC0((*(s32 *)D_011D4DA0));
    }
    temp_a0 = *(s32 *)0x011D4DA4;
    if (temp_a0 != 0) {
        func_00165AC0(temp_a0);
    }
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B130(s32);                         /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019E0A8(M2C_UNK);                     /* extern */
s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
extern char D_005C8DD4[];
extern char D_005C8DE0[];
extern char D_005C8DEC[];
extern char D_005C8DF0[];
extern char D_005C8E20[];

void func_00190ED0(void) {
    s32 *var_s0;
    s32 temp_s0;

    if ((*(s32 *)D_005C8DD4) != 0) {
        (*(s32 *)D_005C8E20) = -1;
        var_s0 = ((void *)D_005C8DE0);
        func_0019B140((*(s32 *)D_005C8DE0));
    } else {
        var_s0 = (s32 *)0x5D0000;
    }
    func_0019B130(*(s32 *)0x5C8DE8);
    func_0019B130((*(s32 *)D_005C8DEC));
    func_0019B130((*(s32 *)D_005C8DF0));
    func_0019B130(M2C_FIELD(var_s0, s32 *, -0x7220));
    temp_s0 = func_001A4728();
    func_0019E0A8(0x80000012);
    if (temp_s0 != 0) {
        func_001A4778();
    }
}

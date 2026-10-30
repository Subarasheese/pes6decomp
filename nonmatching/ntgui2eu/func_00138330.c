/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00124860();                            /* extern */
M2C_UNK func_00138140(s32 *, s32 *);                /* extern */
M2C_UNK func_00138288();                            /* extern */
extern char D_005BC6C4[];
extern char D_005BC6C8[];
extern char D_011D78A4[];
extern char D_011D78A8[];
extern char D_011D78AC[];
extern char D_011D78B0[];

void func_00138330(void) {
    (*(s32 *)D_011D78A8) = 0;
    (*(s32 *)D_011D78A4) = 0;
    func_00138288();
    (*(s32 *)D_005BC6C4) = 0;
    (*(s32 *)D_011D78AC) = 0;
    (*(s32 *)D_011D78B0) = 0;
    (*(s32 *)D_005BC6C8) = 0;
    func_00138140(((void *)D_011D78B0), ((void *)D_005BC6C8));
    func_00124860();
}

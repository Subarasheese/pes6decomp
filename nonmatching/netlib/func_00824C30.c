/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00843BB0();                            /* extern */
M2C_UNK func_00866670(s32);                         /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A4398[];
extern char D_008A43B8[];
extern char D_008A43C8[];

s32 func_00824C30(void) {
    func_00866670((*(s32 *)D_008A4398));
    func_001C48E8(func_00D0BAF0(), 0, 0x16248);
    (*(s32 *)D_008A4398) = 0;
    (*(s32 *)D_008A43C8) = 0;
    (*(s32 *)D_008A43B8) = 0;
    func_00843BB0();
    return 1;
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001010F8(M2C_UNK);                     /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_00155A90();                            /* extern */
s32 func_00181290(s32);                             /* extern */
extern char D_0051FEA0[];
extern char D_0051FEA4[];
extern char D_0051FEA8[];
extern char D_0051FEAC[];

void func_001807D0(void) {
    s32 var_v0;

    if ((*(u8 *)D_0051FEAC) == 3) {
        var_v0 = func_00181290((*(s32 *)D_0051FEA4));
        if (var_v0 != 3) {
loop_2:
            if (var_v0 == 4) {
loop_3:
                goto loop_3;
            }
            func_001010F8(0);
            func_00155A90();
            var_v0 = func_00181290((*(s32 *)D_0051FEA4));
            if (var_v0 == 3) {
                goto block_6;
            }
            goto loop_2;
        }
block_6:
        func_00153FA0((*(s32 *)D_0051FEA8));
        func_00153FA0((*(s32 *)D_0051FEA0));
        (*(s32 *)D_0051FEA8) = 0;
        (*(s32 *)D_0051FEA0) = 0;
        (*(u8 *)D_0051FEAC) = 0;
    }
}

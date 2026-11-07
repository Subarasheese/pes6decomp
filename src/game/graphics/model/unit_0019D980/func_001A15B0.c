/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_00182F30();                            /* extern */
M2C_UNK func_001873A0(M2C_UNK);                     /* extern */
M2C_UNK func_0018A190(M2C_UNK);                     /* extern */
M2C_UNK func_0019E960();                            /* extern */
M2C_UNK func_0019EC50();                            /* extern */
extern s32 D_003E9888;
extern char D_0051FFA8[];
extern char D_0051FFAC[];

void func_001A15B0(void) {
    if (D_003E9888 != 0) {
        func_0019E960();
        func_00145590(D_003E9888);
        func_00153FA0(D_003E9888);
        D_003E9888 = 0;
    }
    func_0018A190(0);
    func_0019EC50();
    func_001873A0(0);
    func_00182F30();
    if ((*(s32 *)D_0051FFA8) != 0) {
        func_00153FA0((*(s32 *)D_0051FFA8));
        (*(s32 *)D_0051FFA8) = 0;
    }
    if ((*(s32 *)D_0051FFAC) != 0) {
        func_00153FA0((*(s32 *)D_0051FFAC));
        (*(s32 *)D_0051FFAC) = 0;
    }
}

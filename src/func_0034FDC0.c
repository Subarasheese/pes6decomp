/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s8 func_0030EA70();                                 /* extern */
M2C_UNK func_00310340(s32, u8);                     /* extern */
M2C_UNK func_00310D50(M2C_UNK *, M2C_UNK);          /* extern */
extern s8 D_003E9F68;
extern s8 D_003E9F70;
extern u8 D_003E9F74;
extern s8 D_003E9F78;
extern char D_0061C6E4[];
extern char D_0061C6EC[];

void func_0034FDC0(s32 arg0, u8 *arg1) {
    if (arg0 == 1) {
        D_003E9F78 = 1;
        D_003E9F74 = *arg1;
        D_003E9F70 = func_0030EA70();
        func_00310340((s32)&D_003E9F68, *arg1);
        func_00310D50(((void *)D_0061C6E4), 0);
        func_00310D50(((void *)D_0061C6EC), 1);
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001BB710(s32);                         /* extern */
s32 func_001BB730();                                /* extern */
M2C_UNK func_001DB2F0(s32, M2C_UNK);                /* extern */
s32 func_001DB410();                           /* extern */
extern char D_0058D430[];
extern char D_0058D450[];
extern char D_0058D454[];

void func_00265BF0(void) {
    s32 temp_v0;

    if ((*(s32 *)D_0058D454) == 0) {
        if ((*(s32 *)D_0058D450) != 0) {
            func_001BB710((*(s32 *)D_0058D450));
        }
        (*(s32 *)D_0058D450) = func_001BB730();
        if ((*(s32 *)D_0058D454) == 0) {
            temp_v0 = func_001DB410();
            (*(s32 *)D_0058D454) = temp_v0;
            func_001DB2F0(temp_v0, 0);
        }
        (*(s32 *)D_0058D430) = 0x1CA;
    }
}

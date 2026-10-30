/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134388(s32);                         /* extern */
M2C_UNK func_001514E8(s32);                         /* extern */
M2C_UNK func_00165BA0(s32, M2C_UNK);                /* extern */
extern char D_005BEE08[];
extern char D_011E6B60[];
extern char D_011E6B70[];
extern char D_011E6B90[];
extern char D_011E6B94[];

void func_0015E118(void) {
    func_00134388((*(s32 *)D_005BEE08));
    (*(s32 *)D_011E6B60) = 0;
    func_001514E8((*(s32 *)D_011E6B70));
    func_00165BA0((*(s32 *)D_011E6B90), 0xFF);
    func_00165BA0((*(s32 *)D_011E6B94), 0xFF);
}

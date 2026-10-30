/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001566A8(void);
M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_001B016C(u8 *, M2C_UNK *);                 /* extern */
extern char D_005BE080[];
extern char D_005FB120[];
extern char D_005FB168[];

void func_0013AF00(void) {
    u8 *var_v0;

    var_v0 = ((void *)D_005BE080) - 0x600;
    if (func_001B016C(((void *)D_005BE080), ((void *)D_005FB168)) == 0) {
        (*(u8 *)D_005BE080) = (*(u8 *)D_005FB120);
        var_v0 = ((void *)D_005BE080) - 0x600;
    }
    M2C_FIELD(var_v0, s8 *, 0x1312) = 0xFF;
    M2C_FIELD(var_v0, s8 *, 0x1311) = 0xFF;
    func_001566A8();
    func_00136FD8(1, 0xC);
}

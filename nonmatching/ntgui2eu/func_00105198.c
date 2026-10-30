/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001940C0(M2C_UNK);                     /* extern */
M2C_UNK func_0019B130(s32);                         /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
M2C_UNK func_0019BC00(M2C_UNK);                     /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_005CD320[];
extern s32 D_00602158;
extern s32 D_006025D0;
extern s32 D_006025D4;

void func_00105198(void) {
    func_0019DBD0(((void *)D_005CD320));
    func_0019B140(D_006025D0);
    func_0019B160(D_006025D4);
    func_0019B130(D_006025D4);
    func_0019B130(D_006025D0);
    func_0019BC00(2);
    func_001940C0(0);
    func_0019B130(D_00602158);
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135140(s32 *);                       /* extern */
M2C_UNK func_0019B130(s32);                         /* extern */
extern s32 D_00602024;
extern s32 D_00602028;
extern char D_01142880[];

void func_001012E0(void) {
    D_00602028 = 0;
    (*(s32 *)D_01142880) = 0x808;
    func_00135140(((void *)D_01142880));
    D_00602028 = 1;
    func_0019B130(D_00602024);
}

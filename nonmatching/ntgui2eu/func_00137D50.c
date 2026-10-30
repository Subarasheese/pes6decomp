/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00137CE0(M2C_UNK *);                   /* extern */
M2C_UNK func_00137DC8();                            /* extern */
extern char D_005BC6C0[];
extern char D_005BC6C4[];
extern M2C_UNK func_00137D40;

void func_00137D50(void) {
    (*(s32 *)D_005BC6C0) = 0;
    func_00137DC8();
    (*(s32 *)D_005BC6C4) = 2;
    func_00137CE0(&func_00137D40);
}

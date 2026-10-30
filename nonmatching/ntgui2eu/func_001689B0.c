/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00169450();                            /* extern */
extern M2C_UNK (*D_005BFA58)(void *);
extern char D_005BFFB0[];
extern char D_005BFFB4[];

void func_001689B0(void *arg0) {
    func_00169450();
    D_005BFA58(arg0);
    (*(s32 *)D_005BFFB4) = M2C_FIELD(arg0, s32 *, 0x860);
    (*(s32 *)D_005BFFB0) = M2C_FIELD(arg0, s32 *, 0x85C);
}

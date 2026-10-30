/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00154070(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_001B02B0(M2C_UNK *, u8 *);             /* extern */
extern char D_005B57E8[];
extern char D_005BEB80[];
extern char D_005FCB30[];
extern char D_005FCB40[];

void func_0014E2B8(void) {
    if (func_00154070(((void *)D_005FCB30), -1) == 0) {
        (*(u8 *)D_005B57E8) = (*(u8 *)D_005FCB40);
    }
    func_001B02B0(((void *)D_005BEB80), ((void *)D_005B57E8) + 0x57E8);
    func_00136FD8(6, -1);
}

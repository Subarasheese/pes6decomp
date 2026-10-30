/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AE7D8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005CABE4[];
extern char D_01204A68[];

s32 func_001A0008(void) {
    (*(s32 *)D_005CABE4) = 0;
    func_001AE7D8(((void *)D_01204A68), 0, 4);
    return 0;
}

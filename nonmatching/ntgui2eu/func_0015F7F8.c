/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586C8();                            /* extern */
extern char D_005BEE24[];
extern char D_011E6BB4[];

void func_0015F7F8(void) {
    (*(s32 *)D_005BEE24) = 0;
    func_001586C8();
    (*(s32 *)D_011E6BB4) = 3;
}

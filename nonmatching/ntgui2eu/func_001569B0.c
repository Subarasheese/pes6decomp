/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586C8();                            /* extern */
extern char D_011E2324[];
extern char D_011E2330[];

void func_001569B0(void) {
    func_001586C8();
    (*(s32 *)D_011E2324) = 3;
    (*(s32 *)D_011E2330) = 2;
}

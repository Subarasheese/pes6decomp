/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4698(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern char D_0038CBE8[];
extern char D_0038CC18[];

void func_001737A0(void) {
    func_001C4698(((void *)D_0038CBE8), ((void *)D_0038CBE8), 0x168);
    (*(s32 *)D_0038CC18) += 1;
}

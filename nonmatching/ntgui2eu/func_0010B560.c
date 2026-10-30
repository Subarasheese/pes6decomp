/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F7A58[];
extern char D_005F7A68[];
extern char D_011B5C80[];

void func_0010B560(s32 *arg0) {
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F7A58), 0x9C, ((void *)D_005F7A68));
    }
    if (*arg0 != 0) {
        *arg0 = 0;
        (*(s32 *)D_011B5C80) -= 1;
    }
}

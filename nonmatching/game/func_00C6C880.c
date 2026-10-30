/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern char D_00CCBB40[];
extern char D_00CCBB42[];

void func_00C6C880(void) {
    if (((*(u8 *)D_00CCBB42) == 0) && (M2C_FIELD(((void *)D_00CCBB40), u8 *, 3) != 0)) {
        func_0026E840(0x8200001A);
        M2C_FIELD(((void *)D_00CCBB40), s32 *, 4) = 0;
        M2C_FIELD(((void *)D_00CCBB40), s8 *, 2) = 1;
    }
}

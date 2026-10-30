/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001109FC(M2C_UNK *);                   /* extern */
M2C_UNK func_0019AF30(s32);                         /* extern */
M2C_UNK func_0019AF70(s32);                         /* extern */
extern char D_0044CA90[];
extern s32 D_00602658;

s32 func_0010F8DC(void) {
    func_0019AF70(D_00602658);
    func_0019AF30(D_00602658);
    D_00602658 = -1;
    func_001109FC(((void *)D_0044CA90));
    func_001109FC(((void *)D_0044CA90) + 0x824);
    return 0;
}

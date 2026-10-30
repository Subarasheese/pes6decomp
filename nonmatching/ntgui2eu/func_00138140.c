/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001236B8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005B58F0[];
extern char D_005B58F8[];

void func_00138140(void) {
    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), 0, 0);
    }
    if ((*(s32 *)D_005B58F8) != 0) {
        func_001236B8((*(s32 *)D_005B58F8), 0, 0);
    }
}

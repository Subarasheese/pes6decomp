/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001963C0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0019B130(s32);                         /* extern */
extern char D_005CAA34[];
extern char D_005CAA38[];

s32 func_00195B98(void) {
    if ((*(s32 *)D_005CAA34) >= 0) {
        func_001963C0(0, 0, 0);
        func_0019B130((*(s32 *)D_005CAA34));
        (*(s32 *)D_005CAA34) = -1;
        func_0019B130((*(s32 *)D_005CAA38));
    }
    return 1;
}

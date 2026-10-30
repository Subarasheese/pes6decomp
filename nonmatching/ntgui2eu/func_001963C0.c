/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
s32 func_0019B170(s32);                             /* extern */
extern char D_005CAA30[];
extern char D_005CAA34[];
extern char D_005CAA38[];
extern char D_011FED80[];

s32 func_001963C0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_s0;
    s32 var_s0;

    if (M2C_FIELD(((void *)D_005CAA30), s32 *, 0) == 0) {
        return -1;
    }
    var_s0 = func_0019B170((*(s32 *)D_005CAA38)) < 0;
    if ((arg0 == 0) && (var_s0 != 0)) {
        var_s0 = 0;
        func_0019B160((*(s32 *)D_005CAA38));
    }
    temp_s0 = var_s0 == 0;
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(((void *)D_005CAA30), s32 *, -0x55D0);
    }
    if (temp_s0 != 0) {
        M2C_FIELD(((void *)D_005CAA30), s32 *, -0x55D0) = 0;
        if (arg2 != NULL) {
            *arg2 = (*(s32 *)D_011FED80);
        }
        func_0019B140((*(s32 *)D_005CAA34));
    }
    return temp_s0;
}

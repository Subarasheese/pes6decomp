/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00198130();                                /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
s32 func_0019F030(M2C_UNK *);                       /* extern */
extern char D_005CAA90[];
extern char D_011FEE60[];

s32 func_00198080(s32 arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (M2C_FIELD(((void *)D_005CAA90), s32 *, 0) != -1) {
        switch (arg0) {                             /* irregular */
        case 0:
            func_0019B160(M2C_FIELD(((void *)D_005CAA90), s32 *, 0));
            *arg1 = func_00198130();
            func_0019B140(M2C_FIELD(((void *)D_005CAA90), s32 *, -0x5570));
block_9:
            var_v0 = 0;
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return var_v0;
        case 1:
            if (func_0019F030(((void *)D_011FEE60)) != 0) {
                return 1;
            }
            *arg1 = func_00198130();
            goto block_9;
        default:
            return -0xB;
        }
    } else {
        return var_v0;
    }
}

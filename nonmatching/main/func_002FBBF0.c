/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010AD30(s32, void *, M2C_UNK);        /* extern */
extern void *D_005EAAC8;
extern char D_005EAAD4[];
extern char D_005EAAE0[];

s32 func_002FBBF0(void) {
    func_0010AD30((*(s32 *)D_005EAAE0), D_005EAAC8, 0x10);
    if ((M2C_FIELD(D_005EAAC8, s8 *, 0) == 0x57) && (M2C_FIELD(D_005EAAC8, s8 *, 1) == 0x45) && (M2C_FIELD(D_005EAAC8, s8 *, 2) == 0x50) && (M2C_FIELD(D_005EAAC8, s8 *, 3) == 0x53) && (M2C_FIELD(D_005EAAC8, s8 *, 4) == 0x50)) {
        (*(s32 *)D_005EAAD4) = M2C_FIELD(D_005EAAC8, s32 *, 8);
        return 1;
    }
    return 0;
}

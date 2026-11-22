/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_0010AD30(s32, s32, s32);

extern char D_005EAAC8[];
extern char D_005EAAD4[];
extern char D_005EAAE0[];

s32 func_002FBBF0(void) {
    func_0010AD30((*(s32 *)D_005EAAE0), (*(s32 *)D_005EAAC8), 0x10);
    if ((M2C_FIELD((*(s32 *)D_005EAAC8), s8 *, 0) == 0x57) && (M2C_FIELD((*(s32 *)D_005EAAC8), s8 *, 1) == 0x45) && (M2C_FIELD((*(s32 *)D_005EAAC8), s8 *, 2) == 0x50) && (M2C_FIELD((*(s32 *)D_005EAAC8), s8 *, 3) == 0x53) && (M2C_FIELD((*(s32 *)D_005EAAC8), s8 *, 4) == 0x50)) {
        (*(s32 *)D_005EAAD4) = M2C_FIELD((*(s32 *)D_005EAAC8), s32 *, 8);
        return 1;
    }
    return 0;
}

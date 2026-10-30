/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00158A50();                            /* extern */
s32 func_00158B68();                                /* extern */
M2C_UNK func_00159008(s32);                         /* extern */
s32 func_001596E8(s32);                             /* extern */
extern char D_011E0D80[];
extern char D_011E0D84[];
extern M2C_UNK func_001557A0;

s32 func_00155738(void *arg0) {
    if ((func_00158B68() == 0) && (func_001596E8((*(s32 *)D_011E0D84)) < 0)) {
        func_00158A50();
        func_00159008((*(s32 *)D_011E0D80));
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_001557A0;
    }
    return 0;
}

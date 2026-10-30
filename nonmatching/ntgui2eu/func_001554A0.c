/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001586F0(void);
s32 func_00158B68();                                /* extern */
M2C_UNK func_00159420(s32);                         /* extern */
extern char D_011E0D54[];
extern char D_011E0D58[];
extern M2C_UNK func_00155518;

s32 func_001554A0(void *arg0) {
    if ((func_001586F0() == 0) && (func_00158B68() == 0)) {
        if ((*(s32 *)D_011E0D54) > 0) {
            (*(s32 *)D_011E0D54) -= 1;
            return 0;
        }
        func_00159420((*(s32 *)D_011E0D58));
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_00155518;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

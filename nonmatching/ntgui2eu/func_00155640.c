/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001586F0(void);
M2C_UNK func_00158A50(s32 *);                       /* extern */
s32 func_00158B68();                                /* extern */
M2C_UNK func_00159350();                            /* extern */
extern char D_011E0D8C[];
extern M2C_UNK func_001556B8;

s32 func_00155640(void *arg0) {
    if ((func_001586F0() == 0) && (func_00158B68() == 0)) {
        if ((*(s32 *)D_011E0D8C) > 0) {
            (*(s32 *)D_011E0D8C) -= 1;
            return 0;
        }
        func_00158A50(((void *)D_011E0D8C));
        func_00159350();
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_001556B8;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

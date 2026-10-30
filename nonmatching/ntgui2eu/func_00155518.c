/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00158B88(void);
s32 func_00158B68();                                /* extern */
extern char D_011E0D50[];
extern M2C_UNK func_00155568;

s32 func_00155518(void *arg0) {
    if (func_00158B68() == 0) {
        (*(s32 *)D_011E0D50) = func_00158B88();
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_00155568;
    }
    return 0;
}

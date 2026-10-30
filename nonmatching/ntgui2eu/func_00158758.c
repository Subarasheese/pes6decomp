/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001963C0(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern char D_011E3938[];
extern char D_011E393C[];
extern char D_011E3944[];

s32 func_00158758(void) {
    if (func_001963C0(1, ((void *)D_011E3938), ((void *)D_011E393C)) != 0) {
        if ((*(s32 *)D_011E393C) == 0) {
            M2C_FIELD(((void *)D_011E3944), s32 *, 0) = 0;
            return 1;
        }
        M2C_FIELD(((void *)D_011E3944), s32 *, 0x3944) = 1;
        return 1;
    }
    return 0;
}

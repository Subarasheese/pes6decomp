/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A0270(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_001A0500(s32);                         /* extern */
M2C_UNK func_001A08B8(s32, s8 *, M2C_UNK);          /* extern */
extern char D_005CAA58[];
extern char D_005FF338[];

s8 *func_001971A8(void) {
    s32 temp_v0;

    if ((*(s8 *)D_005CAA58) == 0) {
        temp_v0 = func_001A0270(((void *)D_005FF338), 1);
        if (temp_v0 >= 0) {
            func_001A08B8(temp_v0, ((void *)D_005CAA58), 0xE);
            func_001A0500(temp_v0);
        }
    }
    return ((void *)D_005CAA58) - 0x55A8;
}

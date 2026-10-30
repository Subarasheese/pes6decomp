/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00195D80(M2C_UNK);                         /* extern */
extern char D_005CAA30[];

s32 func_00195EA8(void) {
    s32 temp_v0;

    temp_v0 = func_00195D80(0x40);
    if (temp_v0 == 0) {
        (*(s32 *)D_005CAA30) = 0xB;
    }
    return temp_v0;
}

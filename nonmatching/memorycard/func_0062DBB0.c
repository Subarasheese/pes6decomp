/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0063E1E0(u8);                              /* extern */
extern char D_0065C2E0[];
extern char D_0065C2F2[];
extern char D_0065C2FF[];
extern char D_0065D898[];

s32 func_0062DBB0(void) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = func_0063E1E0((*(u8 *)D_0065C2F2)) & 0xFF & 0x7F;
    if (((*(u8 *)D_0065C2FF) == 0) && ((temp_v0 = (*(s32 *)D_0065D898) & 0x40000000, (temp_v0 == 0)) || ((temp_v0 != 0) && (M2C_FIELD(((void *)D_0065C2E0), u8 *, 0x13) != 0xFF))) && ((temp_a0 & 0xFF) == 0xE)) {
        return 1;
    }
    return 0;
}

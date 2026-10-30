/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099C7E0(M2C_UNK);                         /* extern */
M2C_UNK func_009E3610();                            /* extern */
extern char D_00A7DF08[];

s32 func_009E4D10(void) {
    s32 temp_v0;

    if ((*(s32 *)D_00A7DF08) == 0) {
        temp_v0 = func_0099C7E0(0x13C);
        (*(s32 *)D_00A7DF08) = temp_v0;
        if (temp_v0 == 0) {
            return 0;
        }
        func_009E3610();
        return 1;
    }
    return 0;
}

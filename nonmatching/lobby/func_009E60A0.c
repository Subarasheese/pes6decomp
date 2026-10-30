/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099C7E0(M2C_UNK);                         /* extern */
M2C_UNK func_009E52E0();                            /* extern */
extern char D_00A7DF18[];

s32 func_009E60A0(void) {
    s32 temp_v0;

    if ((*(s32 *)D_00A7DF18) == 0) {
        temp_v0 = func_0099C7E0(0x138);
        (*(s32 *)D_00A7DF18) = temp_v0;
        if (temp_v0 == 0) {
            return 0;
        }
        func_009E52E0();
        return 1;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00B007D0[];
extern s32 *D_00B007E0;

void func_00AE2740(s32 *arg0) {
    func_001C48E8(((void *)D_00B007D0), 0, 0x14);
    if (&D_00B007E0 != NULL) {
        D_00B007E0 = arg0;
        if (arg0 != NULL) {
            *arg0 = 0;
        }
    }
}

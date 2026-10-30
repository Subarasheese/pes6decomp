/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_009D99A0();                            /* extern */
extern char D_00A7DEB0[];

s32 func_009DAEE0(void) {
    if ((*(s32 *)D_00A7DEB0) == 0) {
        return 0;
    }
    func_009D99A0();
    func_0099C7C0((*(s32 *)D_00A7DEB0));
    (*(s32 *)D_00A7DEB0) = 0;
    return 1;
}

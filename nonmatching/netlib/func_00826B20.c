/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D13DD0();                            /* extern */
M2C_UNK func_00D14D50(s32);                         /* extern */
extern s32 D_003E77E4;
extern char D_008A4B80[];
extern char D_008A5C6C[];

s32 func_00826B20(void) {
    if ((*(s32 *)D_008A5C6C) == 1) {
        func_00D13DD0();
    }
    func_00D14D50(D_003E77E4);
    (*(s32 *)D_008A5C6C) = 0;
    (*(s32 *)D_008A4B80) = 0;
    return 4;
}

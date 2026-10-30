/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00832630(M2C_UNK);                     /* extern */
extern char D_008AA0EB[];
extern char D_008AA104[];
extern char D_008AA108[];

s32 func_00824070(void) {
    (*(s8 *)D_008AA0EB) = 2;
    (*(s32 *)D_008AA104) = 0;
    (*(s32 *)D_008AA108) = 0;
    func_00832630(2);
    return 1;
}

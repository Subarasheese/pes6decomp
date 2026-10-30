/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BD510(s32);                             /* extern */
M2C_UNK func_009BD710(s32);                         /* extern */
extern char D_00A7DB70[];
extern char D_00A7DB78[];

s32 func_0099F520(void) {
    if (func_009BD510((*(s32 *)D_00A7DB78)) != 0) {
        return 6;
    }
    (*(s32 *)D_00A7DB70) = 4;
    func_009BD710((*(s32 *)D_00A7DB78));
    return 0;
}

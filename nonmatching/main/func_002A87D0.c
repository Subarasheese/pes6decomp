/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A4880(M2C_UNK);                     /* extern */
extern char D_005E19A0[];

void func_002A87D0(s32 arg0) {
    s32 temp_v1;

    temp_v1 = (*(s32 *)D_005E19A0) & ~(arg0 & 0xFF);
    (*(s32 *)D_005E19A0) = temp_v1;
    if (!(temp_v1 & 2)) {
        func_001A4880(0);
        return;
    }
    func_001A4880(1);
}

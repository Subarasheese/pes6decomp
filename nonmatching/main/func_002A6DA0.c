/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A4880(M2C_UNK);                     /* extern */
extern char D_005E19A0[];

void func_002A6DA0(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    if (arg0 != 0) {
        temp_v1 = (*(s32 *)D_005E19A0) | 0x100;
        (*(s32 *)D_005E19A0) = temp_v1;
        if (!(temp_v1 & 2)) {
            func_001A4880(0);
            return;
        }
        func_001A4880(1);
        return;
    }
    temp_v1_2 = (*(s32 *)D_005E19A0) & ~0x100;
    (*(s32 *)D_005E19A0) = temp_v1_2;
    if (!(temp_v1_2 & 2)) {
        func_001A4880(0);
        return;
    }
    func_001A4880(1);
}

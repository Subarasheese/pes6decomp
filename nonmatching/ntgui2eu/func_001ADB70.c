/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001ADE68(s32, s32);                        /* extern */
M2C_UNK func_001AE898(s32);                         /* extern */
M2C_UNK func_001AE918(s32);                         /* extern */
extern char D_005CC508[];

s32 func_001ADB70(s32 arg0) {
    s32 temp_s1;

    func_001AE898((*(s32 *)D_005CC508));
    temp_s1 = func_001ADE68((*(s32 *)D_005CC508), arg0);
    func_001AE918((*(s32 *)D_005CC508));
    return temp_s1;
}

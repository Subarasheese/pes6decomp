/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AE898(s32);                         /* extern */
M2C_UNK func_001AE918(s32);                         /* extern */
M2C_UNK func_001B2EB8(s32, s32);                    /* extern */
extern char D_005CC508[];

void func_001ADBC8(s32 arg0) {
    func_001AE898((*(s32 *)D_005CC508));
    func_001B2EB8((*(s32 *)D_005CC508), arg0);
    func_001AE918((*(s32 *)D_005CC508));
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00172E60(s32, M2C_UNK);                /* extern */
M2C_UNK func_00173078(s32);                         /* extern */
M2C_UNK func_001747A0(s32);                         /* extern */

s32 func_001718D8(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    func_00172E60(arg0, 0);
    func_001747A0(arg0);
    func_00173078(arg0);
    return 1;
}

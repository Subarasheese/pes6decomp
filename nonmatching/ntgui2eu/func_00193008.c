/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00192C88(void *);
M2C_UNK func_001928D8(s32);                         /* extern */

void func_00193008(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 & 1;
    func_001928D8((temp_s0 * 0x28) + arg0);
    if (temp_s0 != 0) {
        func_00192C88(arg0 + 0x140);
        return;
    }
    func_00192C88(arg0 + 0x50);
}

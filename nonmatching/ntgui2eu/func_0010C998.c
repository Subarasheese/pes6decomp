/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0010CA78(void);
M2C_UNK func_0010C9D0(s32, s32, s32, s32);          /* extern */

void func_0010C998(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0010C9D0(arg0 & 0xFFFF, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3 & 0xFFFF);
    func_0010CA78();
}

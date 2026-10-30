/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001736D0(void);
extern void func_001736B8(void);
M2C_UNK func_00173A90(s32, s16, s32, s32);          /* extern */

void func_00173A30(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_001736B8();
    func_00173A90(arg0, arg1, arg2, arg3);
    func_001736D0();
}

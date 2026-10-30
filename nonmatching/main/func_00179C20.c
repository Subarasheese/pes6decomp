/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001795B0(void);
extern int func_001795C8(void);
M2C_UNK func_00179C90(s32, s32, s32, s32, s32);     /* extern */

void func_00179C20(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001795B0();
    func_00179C90(arg0, arg1, arg2, arg3, arg4);
    func_001795C8();
}

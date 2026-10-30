/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00162D48(void);
extern void func_00162D40(void);
M2C_UNK func_00163258(s32, s32, s32, s32, s32);     /* extern */

void func_001631E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00162D40();
    func_00163258(arg0, arg1, arg2, arg3, arg4);
    func_00162D48();
}

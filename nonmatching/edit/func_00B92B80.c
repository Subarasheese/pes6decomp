/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E3370(void *, s32);
extern void func_002E36D0(void *, u8);
void func_00B92B80(void *arg0, s32 arg1, u8 arg2) {
    func_002E36D0(func_002E3370(arg0, arg1), arg2);
}

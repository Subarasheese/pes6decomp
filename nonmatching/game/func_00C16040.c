/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C13AB0(void *, s32, s32);
extern char D_00CCADF4[];

void func_00C16040(s32 arg0, s32 arg1) {
    func_00C13AB0(((void *)D_00CCADF4), arg0, arg1);
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00110E88(void *, s32, s32, s32);
extern char D_0044D2B4[];

void func_001106C4(s32 arg0, s32 arg1) {
    func_00110E88(((void *)D_0044D2B4), arg0, 8, arg1);
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A4128(s32, s32, void *, s32);
extern char D_00600788[];

void func_001A4250(s32 arg0, void *arg1) {
    func_001A4128(arg0, (s32) ((void *)D_00600788), arg1, 1);
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00BD6D80(void *, s32);
extern char D_00CBC460[];

void func_00BD6D70(s32 arg0) {
    func_00BD6D80(((void *)D_00CBC460), arg0);
}

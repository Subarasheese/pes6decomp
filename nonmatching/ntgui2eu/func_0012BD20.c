/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0012BD48(void);
extern char D_011D4C90[];

void func_0012BD20(void) {
    func_0012BD48();
    (*(s32 *)D_011D4C90) = 2;
}

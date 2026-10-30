/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00154090(void);
extern char D_00923FDC[];

void func_008FF310(void) {
    (*(s32 *)D_00923FDC) = 1;
    func_00154090();
}

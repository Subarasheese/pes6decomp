/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C13B10(void *, void *, void *);
extern char D_00CCAF28[];

void func_00C17CD0(void *arg0, void *arg1) {
    func_00C13B10(((void *)D_00CCAF28), arg0, arg1);
}

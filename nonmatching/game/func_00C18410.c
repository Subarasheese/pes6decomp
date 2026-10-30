/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C13B10(void *, void *, void *);
extern char D_00CCAF44[];

void func_00C18410(void *arg0, void *arg1) {
    func_00C13B10(((void *)D_00CCAF44), arg0, arg1);
}

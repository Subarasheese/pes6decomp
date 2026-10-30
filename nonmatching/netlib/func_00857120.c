/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_008576A0(void *);
extern char D_008B218C[];

void func_00857120(void) {
    func_008576A0(((void *)D_008B218C));
}

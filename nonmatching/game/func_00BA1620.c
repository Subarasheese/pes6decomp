/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_00CBCEC4;

void func_00BA1620(void) {
    if (D_00CBCEC4 != NULL) {
        func_00153FA0(D_00CBCEC4);
        D_00CBCEC4 = NULL;
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 *D_003E77AC;

void func_0094C7D0(s32 arg0) {
    if (D_003E77AC != NULL) {
        *D_003E77AC = arg0;
    }
}

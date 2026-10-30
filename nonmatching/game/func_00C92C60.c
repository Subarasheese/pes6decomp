/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003EA8AC;

void func_00C92C60(f32 fparg0) {
    if (D_003EA8AC != NULL) {
        *D_003EA8AC = fparg0;
    }
}

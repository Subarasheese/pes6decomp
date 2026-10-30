/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00B93030(f32 *arg0, s32 arg1, f32 fparg0) {
    f32 temp_f2;

    if (arg1 == 0) {
        *arg0 = fparg0;
        return;
    }
    temp_f2 = *arg0;
    *arg0 = temp_f2 + ((fparg0 - temp_f2) / (f32) arg1);
}

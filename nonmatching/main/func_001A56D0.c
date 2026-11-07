/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00520570[];
extern char D_00520574[];

void func_001A56D0(f32 fparg0, f32 fparg1) {
    if (!(fparg0 < 1.0f)) {
        (*(f32 *)D_00520570) = fparg0;
    } else {
        (*(f32 *)D_00520570) = 1.0f;
    }
    if ((fparg1 - (*(f32 *)D_00520570)) < 100.0f) {
        (*(f32 *)D_00520574) = 100.0f + (*(f32 *)D_00520570);
    } else {
        (*(f32 *)D_00520574) = fparg1;
    }
}

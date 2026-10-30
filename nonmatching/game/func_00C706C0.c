/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_00CCBD1D[];
extern char D_00CCBD20[];

void func_00C706C0(s8 arg0) {
    s8 var_a0;

    var_a0 = arg0;
    if ((*(u8 *)D_00591C09) == 5) {
        var_a0 = 0;
    }
    (*(s8 *)D_00CCBD1D) = var_a0;
    (*(s8 *)D_00CCBD20) = var_a0;
}

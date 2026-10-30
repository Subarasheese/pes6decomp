/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_00CCBD1F[];

void func_00C70720(s8 arg0) {
    s8 var_a0;

    var_a0 = arg0;
    if ((*(u8 *)D_00591C09) == 5) {
        var_a0 = 0;
    }
    (*(s8 *)D_00CCBD1F) = var_a0;
}

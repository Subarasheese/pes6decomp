/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCAF0[];

void func_00B3C410(void) {
    if ((*(s32 *)D_00CBCAF0) > 0) {
        (*(s32 *)D_00CBCAF0) -= 1;
    } else {
        (*(s32 *)D_00CBCAF0) = 0;
    }
}

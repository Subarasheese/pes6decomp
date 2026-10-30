/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCB29[];
extern char D_00CBCB2B[];
extern char D_00CBCB2C[];

void func_00B37330(s8 arg0) {
    if ((*(s8 *)D_00CBCB2B) < (*(s8 *)D_00CBCB2C)) {
        (*(s8 *)D_00CBCB29) = arg0;
    }
}

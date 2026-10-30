/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCB28[];
extern char D_00CBCB2A[];
extern char D_00CBCB2F[];

void func_00B372D0(void) {
    if ((*(s8 *)D_00CBCB2A) != (*(u8 *)D_00CBCB28)) {
        (*(s8 *)D_00CBCB2F) = 1;
    }
}

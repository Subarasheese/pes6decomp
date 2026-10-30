/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCC60[];

u8 func_00B7B8E0(void) {
    if ((*(u8 *)D_00CBCC60) == 0) {
        (*(u8 *)D_00CBCC60) = 1;
    }
    return (*(u8 *)D_00CBCC60);
}

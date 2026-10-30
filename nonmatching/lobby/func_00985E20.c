/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7D730[];
extern char D_00A7D738[];
extern char D_00A7D740[];
extern char D_00A7D748[];

s32 func_00985E20(void) {
    if ((*(s32 *)D_00A7D748) != 1) {
        (*(s32 *)D_00A7D730) = 1;
        (*(s32 *)D_00A7D740) = 0;
        (*(s32 *)D_00A7D738) = 0;
    }
    return 1;
}

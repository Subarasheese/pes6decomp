/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
extern char D_008B2514[];
extern char D_008B2518[];

s32 func_008842C0(void) {
    (*(s8 *)D_008B2518) = 0;
    if ((*(s32 *)D_008B2514) != 0) {
        func_001D5C40(0x1024C);
    }
    return 0;
}

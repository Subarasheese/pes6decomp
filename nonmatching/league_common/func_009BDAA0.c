/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A5750();                            /* extern */
extern char D_003FB114[];
extern char D_003FB118[];

void func_009BDAA0(void) {
    func_001A5750();
    (*(s32 *)D_003FB114) = 0;
    (*(s32 *)D_003FB118) = 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B79C0();                            /* extern */
extern char D_00CE4E90[];
extern char D_00CE4E94[];

void func_00BC3DF0(void) {
    func_001B79C0();
    (*(s32 *)D_00CE4E94) = (*(s32 *)D_00CE4E90);
    (*(s32 *)D_00CE4E90) = 0;
}
